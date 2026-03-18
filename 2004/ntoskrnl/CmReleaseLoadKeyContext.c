/*
 * XREFs of CmReleaseLoadKeyContext @ 0x1406525A0
 * Callers:
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     UNLOCK_HIVE_LOAD @ 0x14063FF30 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14063FF6C (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x1406400C4 (LOCK_HIVE_LOAD.c)
 */

_QWORD *__fastcall CmReleaseLoadKeyContext(ULONG_PTR BugCheckParameter4, int a2)
{
  if ( a2 < 0 )
  {
    LOCK_HIVE_LOAD();
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
    return (_QWORD *)CmpUnlockRegistry();
  }
}
