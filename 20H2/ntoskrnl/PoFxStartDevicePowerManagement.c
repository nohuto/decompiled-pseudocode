/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x1403BD510
 * Callers:
 *     HalpDmaInitPowerManagement @ 0x1403BA6E0 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x1403BD2C0 (HalpInterruptInitPowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x1403BD3DC (HalpTimerInitPowerManagement.c)
 *     PoFxEnableDStateReporting @ 0x1408E6A70 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDebugger @ 0x140A76AE8 (PoFxRegisterDebugger.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     PoFxActivateComponent @ 0x140245E90 (PoFxActivateComponent.c)
 *     PoFxIdleComponent @ 0x140246BF0 (PoFxIdleComponent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     PopFxActivateDevice @ 0x14036D700 (PopFxActivateDevice.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1403882F4 (PopFxIncrementDeviceSleepCount.c)
 *     PopPepDeviceStarted @ 0x1403BD67C (PopPepDeviceStarted.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x1407AF960 (PopDiagTraceFxDeviceStartPowerManagement.c)
 */

void __fastcall PoFxStartDevicePowerManagement(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  unsigned int v4; // edi
  KIRQL v5; // al
  unsigned int v6; // edx
  unsigned __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // r14
  unsigned int i; // ebp
  struct _KTHREAD *CurrentThread; // rax
  char v12; // bp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  PopPepDeviceStarted(*(_QWORD *)(BugCheckParameter2 + 56));
  v3 = *(_QWORD *)(BugCheckParameter2 + 64);
  v4 = 0;
  if ( v3 )
  {
    v19 = *(_QWORD *)(BugCheckParameter2 + 72);
    (*(void (__fastcall **)(__int64, __int64 *))(v3 + 96))(18LL, &v19);
  }
  if ( v1 )
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
    v6 = *(_DWORD *)(v1 + 120);
    v7 = v5;
    if ( (*(_DWORD *)(BugCheckParameter2 + 824) & 1) != 0 )
    {
      if ( !v6 )
      {
LABEL_10:
        _InterlockedOr((volatile signed __int32 *)(v1 + 296), 4u);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 88));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v17 = (v16 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v16;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v7);
        PopDiagTraceFxDeviceStartPowerManagement(v1);
        goto LABEL_12;
      }
      v6 = 0;
      *(_DWORD *)(v1 + 120) = 0;
    }
    if ( v6 )
    {
      v8 = *(_DWORD *)(BugCheckParameter2 + 828);
      v9 = v6;
      do
      {
        for ( i = 0; i < v8; ++i )
        {
          PoFxActivateComponent(BugCheckParameter2, i, 2);
          v8 = *(_DWORD *)(BugCheckParameter2 + 828);
        }
        --v9;
      }
      while ( v9 );
    }
    goto LABEL_10;
  }
LABEL_12:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v12 = PopFxEnableShutdownActiveBias;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 )
  {
    v18 = *(_QWORD *)(v1 + 32);
    PopFxActivateDevice(v18, 0, 0);
    PopFxIncrementDeviceSleepCount(v18);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 828) )
  {
    do
      PoFxIdleComponent(BugCheckParameter2, v4++);
    while ( v4 < *(_DWORD *)(BugCheckParameter2 + 828) );
  }
}
