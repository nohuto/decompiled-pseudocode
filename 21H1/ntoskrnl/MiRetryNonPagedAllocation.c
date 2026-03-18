/*
 * XREFs of MiRetryNonPagedAllocation @ 0x140326EE4
 * Callers:
 *     MiGetPoolPages @ 0x140326CB4 (MiGetPoolPages.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KeAreInterruptsEnabled @ 0x140208590 (KeAreInterruptsEnabled.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x1402A1900 (MiSufficientAvailablePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
    || !KeAreInterruptsEnabled()
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0xA0uLL) )
    return 1LL;
  v1 = 0;
  Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
  for ( i = 1; ; i = KeWaitForSingleObject(&stru_140C51FE8, WrFreePage, 0, 0, Timeout) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C51FC0, &LockHandle);
    if ( (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0xA0uLL) )
      break;
    if ( i == 1 )
    {
      if ( byte_140C4C824 == 1 )
      {
        if ( dword_140C4C820 == dword_140C52000 )
          goto LABEL_29;
        byte_140C4C824 = 0;
      }
    }
    else
    {
      if ( i == 258 )
      {
        if ( !byte_140C4C824 )
        {
          dword_140C4C820 = dword_140C52000;
          byte_140C4C824 = 1;
        }
        goto LABEL_29;
      }
      Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    }
    KeResetEvent(&stru_140C51FE8);
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
  if ( byte_140C4C824 == 1 )
    byte_140C4C824 = 0;
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
