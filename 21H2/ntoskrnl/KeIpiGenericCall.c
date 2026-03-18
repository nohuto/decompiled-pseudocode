/*
 * XREFs of KeIpiGenericCall @ 0x1403B4600
 * Callers:
 *     KeAdjustInterruptTime @ 0x140398D58 (KeAdjustInterruptTime.c)
 *     MiZeroPageCalibrate @ 0x1403D3EE0 (MiZeroPageCalibrate.c)
 *     HalpTscSynchronization @ 0x1403DD730 (HalpTscSynchronization.c)
 *     HalpCmciHandler @ 0x140509620 (HalpCmciHandler.c)
 *     HalpTscFallbackToPlatformSource @ 0x14050DC38 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x14050F964 (HalpTimerMeasureAllProcessorFrequencies.c)
 *     KiDynamicProcessorInitialization @ 0x14056918C (KiDynamicProcessorInitialization.c)
 *     KeStartProfile @ 0x14057158C (KeStartProfile.c)
 *     KeStopProfile @ 0x1405716A4 (KeStopProfile.c)
 *     MiStackTheftFreezeProcessors @ 0x140590CF0 (MiStackTheftFreezeProcessors.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1405A216C (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiWritePteHighLevel @ 0x1405AE144 (MiWritePteHighLevel.c)
 *     HalpLoadMicrocode @ 0x14090A1A0 (HalpLoadMicrocode.c)
 *     HalpLbrConfigurationWorker @ 0x14090B0BC (HalpLbrConfigurationWorker.c)
 *     KeRestoreMtrrBroadcast @ 0x140A5A248 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x140A69694 (KiUpdateNumberProcessors.c)
 *     KiUpdateSavedSupervisorState @ 0x140A69870 (KiUpdateSavedSupervisorState.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiIpiSendPacket @ 0x1402F38C4 (KiIpiSendPacket.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v5; // r10
  ULONG v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // cl
  ULONG_PTR v11; // rbp
  struct _KPRCB *v12; // rcx
  _DWORD *SchedulerAssist; // r9
  _DWORD *v15; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v17; // rdx
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  ULONG ActiveProcessorCount; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+70h] [rbp+18h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xCu )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v5 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (v5 + 1)) & 0x1FFC;
      }
    }
  }
  v24 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v6 = ActiveProcessorCount - 1;
  KxAcquireSpinLock(&KiReverseStallIpiLock);
  if ( v6 )
    KiIpiSendPacket(
      1,
      0,
      (__int64)KiIpiGenericCallTarget,
      (__int64)BroadcastFunction,
      Context,
      (__int64)&ActiveProcessorCount);
  while ( ActiveProcessorCount != 1 )
    KeYieldProcessorEx(&v24, v7, v8, v9);
  v10 = KeGetCurrentIrql();
  __writecr8(0xEuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
  {
    v15 = KeGetCurrentPrcb()->SchedulerAssist;
    v15[5] |= (-1 << (v10 + 1)) & 0x7FFC;
  }
  ActiveProcessorCount = 0;
  v11 = ((__int64 (__fastcall *)(ULONG_PTR))BroadcastFunction)(Context);
  if ( v6 )
  {
    if ( CurrentIrql <= 0xCu )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = CurrentPrcb->SchedulerAssist;
          v18 = (v17[5] & 0xFFFF1FFF) == 0;
          v17[5] &= 0xFFFF1FFF;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(0xCuLL);
    }
    v12 = KeGetCurrentPrcb();
    while ( v12->PacketBarrier )
      _mm_pause();
  }
  KxReleaseSpinLock(&KiReverseStallIpiLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v11;
}
