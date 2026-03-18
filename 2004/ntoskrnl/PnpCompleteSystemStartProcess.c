/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1403C0454
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036DEC0 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x14037A540 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x14075F1A8 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x140775FF0 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x1407AA0C0 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x1407AA1A4 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x1407AA23C (PiInitReleaseCachedGroupInformation.c)
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
