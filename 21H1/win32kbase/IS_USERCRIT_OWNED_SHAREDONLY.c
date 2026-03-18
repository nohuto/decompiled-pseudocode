/*
 * XREFs of IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C004E800
 * Callers:
 *     ThreadUnlockWorker1 @ 0x1C000FE20 (ThreadUnlockWorker1.c)
 *     HMUnlockObjectWorker @ 0x1C005ACF0 (HMUnlockObjectWorker.c)
 *     HMUnlockObjectInternal @ 0x1C0073480 (HMUnlockObjectInternal.c)
 *     ThreadUnlock1 @ 0x1C00828E0 (ThreadUnlock1.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C0121C98 (AddToDeferredUserCritThreadUnlockList.c)
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
