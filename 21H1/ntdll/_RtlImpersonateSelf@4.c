/*
 * XREFs of _RtlImpersonateSelf@4 @ 0x4B2EBF50
 * Callers:
 *     <none>
 * Callees:
 *     _RtlImpersonateSelfEx@12 @ 0x4B2EBF70 (_RtlImpersonateSelfEx@12.c)
 */

int __stdcall RtlImpersonateSelf(int a1)
{
  return RtlImpersonateSelfEx(a1, 0, 0);
}
