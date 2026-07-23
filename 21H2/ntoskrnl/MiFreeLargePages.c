/*
 * XREFs of MiFreeLargePages @ 0x14055E6D8
 * Callers:
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F6534 (MiDeleteSubsectionLargePages.c)
 *     MiDecommitRegion @ 0x1407059D0 (MiDecommitRegion.c)
 * Callees:
 *     MiFreeLargePageMemory @ 0x1403093A4 (MiFreeLargePageMemory.c)
 *     MiGetLeafPfnBuddy @ 0x14038059C (MiGetLeafPfnBuddy.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 *     MiFreeLargePageCrossPartitionCharges @ 0x1403F7AD8 (MiFreeLargePageCrossPartitionCharges.c)
 */

__int64 __fastcall MiFreeLargePages(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r15
  unsigned __int64 LeafPfnBuddy; // rbx
  __int64 v9; // r8
  unsigned int PfnPageSizeIndex; // eax
  __int64 v11; // r8
  __int64 result; // rax

  v2 = a1;
  v3 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(qword_140C4E688 + 8 * ((a1[5] >> 39) & 0x3FFLL));
  do
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(v2);
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(v9);
    v5 += MiLargePageSizes[PfnPageSizeIndex];
    v6 += MiFreeLargePageMemory((v11 + 0x58000000000LL) / 48, PfnPageSizeIndex, 8u);
    v2 = (_QWORD *)LeafPfnBuddy;
  }
  while ( LeafPfnBuddy );
  if ( v5 )
  {
    MiFreeLargePageCrossPartitionCharges(v7, v5);
    v3 = v5 - v6;
  }
  result = v3;
  *a2 = v6;
  return result;
}
