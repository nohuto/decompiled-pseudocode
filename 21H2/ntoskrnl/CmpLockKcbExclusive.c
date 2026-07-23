/*
 * XREFs of CmpLockKcbExclusive @ 0x1406DBABC
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140213A9C (CmpRemoveHiveFromNamespace.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1405FFF90 (CmpVEExecuteCreateLogic.c)
 *     CmpVEExecuteOpenLogic @ 0x140649DB0 (CmpVEExecuteOpenLogic.c)
 *     CmpDeleteKeyObject @ 0x14065C3E0 (CmpDeleteKeyObject.c)
 *     DelistKeyBodyFromKCB @ 0x14065C750 (DelistKeyBodyFromKCB.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14065DE90 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x140660F58 (CmpLockKcbStackExclusive.c)
 *     CmpDelayCloseWorker @ 0x1406DBAF0 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCreateKeyBody @ 0x140713A70 (CmpCreateKeyBody.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140734C64 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmLockKeyForWrite @ 0x1407C3510 (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E884 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F334 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpReplicateKeyToVirtual @ 0x140870B24 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140872954 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
