/*
 * XREFs of CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14065B3DC
 * Callers:
 *     CmpPromoteSubtree @ 0x14065B6A0 (CmpPromoteSubtree.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140922984 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140922B20 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14065C008 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmpAddSubKeyEx @ 0x140718244 (CmpAddSubKeyEx.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpPartialPromoteSingleKeyFromKeyNodeStacks(__int64 a1, __int64 a2)
{
  __int64 EntryAtLayerHeight; // r14
  __int64 v3; // r9
  __int16 v4; // dx
  __int64 v5; // r10
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rax
  __int16 v9; // dx
  ULONG_PTR v10; // rbp
  int v11; // esi
  __int64 v12; // rax
  char v13; // cl
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // ax
  __int64 v16; // rdx
  __int64 CellFlat; // rax

  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a2);
  v6 = CmpKeyNodeStackGetEntryAtLayerHeight(v3);
  if ( *(_DWORD *)(EntryAtLayerHeight + 8) == -1 )
  {
    v7 = 0LL;
    if ( v4 >= 0 )
    {
      while ( 1 )
      {
        v8 = CmpKeyNodeStackGetEntryAtLayerHeight(v5);
        if ( *(_DWORD *)(v8 + 8) != -1 )
          break;
        if ( (__int16)(v9 - 1) < 0 )
          goto LABEL_7;
      }
      v7 = v8;
    }
LABEL_7:
    v10 = *(_QWORD *)v6;
    v11 = CmpCopyMergeOfLayeredKeyNode(v5, *(_QWORD *)v6, *(unsigned int *)(v6 + 8), 2LL);
    if ( v11 >= 0 )
    {
      v11 = HvpMarkCellDirty(v10, *(unsigned int *)(v6 + 8));
      if ( v11 >= 0 )
      {
        v11 = CmpAddSubKeyEx(v10);
        if ( v11 >= 0 )
        {
          v12 = *(_QWORD *)(v7 + 16);
          v13 = *(_BYTE *)(v12 + 2);
          v14 = *(_WORD *)(v12 + 72);
          v15 = 2 * v14;
          if ( (v13 & 0x20) == 0 )
            v15 = v14;
          v16 = *(_QWORD *)(v6 + 16);
          if ( (unsigned __int16)*(_DWORD *)(v16 + 52) < (unsigned int)v15 )
            *(_WORD *)(v16 + 52) = v15;
          *(_QWORD *)EntryAtLayerHeight = v10;
          *(_DWORD *)(EntryAtLayerHeight + 8) = -1;
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v10, 0xFFFFFFFFuLL);
          else
            CellFlat = HvpGetCellPaged(v10);
          *(_QWORD *)(EntryAtLayerHeight + 16) = CellFlat;
          return 0;
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v11;
}
