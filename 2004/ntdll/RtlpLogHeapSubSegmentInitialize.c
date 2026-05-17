/*
 * XREFs of RtlpLogHeapSubSegmentInitialize @ 0x18010A4B0
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x18000A090 (RtlpSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x18010B79C (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD v10[10]; // [rsp+20h] [rbp-88h] BYREF

  memset(v10, 0, 0x44uLL);
  v10[4] = a1;
  HIWORD(v10[0]) = 4149;
  LODWORD(v10[8]) = a5;
  v10[5] = a2;
  v10[6] = a3;
  v10[7] = a4;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
