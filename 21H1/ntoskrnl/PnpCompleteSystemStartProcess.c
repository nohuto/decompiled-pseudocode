/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1403BF4C4
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036BEB0 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x140379698 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x14075CCF4 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x140773BE0 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x1407A63C0 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x1407A64A4 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x1407A653C (PiInitReleaseCachedGroupInformation.c)
 */

NTSTATUS PnpCompleteSystemStartProcess()
{
  __int64 v0; // rcx
  NTSTATUS result; // eax

  PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Start, 0, 0LL);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Start, 0, 0LL);
  LOBYTE(v0) = 1;
  IopCallDriverReinitializationRoutines(v0);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Stop, 0, 0LL);
  PnPInitialized = 1;
  KeSetEvent(&PnpSystemDeviceEnumerationComplete, 0, 0);
  PiInitReleaseCachedGroupInformation();
  PpReleaseBootDDB();
  KseShimDatabaseBootRelease();
  result = PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Stop, 0, 0LL);
  if ( PnpEtwHandle )
    return EtwWriteEndScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Stop, &PnpDriverInitPhaseActivityId, 0, 0LL);
  return result;
}
