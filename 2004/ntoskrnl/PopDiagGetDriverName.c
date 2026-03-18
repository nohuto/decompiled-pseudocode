/*
 * XREFs of PopDiagGetDriverName @ 0x14038667C
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x140378C44 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x140378DFC (PopDiagTraceIrpFinishTelemetry.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140395EF8 (PopDiagTraceDeviceAcquireIrp.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x14057A1B8 (PopRecordPoIrpBlackboxInformation.c)
 *     PopDiagTraceDriverVeto @ 0x1409AF154 (PopDiagTraceDriverVeto.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1402722F8 (RtlStringCbCopyNW.c)
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
