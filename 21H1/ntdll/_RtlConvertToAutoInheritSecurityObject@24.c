/*
 * XREFs of _RtlConvertToAutoInheritSecurityObject@24 @ 0x4B335B90
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpConvertToAutoInheritSecurityObject@24 @ 0x4B348358 (_RtlpConvertToAutoInheritSecurityObject@24.c)
 */

int __stdcall RtlConvertToAutoInheritSecurityObject(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return RtlpConvertToAutoInheritSecurityObject(a3, a4, a5, a6);
}
