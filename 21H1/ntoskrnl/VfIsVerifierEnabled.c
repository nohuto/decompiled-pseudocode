/*
 * XREFs of VfIsVerifierEnabled @ 0x140323280
 * Callers:
 *     IopQueryNameInternal @ 0x1405DABE4 (IopQueryNameInternal.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140759C2C (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x1408BBC18 (KsepPatchDriverImportsTable.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C1B40 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C1C60 (MmAddVerifierThunks.c)
 *     PopDripsWatchdogTakeAction @ 0x1408F5FF0 (PopDripsWatchdogTakeAction.c)
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x140994860 (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x1409A7108 (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x1409B4028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B4190 (KdExitDebugger.c)
 *     ViThunkSnapSharedExportByName @ 0x1409BF33C (ViThunkSnapSharedExportByName.c)
 *     VfDriverUnloadImage @ 0x1409BF4A4 (VfDriverUnloadImage.c)
 *     MmIsVerifierEnabled @ 0x1409BF5F0 (MmIsVerifierEnabled.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409D6478 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1409D6554 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1409D6648 (ViThunkReplaceSharedExports.c)
 *     VfFreePoolNotification @ 0x1409DD004 (VfFreePoolNotification.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
