/*
 * XREFs of ExfUnblockPushLock @ 0x1403F9560
 * Callers:
 *     CmpFreeCallbackObjectContexts @ 0x1405D6B4C (CmpFreeCallbackObjectContexts.c)
 *     ExUnlockHandleTableEntry @ 0x1405D6CB0 (ExUnlockHandleTableEntry.c)
 *     AlpcpLookupMessage @ 0x1405E6870 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     ExpDuplicateSingleHandle @ 0x140606580 (ExpDuplicateSingleHandle.c)
 *     ObInheritObjectHandle @ 0x140606624 (ObInheritObjectHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14061BA60 (RtlpAtomMapAtomToHandleEntry.c)
 *     PspReferenceCidTableEntry @ 0x140625A50 (PspReferenceCidTableEntry.c)
 *     PspClearProcessThreadCidRefs @ 0x14064CB80 (PspClearProcessThreadCidRefs.c)
 *     ObReferenceFileObjectForWrite @ 0x140650510 (ObReferenceFileObjectForWrite.c)
 *     ObpProcessRemoveObjectQueue @ 0x140684B90 (ObpProcessRemoveObjectQueue.c)
 *     ObpEnumFindHandleProcedure @ 0x140684F00 (ObpEnumFindHandleProcedure.c)
 *     ObQueryObjectAuditingByHandle @ 0x140684FE0 (ObQueryObjectAuditingByHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1406855C0 (ObpReferenceProcessObjectByHandle.c)
 *     CmpWorkerEngineWorker @ 0x1406857C0 (CmpWorkerEngineWorker.c)
 *     ObSetHandleAttributes @ 0x1406918A0 (ObSetHandleAttributes.c)
 *     CmpCommitLightWeightTransaction @ 0x1406A2C98 (CmpCommitLightWeightTransaction.c)
 *     MiLockImageSection @ 0x1406EF0DC (MiLockImageSection.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406F0C00 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 *     ObCloseHandleTableEntry @ 0x1406F5660 (ObCloseHandleTableEntry.c)
 *     CmpPerformUnloadKey @ 0x14071A1B8 (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x14071CB34 (CmpCompleteUnloadKey.c)
 *     CmpTransSearchAddTrans @ 0x140766E2C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1407670BC (CmpTransInitializeTransaction.c)
 *     CmpEnumerateCallback @ 0x14077CDB0 (CmpEnumerateCallback.c)
 *     PopBatteryWorker @ 0x14077F810 (PopBatteryWorker.c)
 *     IopIsFileOpenOrSection @ 0x140895920 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x1408A1410 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x1408DC400 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1408DC8B0 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x1408DCAC4 (ObpAuditObjectAccess.c)
 *     PsSetVmProcessorHostProcess @ 0x140909DA8 (PsSetVmProcessorHostProcess.c)
 *     ExQueryProcessHandleInformation @ 0x14094C8A4 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x14094CC30 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x14029CE28 (ExpUnblockPushLock.c)
 */

int __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
