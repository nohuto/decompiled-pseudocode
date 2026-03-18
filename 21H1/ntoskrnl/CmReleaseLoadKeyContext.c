/*
 * XREFs of CmReleaseLoadKeyContext @ 0x14068DF30
 * Callers:
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     UNLOCK_HIVE_LOAD @ 0x140691040 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14069107C (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x1406911D4 (LOCK_HIVE_LOAD.c)
 */

__int64 __fastcall CmReleaseLoadKeyContext(ULONG_PTR BugCheckParameter4, int a2)
{
  if ( a2 < 0 )
  {
    LOCK_HIVE_LOAD(BugCheckParameter4);
    CmpLockRegistry();
    if ( *(_BYTE *)(*(_QWORD *)(BugCheckParameter4 + 32) + 2936LL) == 1 )
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter4);
      CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter4 + 32));
    }
    else
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter4);
    }
    CmpUnlockRegistry();
    return UNLOCK_HIVE_LOAD();
  }
  else
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
    return CmpUnlockRegistry();
  }
}
