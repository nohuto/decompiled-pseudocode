/*
 * XREFs of CmpLockKcbExclusive @ 0x1405EC35C
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x140361788 (CmpRemoveHiveFromNamespace.c)
 *     CmpDelayCloseWorker @ 0x1405EC390 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpVEExecuteOpenLogic @ 0x140654F90 (CmpVEExecuteOpenLogic.c)
 *     CmpDeleteKeyObject @ 0x1406675C0 (CmpDeleteKeyObject.c)
 *     DelistKeyBodyFromKCB @ 0x140667930 (DelistKeyBodyFromKCB.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140669070 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x14066C138 (CmpLockKcbStackExclusive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406A0A00 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1406A0C50 (CmpVEExecuteCreateLogic.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 *     CmpCreateKeyBody @ 0x1406FC690 (CmpCreateKeyBody.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140734AA4 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmLockKeyForWrite @ 0x1407C2FF0 (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E724 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F1D4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpReplicateKeyToVirtual @ 0x1408709C4 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1408727F4 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
