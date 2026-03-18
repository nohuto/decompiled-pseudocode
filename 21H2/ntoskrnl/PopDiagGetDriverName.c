/*
 * XREFs of PopDiagGetDriverName @ 0x140395628
 * Callers:
 *     PopDiagTraceDeviceAcquireIrp @ 0x1403A39F4 (PopDiagTraceDeviceAcquireIrp.c)
 *     PopDiagTraceIrpFinish @ 0x1403A5020 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x1403A51D0 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1405DF54C (PopRecordPoIrpBlackboxInformation.c)
 *     PopDiagTraceDriverVeto @ 0x140A6B7AC (PopDiagTraceDriverVeto.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x140248A04 (RtlStringCbCopyNW.c)
 */

NTSTATUS __fastcall PopDiagGetDriverName(__int64 a1, wchar_t *a2)
{
  __int64 v2; // rax
  const wchar_t *v3; // r8

  if ( a1 && (v2 = *(_QWORD *)(a1 + 8), (v3 = *(const wchar_t **)(v2 + 64)) != 0LL) && *(_WORD *)(v2 + 56) )
    return RtlStringCbCopyNW(a2, 0x80uLL, v3, *(unsigned __int16 *)(v2 + 56));
  else
    return -1073741823;
}
