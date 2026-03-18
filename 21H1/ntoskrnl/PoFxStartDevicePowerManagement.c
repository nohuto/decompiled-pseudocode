/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x1403B9D40
 * Callers:
 *     HalpDmaInitPowerManagement @ 0x1403B6E10 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x1403B9AFC (HalpInterruptInitPowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x1403B9C18 (HalpTimerInitPowerManagement.c)
 *     PoFxEnableDStateReporting @ 0x1408DF9B0 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDebugger @ 0x140A6FAE8 (PoFxRegisterDebugger.c)
 * Callees:
 *     PoFxIdleComponent @ 0x140237150 (PoFxIdleComponent.c)
 *     PoFxActivateComponent @ 0x1402374C0 (PoFxActivateComponent.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     PopFxActivateDevice @ 0x14036B650 (PopFxActivateDevice.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1403851E4 (PopFxIncrementDeviceSleepCount.c)
 *     PopPepDeviceStarted @ 0x1403B9EAC (PopPepDeviceStarted.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x14079C64C (PopDiagTraceFxDeviceStartPowerManagement.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rbx
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  PopPepDeviceStarted(*(_QWORD *)(BugCheckParameter2 + 56));
  v3 = *(_QWORD *)(BugCheckParameter2 + 64);
  v4 = 0;
  if ( v3 )
  {
    v22 = *(_QWORD *)(BugCheckParameter2 + 72);
    (*(void (__fastcall **)(__int64, __int64 *))(v3 + 96))(18LL, &v22);
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
              v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v20 = (v19 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v19;
              if ( v20 )
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( v12 )
  {
    v21 = *(_QWORD *)(v1 + 32);
    PopFxActivateDevice(v21, 0, 0);
    PopFxIncrementDeviceSleepCount(v21);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 828) )
  {
    do
      PoFxIdleComponent(BugCheckParameter2, v4++);
    while ( v4 < *(_DWORD *)(BugCheckParameter2 + 828) );
  }
}
