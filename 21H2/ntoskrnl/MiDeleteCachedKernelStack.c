/*
 * XREFs of MiDeleteCachedKernelStack @ 0x1402726DC
 * Callers:
 *     MiAdjustCachedStacks @ 0x140272538 (MiAdjustCachedStacks.c)
 *     MiEmptyKernelStackCache @ 0x1403D02A4 (MiEmptyKernelStackCache.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x140272740 (MiDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteCachedKernelStack(__int64 a1)
{
  ULONG_PTR v1; // rcx
  ULONG_PTR v2; // r9

  v1 = a1 - 4080;
  v2 = *(_QWORD *)(v1 + 4064);
  if ( v2 != (v1 ^ qword_140C4EEC8) )
    KeBugCheckEx(0x1Au, 0x3472uLL, v1, v2, v1 ^ qword_140C4EEC8);
  return MiDeleteKernelStack(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
}
