/*
 * XREFs of PnpDiagnosticTrace @ 0x1402D21B8
 * Callers:
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1402D1F98 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1402D20D4 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpCompleteSystemStartProcess @ 0x1403D2178 (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x14056294C (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x140863BE8 (PiProcessStartSystemDevices.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140B110B4 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140B2ABA4 (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
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
