/*
 * XREFs of RtlSetSecurityObject @ 0x180076770
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x1800767AC (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObject(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return RtlpSetSecurityObject(0, a1, a2, a3, 0, 1, a4, a5);
}
