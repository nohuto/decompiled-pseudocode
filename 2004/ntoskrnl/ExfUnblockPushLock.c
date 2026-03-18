/*
 * XREFs of ExfUnblockPushLock @ 0x1403F2CC0
 * Callers:
 *     CmpFreeCallbackObjectContexts @ 0x1405CD6C8 (CmpFreeCallbackObjectContexts.c)
 *     ExUnlockHandleTableEntry @ 0x1405CD810 (ExUnlockHandleTableEntry.c)
 *     ExpDuplicateSingleHandle @ 0x1405D0990 (ExpDuplicateSingleHandle.c)
 *     ObInheritObjectHandle @ 0x1405D0A34 (ObInheritObjectHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E8650 (ObpReferenceProcessObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     ObCloseHandleTableEntry @ 0x1405F34B0 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1406033B0 (RtlpAtomMapAtomToHandleEntry.c)
 *     CmpCompleteUnloadKey @ 0x14064364C (CmpCompleteUnloadKey.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmpCommitLightWeightTransaction @ 0x140653348 (CmpCommitLightWeightTransaction.c)
 *     PspReferenceCidTableEntry @ 0x140666510 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
 *     ObReferenceFileObjectForWrite @ 0x14068BE80 (ObReferenceFileObjectForWrite.c)
 *     ObpProcessRemoveObjectQueue @ 0x140698AB0 (ObpProcessRemoveObjectQueue.c)
 *     PspClearProcessThreadCidRefs @ 0x1406B1220 (PspClearProcessThreadCidRefs.c)
 *     ObpEnumFindHandleProcedure @ 0x1406D4350 (ObpEnumFindHandleProcedure.c)
 *     ObQueryObjectAuditingByHandle @ 0x1406D4430 (ObQueryObjectAuditingByHandle.c)
 *     MiLockImageSection @ 0x1406D4538 (MiLockImageSection.c)
 *     CmpWorkerEngineWorker @ 0x1406D4630 (CmpWorkerEngineWorker.c)
 *     ObSetHandleAttributes @ 0x1406E1A90 (ObSetHandleAttributes.c)
 *     CmpTransSearchAddTrans @ 0x140754BFC (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x140754E8C (CmpTransInitializeTransaction.c)
 *     CmpEnumerateCallback @ 0x14076A9C0 (CmpEnumerateCallback.c)
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 *     IopIsFileOpenOrSection @ 0x1408926D0 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x14089E310 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x1408D8E00 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1408D92B0 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x1408D94C4 (ObpAuditObjectAccess.c)
 *     PsSetVmProcessorHostProcess @ 0x1409069D8 (PsSetVmProcessorHostProcess.c)
 *     ExQueryProcessHandleInformation @ 0x140949314 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x1409496A0 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140325748 (ExpUnblockPushLock.c)
 */

int __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
