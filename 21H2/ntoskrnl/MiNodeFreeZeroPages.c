/*
 * XREFs of MiNodeFreeZeroPages @ 0x140264BD8
 * Callers:
 *     MiReplenishPageSlist @ 0x140264720 (MiReplenishPageSlist.c)
 *     MiSignalLargePageRebuild @ 0x140267CA8 (MiSignalLargePageRebuild.c)
 *     MiRebuildLargePages @ 0x140396D30 (MiRebuildLargePages.c)
 *     MiFreeZeroPagesNeeded @ 0x14045C75A (MiFreeZeroPagesNeeded.c)
 *     MiPruneStandbyPages @ 0x14045C812 (MiPruneStandbyPages.c)
 *     MiRebuildLargePage @ 0x14045CDD6 (MiRebuildLargePage.c)
 *     MiFreeZeroPageSlistSufficient @ 0x1405AD910 (MiFreeZeroPageSlistSufficient.c)
 *     MiNodeAvailablePages @ 0x1405AF594 (MiNodeAvailablePages.c)
 * Callees:
 *     MiNodeLargeFreeZeroPages @ 0x140264C90 (MiNodeLargeFreeZeroPages.c)
 */

__int64 __fastcall MiNodeFreeZeroPages(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r9
  unsigned int v7; // ebp
  __int64 v8; // rbx
  int v9; // r15d
  _QWORD *v11; // rax

  v3 = a2;
  v4 = (_QWORD *)(a1 + 22560);
  v5 = ((unsigned int)~a3 >> 1) & 1;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = a3 & 0x1000;
  do
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v11 = (_QWORD *)(a1 + 8 * (v8 + 2 * (v3 + 1420)));
    else
      v11 = v4;
    v6 += *v11;
    if ( v9 )
      v6 += MiNodeLargeFreeZeroPages(a1, (unsigned int)v3, v7);
    ++v7;
    ++v8;
    ++v4;
  }
  while ( v8 <= v5 );
  return v6;
}
