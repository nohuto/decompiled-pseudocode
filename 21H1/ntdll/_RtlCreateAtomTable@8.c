/*
 * XREFs of _RtlCreateAtomTable@8 @ 0x4B2E0000
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateAtomTableEx@12 @ 0x4B2E0014 (_RtlCreateAtomTableEx@12.c)
 */

int __stdcall RtlCreateAtomTable(int a1, int a2)
{
  return RtlCreateAtomTableEx(a2);
}
