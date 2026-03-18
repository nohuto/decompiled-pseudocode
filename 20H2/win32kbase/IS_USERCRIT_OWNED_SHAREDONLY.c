/*
 * XREFs of IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C0021350
 * Callers:
 *     HMUnlockObjectWorker @ 0x1C0021290 (HMUnlockObjectWorker.c)
 *     ThreadUnlock1 @ 0x1C0044210 (ThreadUnlock1.c)
 *     HMUnlockObjectInternal @ 0x1C0054B50 (HMUnlockObjectInternal.c)
 *     ThreadUnlockWorker1 @ 0x1C00873E0 (ThreadUnlockWorker1.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C01194C8 (AddToDeferredUserCritThreadUnlockList.c)
 * Callees:
 *     <none>
 */

__int64 IS_USERCRIT_OWNED_SHAREDONLY()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) )
    return ExIsResourceAcquiredSharedLite(gpresUser) != 0;
  return v0;
}
