/*
 * XREFs of PnpDiagnosticTraceDriverInitPhaseStart @ 0x1403CF14C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWriteStartScenario @ 0x1407846B0 (EtwWriteStartScenario.c)
 */

__int64 PnpDiagnosticTraceDriverInitPhaseStart()
{
  if ( PnpEtwHandle )
    return EtwWriteStartScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Start, &PnpDriverInitPhaseActivityId, 0, 0LL);
  else
    return 0LL;
}
