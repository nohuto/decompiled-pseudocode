/*
 * XREFs of PsIsHostSilo @ 0x14020DC00
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x14035AEC0 (ExpCenturyDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140394780 (ExpTimeZoneDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1405B0AD0 (ExpNextYearDpcRoutine.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x140600550 (IopAllocRealFileObject.c)
 *     SeCreateClientSecurityEx @ 0x140620380 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140620580 (SepCreateClientSecurityEx.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14062CB7C (IopAllocateFoExtensionsOnCreate.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14064FECC (EtwpWriteAppStateChangeSummary.c)
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x140690394 (PspEstimateNewProcessServerSilo.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     PspMapSiloSharedDataView @ 0x1406AD308 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406AD340 (MmMapApiSetView.c)
 *     PopTransitionCheckpoint @ 0x1407717C8 (PopTransitionCheckpoint.c)
 *     PsRegisterSiloMonitor @ 0x14078B220 (PsRegisterSiloMonitor.c)
 *     ObpInitializeRootNamespace @ 0x140796470 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407968D8 (ObpCreateDosDevicesDirectory.c)
 *     ExInitLicenseData @ 0x1407A0C50 (ExInitLicenseData.c)
 *     SepRmCommandServerThread @ 0x1407A4480 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407A4600 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x1407AB4A4 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x1407C4E20 (ObInitServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x1408894A4 (DbgkRegisterErrorPort.c)
 *     PspCatchCriticalBreak @ 0x14090D734 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x14091E8F4 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x140924E98 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x14094E440 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
