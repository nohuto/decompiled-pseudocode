/*
 * XREFs of KeIpiGenericCall @ 0x1403A1600
 * Callers:
 *     KeAdjustInterruptTime @ 0x140389D8C (KeAdjustInterruptTime.c)
 *     MiZeroPageCalibrate @ 0x1403AD950 (MiZeroPageCalibrate.c)
 *     HalpTscSynchronization @ 0x1403CA230 (HalpTscSynchronization.c)
 *     HalpCmciHandler @ 0x1404B74E8 (HalpCmciHandler.c)
 *     HalpTscFallbackToPlatformSource @ 0x1404BC0C8 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x1404BDF74 (HalpTimerMeasureAllProcessorFrequencies.c)
 *     KiDynamicProcessorInitialization @ 0x14050C98C (KiDynamicProcessorInitialization.c)
 *     KeStartProfile @ 0x1405160CC (KeStartProfile.c)
 *     KeStopProfile @ 0x1405161E0 (KeStopProfile.c)
 *     MiStackTheftFreezeProcessors @ 0x14053080C (MiStackTheftFreezeProcessors.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14053EA0C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     HalpLbrConfigurationWorker @ 0x14086246C (HalpLbrConfigurationWorker.c)
 *     KeRestoreMtrrBroadcast @ 0x14099A2A4 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x1409AB8E4 (KiUpdateNumberProcessors.c)
 *     KiUpdateSavedSupervisorState @ 0x1409ABAB0 (KiUpdateSavedSupervisorState.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     KiIpiSendPacket @ 0x140359100 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
