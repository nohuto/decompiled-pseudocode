/*
 * XREFs of CmReleaseLoadKeyContext @ 0x140667510
 * Callers:
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 * Callees:
 *     UNLOCK_HIVE_LOAD @ 0x1406677F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14066782C (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x140667984 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 */

__int64 __fastcall CmReleaseLoadKeyContext(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( a2 < 0 )
  {
    LOCK_HIVE_LOAD(BugCheckParameter2);
    CmpLockRegistry(v6);
    if ( *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 32) + 2936LL) == 1 )
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter2);
      CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter2 + 32));
    }
    else
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter2);
    }
    CmpUnlockRegistry(v8, v7);
    return UNLOCK_HIVE_LOAD();
  }
  else
  {
    CmpLockRegistry(BugCheckParameter2);
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
    return CmpUnlockRegistry(v4, v3);
  }
}
