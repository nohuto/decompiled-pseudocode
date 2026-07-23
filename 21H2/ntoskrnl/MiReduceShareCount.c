/*
 * XREFs of MiReduceShareCount @ 0x14021B1BC
 * Callers:
 *     MiDeleteNonPagedPoolTail @ 0x14021B130 (MiDeleteNonPagedPoolTail.c)
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
