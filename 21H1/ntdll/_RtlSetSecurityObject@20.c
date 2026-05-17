/*
 * XREFs of _RtlSetSecurityObject@20 @ 0x4B3366E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 */

int __stdcall RtlSetSecurityObject(int a1, int a2, int a3, int a4, int a5)
{
  return RtlpSetSecurityObject(a2, a3, 0, 1, a4, a5);
}
