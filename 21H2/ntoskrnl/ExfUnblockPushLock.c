/*
 * XREFs of ExfUnblockPushLock @ 0x1403F96E0
 * Callers:
 *     CmpFreeCallbackObjectContexts @ 0x1405D6B4C (CmpFreeCallbackObjectContexts.c)
 *     ExUnlockHandleTableEntry @ 0x1405D6CB0 (ExUnlockHandleTableEntry.c)
 *     CmpCommitLightWeightTransaction @ 0x1405DE998 (CmpCommitLightWeightTransaction.c)
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x1405E0268 (CmpCompleteUnloadKey.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E27D0 (ObpReferenceProcessObjectByHandle.c)
 *     CmpWorkerEngineWorker @ 0x1405E29D0 (CmpWorkerEngineWorker.c)
 *     ObpEnumFindHandleProcedure @ 0x1405E2AE0 (ObpEnumFindHandleProcedure.c)
 *     ObQueryObjectAuditingByHandle @ 0x1405E2BC0 (ObQueryObjectAuditingByHandle.c)
 *     ObpProcessRemoveObjectQueue @ 0x1405E2E40 (ObpProcessRemoveObjectQueue.c)
 *     ObSetHandleAttributes @ 0x1405F1710 (ObSetHandleAttributes.c)
 *     PspClearProcessThreadCidRefs @ 0x1406419A0 (PspClearProcessThreadCidRefs.c)
 *     ObReferenceFileObjectForWrite @ 0x140645330 (ObReferenceFileObjectForWrite.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1406856D0 (RtlpAtomMapAtomToHandleEntry.c)
 *     PspReferenceCidTableEntry @ 0x14068F6C0 (PspReferenceCidTableEntry.c)
 *     ExpDuplicateSingleHandle @ 0x140696010 (ExpDuplicateSingleHandle.c)
 *     ObInheritObjectHandle @ 0x1406960B4 (ObInheritObjectHandle.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1406EC520 (ObWaitForMultipleObjects.c)
 *     MiLockImageSection @ 0x1407064BC (MiLockImageSection.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 *     CmpTransSearchAddTrans @ 0x140766FEC (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x14076727C (CmpTransInitializeTransaction.c)
 *     CmpEnumerateCallback @ 0x14077CF70 (CmpEnumerateCallback.c)
 *     PopBatteryWorker @ 0x14077F9D0 (PopBatteryWorker.c)
 *     IopIsFileOpenOrSection @ 0x140895A80 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x1408A1570 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x1408DC560 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1408DCA10 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x1408DCC24 (ObpAuditObjectAccess.c)
 *     PsSetVmProcessorHostProcess @ 0x140909F08 (PsSetVmProcessorHostProcess.c)
 *     ExQueryProcessHandleInformation @ 0x14094CA74 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x14094CE00 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140214048 (ExpUnblockPushLock.c)
 */

int __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
