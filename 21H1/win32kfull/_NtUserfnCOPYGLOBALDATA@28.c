/*
 * XREFs of _NtUserfnCOPYGLOBALDATA@28 @ 0x16B4C0
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnCOPYGLOBALDATA(int a1, int a2, SIZE_T Length, volatile void *Address, int a5, char a6, int a7)
{
  ProbeForRead(Address, Length, 1u);
  return ((int (__stdcall *)(int, int, SIZE_T, volatile void *, int))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           Length,
           Address,
           a5);
}
