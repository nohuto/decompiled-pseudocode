/*
 * XREFs of CmReleaseLoadKeyContext @ 0x140700F00
 * Callers:
 *     CmLoadDifferencingKey @ 0x1406FE1FC (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     UNLOCK_HIVE_LOAD @ 0x1407011E0 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14070121C (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x140701374 (LOCK_HIVE_LOAD.c)
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
