/*
 * XREFs of IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C0017000
 * Callers:
 *     HMUnlockObjectWorker @ 0x1C0016F40 (HMUnlockObjectWorker.c)
 *     ThreadUnlockWorker1 @ 0x1C0023DF0 (ThreadUnlockWorker1.c)
 *     HMUnlockObjectInternal @ 0x1C00763C0 (HMUnlockObjectInternal.c)
 *     ThreadUnlock1 @ 0x1C00899B0 (ThreadUnlock1.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C011AF88 (AddToDeferredUserCritThreadUnlockList.c)
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
