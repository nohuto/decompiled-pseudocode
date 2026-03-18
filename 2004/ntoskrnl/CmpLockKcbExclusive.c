/*
 * XREFs of CmpLockKcbExclusive @ 0x1405DF678
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x14027262C (CmpRemoveHiveFromNamespace.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405DF248 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDelayCloseWorker @ 0x1405DF360 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     DelistKeyBodyFromKCB @ 0x1405ED3B0 (DelistKeyBodyFromKCB.c)
 *     CmpDeleteKeyObject @ 0x1405ED4B0 (CmpDeleteKeyObject.c)
 *     CmpCreateKeyBody @ 0x1405ED820 (CmpCreateKeyBody.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmpLockKcbStackExclusive @ 0x140644680 (CmpLockKcbStackExclusive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14064FA70 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteOpenLogic @ 0x1406931B0 (CmpVEExecuteOpenLogic.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407217C8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpTransMgrCommitUoW @ 0x140751ACC (CmpTransMgrCommitUoW.c)
 *     CmLockKeyForWrite @ 0x1407B0CB0 (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x14086B4C8 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086BF24 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14086F454 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
