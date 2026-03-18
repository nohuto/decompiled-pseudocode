/*
 * XREFs of FsRtlNotifyCleanup @ 0x1406B89C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     FsRtlIsNotifyOnList @ 0x1406B8D74 (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406B8D9C (FsRtlNotifyCleanupOneEntry.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyCleanup(PNOTIFY_SYNC NotifySync, PLIST_ENTRY NotifyList, PVOID FsContext)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *IsNotifyOnList; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  ++*((_DWORD *)NotifySync + 16);
  IsNotifyOnList = (void *)FsRtlIsNotifyOnList(NotifyList, FsContext);
  if ( IsNotifyOnList )
    FsRtlNotifyCleanupOneEntry(IsNotifyOnList);
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
