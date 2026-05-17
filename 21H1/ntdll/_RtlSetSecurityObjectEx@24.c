/*
 * XREFs of _RtlSetSecurityObjectEx@24 @ 0x4B336710
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 */

int __stdcall RtlSetSecurityObjectEx(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return RtlpSetSecurityObject(a2, a3, a4, 1, a5, a6);
}
