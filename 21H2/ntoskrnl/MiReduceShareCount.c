/*
 * XREFs of MiReduceShareCount @ 0x14022876C
 * Callers:
 *     MiDeleteNonPagedPoolTail @ 0x1402286E0 (MiDeleteNonPagedPoolTail.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiBadShareCount @ 0x1405AD6C8 (MiBadShareCount.c)
 */

__int64 __fastcall MiReduceShareCount(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1, a2, a1, a2);
  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v3 ^ (((v3 & 0x3FFFFFFFFFFFFFFFLL) - a2) ^ v3) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v3 & 0x3FFFFFFFFFFFFFFFLL) == a2 )
    return MiPfnShareCountIsZero(a1);
  else
    return 2LL;
}
