/*
 * XREFs of ExfUnblockPushLock @ 0x1403F7730
 * Callers:
 *     CmpFreeCallbackObjectContexts @ 0x1405D3B6C (CmpFreeCallbackObjectContexts.c)
 *     ExUnlockHandleTableEntry @ 0x1405D3CD0 (ExUnlockHandleTableEntry.c)
 *     AlpcpLookupMessage @ 0x1405EDE10 (AlpcpLookupMessage.c)
 *     ObReferenceFileObjectForWrite @ 0x1405F8E90 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     ObCloseHandleTableEntry @ 0x1406160E0 (ObCloseHandleTableEntry.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140628C10 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObSetHandleAttributes @ 0x1406295A0 (ObSetHandleAttributes.c)
 *     PspClearProcessThreadCidRefs @ 0x140629798 (PspClearProcessThreadCidRefs.c)
 *     ObQueryObjectAuditingByHandle @ 0x140629840 (ObQueryObjectAuditingByHandle.c)
 *     PspReferenceCidTableEntry @ 0x14063B300 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x140688460 (ObWaitForMultipleObjects.c)
 *     CmpCommitLightWeightTransaction @ 0x1406A10F8 (CmpCommitLightWeightTransaction.c)
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x1406A2C9C (CmpCompleteUnloadKey.c)
 *     MiLockImageSection @ 0x1406A57A0 (MiLockImageSection.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1406A5D30 (ObpReferenceProcessObjectByHandle.c)
 *     CmpWorkerEngineWorker @ 0x1406A5F30 (CmpWorkerEngineWorker.c)
 *     ObpEnumFindHandleProcedure @ 0x1406A6000 (ObpEnumFindHandleProcedure.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B0C90 (ObpProcessRemoveObjectQueue.c)
 *     ExpDuplicateSingleHandle @ 0x1406F5460 (ExpDuplicateSingleHandle.c)
 *     ObInheritObjectHandle @ 0x1406F5504 (ObInheritObjectHandle.c)
 *     CmpTransSearchAddTrans @ 0x14076383C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x140763ACC (CmpTransInitializeTransaction.c)
 *     CmpEnumerateCallback @ 0x140778FD0 (CmpEnumerateCallback.c)
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 *     IopIsFileOpenOrSection @ 0x140898350 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x1408A3E40 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x1408DEC40 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1408DF0F0 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x1408DF304 (ObpAuditObjectAccess.c)
 *     PsSetVmProcessorHostProcess @ 0x14090C5F8 (PsSetVmProcessorHostProcess.c)
 *     ExQueryProcessHandleInformation @ 0x14094F0D4 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x14094F460 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1402F39D8 (ExpUnblockPushLock.c)
 */

int __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
