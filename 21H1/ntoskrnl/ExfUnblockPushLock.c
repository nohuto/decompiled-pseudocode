/*
 * XREFs of ExfUnblockPushLock @ 0x1403F1A30
 * Callers:
 *     CmpFreeCallbackObjectContexts @ 0x1405CC2F8 (CmpFreeCallbackObjectContexts.c)
 *     ExUnlockHandleTableEntry @ 0x1405CC440 (ExUnlockHandleTableEntry.c)
 *     PspReferenceCidTableEntry @ 0x1405E0210 (PspReferenceCidTableEntry.c)
 *     ObReferenceFileObjectForWrite @ 0x1405E4810 (ObReferenceFileObjectForWrite.c)
 *     ObpProcessRemoveObjectQueue @ 0x1405EF5A0 (ObpProcessRemoveObjectQueue.c)
 *     ObWaitForMultipleObjects @ 0x1405F7860 (ObWaitForMultipleObjects.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x14061DC70 (ObpReferenceProcessObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     ObCloseHandleTableEntry @ 0x140628AD0 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1406383F0 (RtlpAtomMapAtomToHandleEntry.c)
 *     CmpCommitLightWeightTransaction @ 0x140656638 (CmpCommitLightWeightTransaction.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x14065AE8C (CmpCompleteUnloadKey.c)
 *     ExpDuplicateSingleHandle @ 0x1406714B0 (ExpDuplicateSingleHandle.c)
 *     ObInheritObjectHandle @ 0x140671554 (ObInheritObjectHandle.c)
 *     ObpEnumFindHandleProcedure @ 0x1406B5FC0 (ObpEnumFindHandleProcedure.c)
 *     ObQueryObjectAuditingByHandle @ 0x1406B60A0 (ObQueryObjectAuditingByHandle.c)
 *     MiLockImageSection @ 0x1406B61A8 (MiLockImageSection.c)
 *     CmpWorkerEngineWorker @ 0x1406B62A0 (CmpWorkerEngineWorker.c)
 *     ObSetHandleAttributes @ 0x1406C1510 (ObSetHandleAttributes.c)
 *     PspClearProcessThreadCidRefs @ 0x1407070E0 (PspClearProcessThreadCidRefs.c)
 *     CmpTransSearchAddTrans @ 0x14075056C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1407507FC (CmpTransInitializeTransaction.c)
 *     CmpEnumerateCallback @ 0x1407685E0 (CmpEnumerateCallback.c)
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 *     IopIsFileOpenOrSection @ 0x1408913B0 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x14089CFF0 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x1408D7AB0 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1408D7F40 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x1408D8154 (ObpAuditObjectAccess.c)
 *     PsSetVmProcessorHostProcess @ 0x1409056F8 (PsSetVmProcessorHostProcess.c)
 *     ExQueryProcessHandleInformation @ 0x140947F74 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x140948300 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1402EBE18 (ExpUnblockPushLock.c)
 */

int __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
