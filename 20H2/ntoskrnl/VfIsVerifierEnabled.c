/*
 * XREFs of VfIsVerifierEnabled @ 0x140331B20
 * Callers:
 *     IopQueryNameInternal @ 0x1406361C4 (IopQueryNameInternal.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140768E64 (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x1408C2C98 (KsepPatchDriverImportsTable.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C8CD0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C8DF0 (MmAddVerifierThunks.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FCEF0 (PopDripsWatchdogTakeAction.c)
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x14099C000 (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x1409ADED8 (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x1409BA028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409BA190 (KdExitDebugger.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C535C (ViThunkSnapSharedExportByName.c)
 *     VfDriverUnloadImage @ 0x1409C54C4 (VfDriverUnloadImage.c)
 *     MmIsVerifierEnabled @ 0x1409C5610 (MmIsVerifierEnabled.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409DC4F8 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1409DC5D4 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1409DC6C8 (ViThunkReplaceSharedExports.c)
 *     VfFreePoolNotification @ 0x1409E3084 (VfFreePoolNotification.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
