/*
 * XREFs of RtlNewSecurityObject @ 0x180088530
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 */

__int64 __fastcall RtlNewSecurityObject(__int64 a1, _BYTE *a2, __int64 *a3, char a4, __int64 a5, __int64 a6)
{
  return RtlpNewSecurityObject(a1, a2, a3, 0LL, 0, a4, 0, a5, a6);
}
