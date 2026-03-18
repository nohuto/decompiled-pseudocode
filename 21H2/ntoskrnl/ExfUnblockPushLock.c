/*
 * XREFs of ExfUnblockPushLock @ 0x14041AC40
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14065CE0C (CmpCommitLightWeightTransaction.c)
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     CmpTransSearchAddTrans @ 0x14067F520 (CmpTransSearchAddTrans.c)
 *     CmpLateUnloadHiveWorker @ 0x140681670 (CmpLateUnloadHiveWorker.c)
 *     CmpFreeCallbackObjectContexts @ 0x140692E2C (CmpFreeCallbackObjectContexts.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406A1000 (ObpProcessRemoveObjectQueue.c)
 *     ExDupHandleTable @ 0x1406A6520 (ExDupHandleTable.c)
 *     ExpDuplicateSingleHandle @ 0x1406A6990 (ExpDuplicateSingleHandle.c)
 *     ObInheritObjectHandle @ 0x1406A6A34 (ObInheritObjectHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x14071E230 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     CmpTransInitializeTransaction @ 0x140741B7C (CmpTransInitializeTransaction.c)
 *     PspClearProcessThreadCidRefs @ 0x1407A0920 (PspClearProcessThreadCidRefs.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1407A1A30 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObSetHandleAttributes @ 0x1407A1B10 (ObSetHandleAttributes.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407A2680 (ObpReferenceProcessObjectByHandle.c)
 *     ObQueryObjectAuditingByHandle @ 0x1407A2A70 (ObQueryObjectAuditingByHandle.c)
 *     ObCloseHandleTableEntry @ 0x1407A2E10 (ObCloseHandleTableEntry.c)
 *     PspReferenceCidTableEntry @ 0x1407A8900 (PspReferenceCidTableEntry.c)
 *     AlpcpLookupMessage @ 0x1407ABD80 (AlpcpLookupMessage.c)
 *     ObpEnumFindHandleProcedure @ 0x1407ED7E0 (ObpEnumFindHandleProcedure.c)
 *     MiLockImageSection @ 0x1407EDA2C (MiLockImageSection.c)
 *     PopBatteryWorker @ 0x1407EDFC0 (PopBatteryWorker.c)
 *     CmpEnumerateCallback @ 0x1407FC920 (CmpEnumerateCallback.c)
 *     ExUnlockHandleTableEntry @ 0x14080AB10 (ExUnlockHandleTableEntry.c)
 *     IopIsFileOpenOrSection @ 0x140881750 (IopIsFileOpenOrSection.c)
 *     ExpSnapShotHandleTables @ 0x140883F24 (ExpSnapShotHandleTables.c)
 *     PnpHandleProcessWalkWorker @ 0x1409465D0 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x140983E50 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140984330 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x1409851A4 (ObpAuditObjectAccess.c)
 *     PsSetVmProcessorHostProcess @ 0x1409AF410 (PsSetVmProcessorHostProcess.c)
 *     ExQueryProcessHandleInformation @ 0x1409F8FB8 (ExQueryProcessHandleInformation.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140369634 (ExpUnblockPushLock.c)
 */

int __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
