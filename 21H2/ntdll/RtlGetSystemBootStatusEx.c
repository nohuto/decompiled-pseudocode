/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x1800EE170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2, __int64 a3)
{
  return RtlpSystemBootStatusRequest(31, a1, a2, a3);
}
