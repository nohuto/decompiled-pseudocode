/*
 * XREFs of MiNodeFreeZeroPages @ 0x140318CA4
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140232110 (MiDemoteLocalLargePage.c)
 *     MiSignalLargePageRebuild @ 0x140272FE0 (MiSignalLargePageRebuild.c)
 *     MiReplenishPageSlist @ 0x140318700 (MiReplenishPageSlist.c)
 *     MiFreeZeroPageSlistSufficient @ 0x1403657F8 (MiFreeZeroPageSlistSufficient.c)
 *     MiRebuildLargePages @ 0x14038D6C0 (MiRebuildLargePages.c)
 *     MiPruneStandbyPages @ 0x140550DD4 (MiPruneStandbyPages.c)
 *     MiRebalanceZeroFreeLists @ 0x140551200 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePage @ 0x1405526D8 (MiRebuildLargePage.c)
 * Callees:
 *     MiNodeLargeFreeZeroPages @ 0x140318E40 (MiNodeLargeFreeZeroPages.c)
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
  v4 = (_QWORD *)(a1 + 4128);
  v5 = ((unsigned int)~a3 >> 1) & 1;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = a3 & 0x1000;
  do
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v11 = (_QWORD *)(a1 + 8 * (v8 + 2 * v3 + 527));
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
