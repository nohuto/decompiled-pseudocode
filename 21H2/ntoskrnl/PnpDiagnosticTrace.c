/*
 * XREFs of PnpDiagnosticTrace @ 0x14037BF28
 * Callers:
 *     PnpDiagnosticTraceDriverFullInfo @ 0x14037BD08 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14037BE44 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpCompleteSystemStartProcess @ 0x1403C3848 (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x14050F294 (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x1407D3F6C (PiProcessStartSystemDevices.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140A5E754 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140A6FEAC (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 */

NTSTATUS __fastcall PnpDiagnosticTrace(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v3; // rbx

  v3 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return EtwWriteEx(v3, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  else
    return 0;
}
