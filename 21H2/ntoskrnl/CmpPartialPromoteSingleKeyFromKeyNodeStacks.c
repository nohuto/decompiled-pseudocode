/*
 * XREFs of CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140880094
 * Callers:
 *     CmpPromoteSubtree @ 0x140729698 (CmpPromoteSubtree.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1408806DC (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140880878 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpAddSubKeyEx @ 0x14065DA04 (CmpAddSubKeyEx.c)
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140729950 (CmpCopyMergeOfLayeredKeyNode.c)
 */

__int64 __fastcall CmpPartialPromoteSingleKeyFromKeyNodeStacks(__int16 *a1, __int64 a2)
{
  __int16 v3; // dx
  __int64 EntryAtLayerHeight; // r12
  __int16 v5; // dx
  __int64 v6; // r8
  __int16 v7; // dx
  __int16 *v8; // r10
  __int64 v9; // r14
  int v10; // esi
  __int64 v11; // r15
  __int64 v12; // rax
  __int16 v13; // dx
  signed int v14; // r8d
  int v15; // eax
  ULONG_PTR v16; // rbp
  char v17; // al
  unsigned int v18; // edi
  __int64 v19; // rax
  char v20; // cl
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // ax
  __int64 v23; // rdx
  unsigned int v25; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  v25 = -1;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a2, v3);
  v9 = CmpKeyNodeStackGetEntryAtLayerHeight(v6, v5);
  if ( *(_DWORD *)(EntryAtLayerHeight + 8) == -1 )
  {
    v11 = 0LL;
    if ( v7 >= 0 )
    {
      while ( 1 )
      {
        v12 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v8, v7);
        if ( *(_DWORD *)(v12 + 8) != -1 )
          break;
        v7 = v13 - 1;
        if ( v7 < 0 )
          goto LABEL_8;
      }
      v11 = v12;
    }
LABEL_8:
    v14 = *(_DWORD *)(v9 + 8);
    if ( v14 >= 0 )
      v15 = *(_DWORD *)(v11 + 8) >> 31;
    else
      v15 = 1;
    v16 = *(_QWORD *)v9;
    v10 = CmpCopyMergeOfLayeredKeyNode(v8, *(_QWORD *)v9, v14, 2, v15, &v25);
    if ( v10 < 0 )
    {
      v18 = v25;
    }
    else
    {
      v17 = HvpMarkCellDirty(v16, *(unsigned int *)(v9 + 8), 0);
      v18 = v25;
      if ( v17 )
      {
        if ( CmpAddSubKeyEx(v16, *(unsigned int *)(v9 + 8), v25, 0) )
        {
          v19 = *(_QWORD *)(v11 + 16);
          v20 = *(_BYTE *)(v19 + 2);
          v21 = *(_WORD *)(v19 + 72);
          v22 = 2 * v21;
          if ( (v20 & 0x20) == 0 )
            v22 = v21;
          v23 = *(_QWORD *)(v9 + 16);
          if ( (unsigned __int16)*(_DWORD *)(v23 + 52) < (unsigned int)v22 )
            *(_WORD *)(v23 + 52) = v22;
          *(_QWORD *)EntryAtLayerHeight = v16;
          *(_DWORD *)(EntryAtLayerHeight + 8) = v18;
          *(_QWORD *)(EntryAtLayerHeight + 16) = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64))(v16 + 8))(
                                                   v16,
                                                   v18,
                                                   EntryAtLayerHeight + 24);
          v18 = -1;
          v10 = 0;
        }
        else
        {
          v10 = -1073741670;
        }
      }
      else
      {
        v10 = -1073741443;
      }
    }
    if ( v18 != -1 )
      CmpFreeKeyByCell(v16, v18, 0);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v10;
}
