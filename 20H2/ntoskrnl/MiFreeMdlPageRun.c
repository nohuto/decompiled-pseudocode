/*
 * XREFs of MiFreeMdlPageRun @ 0x14034E304
 * Callers:
 *     MiFreePagesFromMdl @ 0x14034E438 (MiFreePagesFromMdl.c)
 *     MiDeleteAweInfoPages @ 0x1408D86CC (MiDeleteAweInfoPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DD1B8 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x1408DD874 (MiFreePartitionPageRun.c)
 * Callees:
 *     MiFreeLargePageMemory @ 0x1402F19BC (MiFreeLargePageMemory.c)
 *     MiUpdateLargePageBitMap @ 0x14034A334 (MiUpdateLargePageBitMap.c)
 *     MiFreeSmallPageFromMdl @ 0x14034E0A4 (MiFreeSmallPageFromMdl.c)
 *     MiResidentPageDangleFree @ 0x1403F58F8 (MiResidentPageDangleFree.c)
 */

__int64 __fastcall MiFreeMdlPageRun(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, char a3)
{
  ULONG_PTR v3; // r15
  char v4; // r13
  __int64 v5; // rbp
  unsigned __int64 v7; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  unsigned int v11; // edx

  v3 = -1LL;
  v4 = a3 & 1;
  v5 = 0LL;
  v7 = a2;
  while ( v7 )
  {
    if ( (BugCheckParameter2 & 0xF) != 0 )
    {
LABEL_10:
      if ( v3 != (BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v3 = BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL;
        MiUpdateLargePageBitMap(
          *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL)),
          BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL,
          0x200uLL,
          0,
          0);
      }
      v5 += MiFreeSmallPageFromMdl(BugCheckParameter2++, a3);
      --v7;
    }
    else
    {
      v9 = (KeFeatureBits & 0x2000000000LL) == 0;
      while ( 1 )
      {
        v10 = MiLargePageSizes[v9];
        if ( ((v10 - 1) & BugCheckParameter2) == 0
          && v7 >= v10
          && (unsigned int)MiResidentPageDangleFree(BugCheckParameter2, (unsigned int)v9) )
        {
          break;
        }
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= 3 )
          goto LABEL_10;
      }
      v5 += MiFreeLargePageMemory(BugCheckParameter2, v11, v4 + 6);
      BugCheckParameter2 += v10;
      v7 -= v10;
    }
  }
  return v5;
}
