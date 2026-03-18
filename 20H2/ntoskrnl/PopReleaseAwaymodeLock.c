/*
 * XREFs of PopReleaseAwaymodeLock @ 0x140993570
 * Callers:
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x1408E4010 (PopAwayModePowerRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 */

_QWORD *PopReleaseAwaymodeLock()
{
  if ( (struct _KTHREAD *)PopAwaymodeLockExclusiveThread == KeGetCurrentThread() )
    PopAwaymodeLockExclusiveThread = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&PopAwaymodeLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
