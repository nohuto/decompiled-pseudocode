/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1403C3418
 * Callers:
 *     PnpDeviceActionWorker @ 0x1403700A0 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x14037C3D8 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x140771AD4 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x1407883D0 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x1407BCC60 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x1407BCD44 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x1407BCDDC (PiInitReleaseCachedGroupInformation.c)
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
