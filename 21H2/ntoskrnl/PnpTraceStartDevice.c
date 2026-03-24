/*
 * XREFs of PnpTraceStartDevice @ 0x14037C2A0
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14036F820 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x14073DF04 (PnpStartDeviceNode.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14031C950 (RtlImageNtHeader.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14037C2F4 (PnpDiagnosticTraceDeviceOperation.c)
 */

__int64 __fastcall PnpTraceStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax

  LOBYTE(v3) = 0;
  if ( a3 )
    v3 = *(_WORD *)(RtlImageNtHeader(*(_QWORD *)(a3 + 24)) + 70);
  PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceStart_Stop, v3);
  return 0LL;
}
