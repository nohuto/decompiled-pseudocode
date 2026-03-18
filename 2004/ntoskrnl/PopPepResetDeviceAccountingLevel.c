/*
 * XREFs of PopPepResetDeviceAccountingLevel @ 0x140570A48
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x14056F95C (PopPepInitializeVetoMasks.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoFxIdleDevice @ 0x14036B584 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14036B720 (PopFxActivateDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 */

_QWORD *PopPepResetDeviceAccountingLevel()
{
  signed __int32 v0; // eax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v2; // r12d
  __int64 i; // rdi
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned int j; // esi
  __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax

  v0 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  CurrentThread = KeGetCurrentThread();
  v2 = v0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    v4 = *(_QWORD *)(i + 32);
    v5 = *(_QWORD *)(v4 + 48);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 32);
      PopFxActivateDevice(v6, 0, 0);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 600));
      *(_DWORD *)(v4 + 616) = v2;
      memset((void *)(v4 + 632), 0, 0xC0uLL);
      if ( *(_DWORD *)(v4 + 612) == 5 )
      {
        *(_BYTE *)(v4 + 608) = 0;
        *(_QWORD *)(v4 + 624) = 0LL;
      }
      else
      {
        *(_BYTE *)(v4 + 608) = 1;
        *(_QWORD *)(v4 + 624) = MEMORY[0xFFFFF78000000008];
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 600));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      for ( j = 0; j < *(_DWORD *)(i + 180); ++j )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v4 + 832) + 8LL * j) + 200LL;
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14);
        *(_DWORD *)(v14 + 16) = v2;
        memset((void *)(v14 + 32), 0, 0xC0uLL);
        if ( *(_DWORD *)(v14 + 12) == -1 )
        {
          *(_BYTE *)(v14 + 8) = 0;
          *(_QWORD *)(v14 + 24) = 0LL;
        }
        else
        {
          *(_BYTE *)(v14 + 8) = 1;
          *(_QWORD *)(v14 + 24) = MEMORY[0xFFFFF78000000008];
        }
        KxReleaseSpinLock((PKSPIN_LOCK)v14);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v16 = KeGetCurrentIrql();
            if ( v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
            {
              v17 = KeGetCurrentPrcb();
              v18 = v17->SchedulerAssist;
              v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
              v12 = (v19 & v18[5]) == 0;
              v18[5] &= v19;
              if ( v12 )
                KiRemoveSystemWorkPriorityKick((__int64)v17);
            }
          }
        }
        __writecr8(v15);
      }
      PoFxIdleDevice(v6);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
