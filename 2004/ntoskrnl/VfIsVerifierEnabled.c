/*
 * XREFs of VfIsVerifierEnabled @ 0x140360D70
 * Callers:
 *     IopQueryNameInternal @ 0x140660EE4 (IopQueryNameInternal.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14075A6A4 (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x1408BCF38 (KsepPatchDriverImportsTable.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C2E90 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C2FB0 (MmAddVerifierThunks.c)
 *     PopDripsWatchdogTakeAction @ 0x1408F72E0 (PopDripsWatchdogTakeAction.c)
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x140995EE0 (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x1409A7F68 (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x1409B4028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B4190 (KdExitDebugger.c)
 *     ViThunkSnapSharedExportByName @ 0x1409BF34C (ViThunkSnapSharedExportByName.c)
 *     VfDriverUnloadImage @ 0x1409BF4B4 (VfDriverUnloadImage.c)
 *     MmIsVerifierEnabled @ 0x1409BF600 (MmIsVerifierEnabled.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409D64D8 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1409D65B4 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1409D66A8 (ViThunkReplaceSharedExports.c)
 *     VfFreePoolNotification @ 0x1409DD064 (VfFreePoolNotification.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
