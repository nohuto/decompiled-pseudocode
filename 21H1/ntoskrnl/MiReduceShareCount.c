/*
 * XREFs of MiReduceShareCount @ 0x1402F23FC
 * Callers:
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiDeleteNonPagedPoolTail @ 0x1402F2370 (MiDeleteNonPagedPoolTail.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
    return MiPfnShareCountIsZero(a1, 0LL, 0LL);
}
