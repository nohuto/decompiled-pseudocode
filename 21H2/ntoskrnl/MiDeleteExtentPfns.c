/*
 * XREFs of MiDeleteExtentPfns @ 0x1405409C0
 * Callers:
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541B30 (MiPurgeBadFileOnlyPages.c)
 *     MiWaitForExtentDeletions @ 0x140542920 (MiWaitForExtentDeletions.c)
 *     MiWakeExtentDeletionWaiters @ 0x140542A40 (MiWakeExtentDeletionWaiters.c)
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 */

char __fastcall MiDeleteExtentPfns(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  PRTL_BALANCED_NODE v3; // rax
  __int64 v4; // rbx
  int v5; // eax
  unsigned __int64 OldIrql; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 )
  {
    v3 = KeAbPreAcquire((ULONG_PTR)&qword_140C4CB50, 0LL, 0);
    if ( v3 )
      BYTE2(v3[1].Left) |= 1u;
  }
  while ( 1 )
  {
    MiPurgeBadFileOnlyPages(a1, a2);
    while ( qword_140C4CB28 )
      MiRemovePhysicalMemory(0LL);
    KeAcquireInStackQueuedSpinLock(&qword_140C51DE0, &LockHandle);
    v4 = qword_140C4CB28;
    if ( !v2 )
    {
      if ( qword_140C4CB28 || byte_140C4CB71 == 1 )
      {
        LOBYTE(v5) = MiWaitForExtentDeletions(&LockHandle);
        return v5;
      }
      goto LABEL_12;
    }
    if ( !qword_140C4CB28 )
      break;
LABEL_12:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(v5) = KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v5) = KeGetCurrentIrql();
        if ( (unsigned __int8)v5 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          a1 = (unsigned int)LockHandle.OldIrql + 1;
          a2 = -1LL << (LockHandle.OldIrql + 1);
          v5 = ~(unsigned __int16)a2;
          v9 = (v5 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v5;
          if ( v9 )
            LOBYTE(v5) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !v4 )
      goto LABEL_22;
  }
  LOBYTE(v5) = MiWakeExtentDeletionWaiters(&LockHandle);
LABEL_22:
  if ( v2 )
    LOBYTE(v5) = KeAbPostRelease((ULONG_PTR)&qword_140C4CB50);
  return v5;
}
