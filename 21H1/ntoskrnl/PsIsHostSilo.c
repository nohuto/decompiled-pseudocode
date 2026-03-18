/*
 * XREFs of PsIsHostSilo @ 0x1402556F0
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405EFAA0 (NtQueryInformationJobObject.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x140600890 (IopAllocRealFileObject.c)
 *     SeCreateClientSecurityEx @ 0x14060A240 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14060A440 (SepCreateClientSecurityEx.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406649AC (EtwpWriteAppStateChangeSummary.c)
 *     PspEstimateNewProcessServerSilo @ 0x14066BEE0 (PspEstimateNewProcessServerSilo.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140674ADC (IopAllocateFoExtensionsOnCreate.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PspMapSiloSharedDataView @ 0x1406F9DE8 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406F9E20 (MmMapApiSetView.c)
 *     PopTransitionCheckpoint @ 0x1407618D8 (PopTransitionCheckpoint.c)
 *     PsRegisterSiloMonitor @ 0x14077E490 (PsRegisterSiloMonitor.c)
 *     ObpInitializeRootNamespace @ 0x140782DDC (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140783244 (ObpCreateDosDevicesDirectory.c)
 *     ExInitLicenseData @ 0x140791B78 (ExInitLicenseData.c)
 *     SepRmCommandServerThread @ 0x1407953A0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140795520 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14079FC30 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x1407B3480 (ObInitServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140882634 (DbgkRegisterErrorPort.c)
 *     PspCatchCriticalBreak @ 0x140906864 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x140917A10 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x14091DF68 (SepUpdateSiloInClientSecurity.c)
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
