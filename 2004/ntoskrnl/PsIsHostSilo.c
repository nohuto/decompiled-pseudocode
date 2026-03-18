/*
 * XREFs of PsIsHostSilo @ 0x140291F70
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x140328D70 (ExpCenturyDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1403922C0 (ExpTimeZoneDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1405ACF70 (ExpNextYearDpcRoutine.c)
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406176C8 (PspEstimateNewProcessServerSilo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14061F28C (EtwpWriteAppStateChangeSummary.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14065867C (IopAllocateFoExtensionsOnCreate.c)
 *     PspMapSiloSharedDataView @ 0x14065D7D0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14065D808 (MmMapApiSetView.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x140678970 (IopAllocRealFileObject.c)
 *     SeCreateClientSecurityEx @ 0x140682390 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140682590 (SepCreateClientSecurityEx.c)
 *     NtQueryInformationJobObject @ 0x140698FB0 (NtQueryInformationJobObject.c)
 *     PopTransitionCheckpoint @ 0x1407631B8 (PopTransitionCheckpoint.c)
 *     PsRegisterSiloMonitor @ 0x14077DC80 (PsRegisterSiloMonitor.c)
 *     ObpInitializeRootNamespace @ 0x140788760 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140788BC8 (ObpCreateDosDevicesDirectory.c)
 *     ExInitLicenseData @ 0x1407943A8 (ExInitLicenseData.c)
 *     SepRmCommandServerThread @ 0x140795150 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407952D0 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14079C174 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x1407B65F0 (ObInitServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140883954 (DbgkRegisterErrorPort.c)
 *     PspCatchCriticalBreak @ 0x140907B14 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x140918CC4 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x14091F218 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x140948680 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
