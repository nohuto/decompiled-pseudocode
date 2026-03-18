/*
 * XREFs of MiReduceShareCount @ 0x1403019DC
 * Callers:
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiDeleteNonPagedPoolTail @ 0x140301950 (MiDeleteNonPagedPoolTail.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReduceShareCount(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    KeBugCheckEx(
      0x4Eu,
      0x99uLL,
      (a1 + 0x58000000000LL) / 48,
      *(_BYTE *)(a1 + 34) & 7,
      *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v2 = (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) - a2;
  *(_QWORD *)(a1 + 24) ^= (v2 ^ *(_QWORD *)(a1 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v2 )
    return 2LL;
  else
    return MiPfnShareCountIsZero(a1, 0LL);
}
