/*
 * XREFs of PnpDiagnosticTrace @ 0x14037C270
 * Callers:
 *     PnpDiagnosticTraceDriverFullInfo @ 0x14037C050 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14037C18C (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpCompleteSystemStartProcess @ 0x1403C2BC8 (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x14050D524 (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x1407CFA0C (PiProcessStartSystemDevices.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140A5CBE8 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140A71F2C (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
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
