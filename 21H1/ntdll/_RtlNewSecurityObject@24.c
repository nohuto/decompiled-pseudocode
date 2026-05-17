/*
 * XREFs of _RtlNewSecurityObject@24 @ 0x4B2AC100
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 */

int __stdcall RtlNewSecurityObject(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return RtlpNewSecurityObject(a3, 0, 0, a4, 0, a5, a6, 0);
}
