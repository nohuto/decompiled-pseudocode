/*
 * XREFs of CmpLockKcbExclusive @ 0x140670B6C
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x1402F2DB4 (CmpRemoveHiveFromNamespace.c)
 *     CmpVEExecuteOpenLogic @ 0x14060BF80 (CmpVEExecuteOpenLogic.c)
 *     CmpCreateKeyBody @ 0x14060E320 (CmpCreateKeyBody.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14061C620 (CmpDeleteKeyObject.c)
 *     DelistKeyBodyFromKCB @ 0x14061C990 (DelistKeyBodyFromKCB.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14066DDF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDelayCloseWorker @ 0x140670BA0 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1406723D0 (CmpCreateKeyControlBlock.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1406C4C5C (CmpVEExecuteCreateLogic.c)
 *     CmpLockKcbStackExclusive @ 0x1407022A8 (CmpLockKcbStackExclusive.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14072F7B8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpTransMgrCommitUoW @ 0x1407606AC (CmpTransMgrCommitUoW.c)
 *     CmLockKeyForWrite @ 0x1407BEBF0 (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x140870F1C (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1408719A4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpReplicateKeyToVirtual @ 0x140873194 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140874FA4 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
