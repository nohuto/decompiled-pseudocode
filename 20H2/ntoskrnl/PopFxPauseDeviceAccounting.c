/*
 * XREFs of PopFxPauseDeviceAccounting @ 0x140569D4C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405749B0 (PdcPoCurrentPdcPhase.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408F284C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140246DF4 (PopFxUpdateAccountingActiveTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxMergeActiveTimeAccounting @ 0x140569D08 (PopFxMergeActiveTimeAccounting.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x14056B294 (PopFxSetGlobalDeviceAccountingEnabled.c)
 */

_QWORD *PopFxPauseDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // r14
  ULONG_PTR i; // rdi
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  unsigned int j; // esi
  KSPIN_LOCK *v11; // rbx
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rcx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v1 = MEMORY[0xFFFFF78000000008];
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      if ( PopFxDeviceAccountingLevel < 0 )
      {
        v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 600));
        PopFxUpdateAccountingActiveTime(i + 600, v1, 0x47868C00uLL);
        PopFxMergeActiveTimeAccounting(v4);
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 600));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
              v9 = (v8 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v8;
              if ( v9 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v3);
      }
      for ( j = 0; j < *(_DWORD *)(i + 828); ++j )
      {
        v11 = (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * j) + 200LL);
        v12 = KeAcquireSpinLockRaiseToDpc(v11);
        PopFxUpdateAccountingActiveTime((__int64)v11, v1, 0x47868C00uLL);
        PopFxMergeActiveTimeAccounting(v13);
        KxReleaseSpinLock(v11);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v14 = KeGetCurrentIrql();
            if ( v14 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v14 >= 2u )
            {
              v15 = KeGetCurrentPrcb();
              v16 = v15->SchedulerAssist;
              v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
              v9 = (v17 & v16[5]) == 0;
              v16[5] &= v17;
              if ( v9 )
                KiRemoveSystemWorkPriorityKick((__int64)v15);
            }
          }
        }
        __writecr8(v12);
      }
    }
  }
  PopFxSetGlobalDeviceAccountingEnabled(0LL);
  PopFxDeviceAccountingPaused = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
