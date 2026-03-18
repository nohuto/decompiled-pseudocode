/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x14077AA60
 * Callers:
 *     PopCheckShutdownMarker @ 0x140A36264 (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x14077AB6C (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2, __int64 a3)
{
  return RtlpSystemBootStatusRequest(31LL, a1, a2, a3);
}
