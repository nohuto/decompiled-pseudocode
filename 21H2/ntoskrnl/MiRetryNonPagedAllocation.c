/*
 * XREFs of MiRetryNonPagedAllocation @ 0x140262BDC
 * Callers:
 *     MiGetPoolPages @ 0x1402629AC (MiGetPoolPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAreInterruptsEnabled @ 0x14035B420 (KeAreInterruptsEnabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiRetryNonPagedAllocation()
{
  unsigned int v1; // esi
  LARGE_INTEGER *Timeout; // rbp
  NTSTATUS i; // ebx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r9
  int v14; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( KeGetCurrentIrql() > 1u
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
    || !(unsigned __int8)KeAreInterruptsEnabled()
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, 160LL) )
    return 1LL;
  v1 = 0;
  Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
  for ( i = 1; ; i = KeWaitForSingleObject(&stru_140C52128, WrFreePage, 0, 0, Timeout) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C52100, &LockHandle);
    if ( (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, 160LL) )
      break;
    if ( i == 1 )
    {
      if ( byte_140C4C924 == 1 )
      {
        if ( dword_140C4C920 == dword_140C52140 )
          goto LABEL_29;
        byte_140C4C924 = 0;
      }
    }
    else
    {
      if ( i == 258 )
      {
        if ( !byte_140C4C924 )
        {
          dword_140C4C920 = dword_140C52140;
          byte_140C4C924 = 1;
        }
        goto LABEL_29;
      }
      Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    }
    KeResetEvent(&stru_140C52128);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( byte_140C4C924 == 1 )
    byte_140C4C924 = 0;
  v1 = 1;
LABEL_29:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v10 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
  }
  __writecr8(v10);
  return v1;
}
