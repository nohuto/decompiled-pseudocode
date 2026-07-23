/*
 * XREFs of KeIpiGenericCall @ 0x1403A4C70
 * Callers:
 *     KeAdjustInterruptTime @ 0x14038D96C (KeAdjustInterruptTime.c)
 *     MiZeroPageCalibrate @ 0x1403AFF94 (MiZeroPageCalibrate.c)
 *     HalpTscSynchronization @ 0x1403CE860 (HalpTscSynchronization.c)
 *     HalpCmciHandler @ 0x1404BCCE8 (HalpCmciHandler.c)
 *     HalpTscFallbackToPlatformSource @ 0x1404C18D8 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x1404C3784 (HalpTimerMeasureAllProcessorFrequencies.c)
 *     KiDynamicProcessorInitialization @ 0x14051267C (KiDynamicProcessorInitialization.c)
 *     KeStartProfile @ 0x14051BE0C (KeStartProfile.c)
 *     KeStopProfile @ 0x14051BF20 (KeStopProfile.c)
 *     MiStackTheftFreezeProcessors @ 0x14053656C (MiStackTheftFreezeProcessors.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054476C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     HalpLbrConfigurationWorker @ 0x140866F1C (HalpLbrConfigurationWorker.c)
 *     KeRestoreMtrrBroadcast @ 0x1409A0344 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x1409B04E4 (KiUpdateNumberProcessors.c)
 *     KiUpdateSavedSupervisorState @ 0x1409B06B0 (KiUpdateSavedSupervisorState.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiIpiSendPacket @ 0x140268DE8 (KiIpiSendPacket.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
