/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x140790E50
 * Callers:
 *     PopCheckShutdownMarker @ 0x140A45890 (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140790F5C (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2, __int64 a3)
{
  return RtlpSystemBootStatusRequest(31LL, a1, a2, a3);
}
