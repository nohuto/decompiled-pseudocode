/*
 * XREFs of PopClearTransitionCheckpoints @ 0x140767DA8
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140995F50 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void PopClearTransitionCheckpoints()
{
  PVOID v0; // rcx
  __int64 v1; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTransitionCheckpointLock);
  while ( 1 )
  {
    v0 = PopTransitionCheckpoints;
    if ( PopTransitionCheckpoints == &PopTransitionCheckpoints )
      break;
    if ( *((PVOID **)PopTransitionCheckpoints + 1) != &PopTransitionCheckpoints
      || (v1 = *(_QWORD *)PopTransitionCheckpoints,
          *(PVOID *)(*(_QWORD *)PopTransitionCheckpoints + 8LL) != PopTransitionCheckpoints) )
    {
      __fastfail(3u);
    }
    PopTransitionCheckpoints = *(PVOID *)PopTransitionCheckpoints;
    *(_QWORD *)(v1 + 8) = &PopTransitionCheckpoints;
    ExFreePoolWithTag(v0, 0x50434B50u);
  }
  PopReleaseRwLock((ULONG_PTR)&PopTransitionCheckpointLock);
}
