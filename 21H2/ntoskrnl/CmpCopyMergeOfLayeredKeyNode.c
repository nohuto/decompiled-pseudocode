/*
 * XREFs of CmpCopyMergeOfLayeredKeyNode @ 0x14065C008
 * Callers:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14065B3DC (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140657670 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14065C2F0 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14069F45C (CmpGetEffectiveKeyNodeSemantics.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmpCopyCell @ 0x14079BC7C (CmpCopyCell.c)
 *     HvAllocateCell @ 0x14079C8A4 (HvAllocateCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmUnlockHiveSecurity @ 0x140AB4484 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpCopyMergeOfLayeredKeyNode(
        __int16 *a1,
        ULONG_PTR a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int v10; // r14d
  __int64 v11; // r13
  __int16 v12; // bx
  __int64 EntryAtLayerHeight; // rax
  __int16 v14; // dx
  bool i; // sf
  __int64 v16; // rax
  int v17; // r10d
  int EffectiveKeyNodeSemantics; // eax
  __int64 v19; // rdx
  ULONG_PTR v20; // rcx
  char v21; // r9
  unsigned int v22; // edi
  int Cell; // eax
  char *v24; // rbx
  int SecurityDescriptorNode; // esi
  __int16 v26; // cx
  ULONG_PTR v27; // r13
  __int64 CellFlat; // rax
  __int64 v29; // rdi
  void *Src; // rax
  unsigned int v31; // edi
  __int16 v32; // r12
  __int64 v34; // [rsp+40h] [rbp-30h] BYREF
  __int64 v35; // [rsp+48h] [rbp-28h] BYREF
  __int64 v36; // [rsp+50h] [rbp-20h] BYREF
  void *v37; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR v39; // [rsp+68h] [rbp-8h]
  ULONG_PTR v40; // [rsp+B0h] [rbp+40h] BYREF
  ULONG_PTR v41; // [rsp+B8h] [rbp+48h]
  ULONG_PTR BugCheckParameter4; // [rsp+C8h] [rbp+58h] BYREF

  BugCheckParameter3 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v35 = 0LL;
  v36 = 0LL;
  LODWORD(v40) = -1;
  v37 = 0LL;
  HvpGetCellContextReinitialize(&v36);
  HvpGetCellContextReinitialize(&v35);
  v10 = a5;
  LODWORD(v34) = -1;
  if ( a5 == 2 )
  {
    if ( a3 == -1 )
      v10 = 0;
    else
      v10 = a3 >> 31;
  }
  v11 = 0LL;
  v12 = *a1;
  if ( *a1 >= 0 )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1);
      if ( *(_DWORD *)(EntryAtLayerHeight + 8) != -1 )
        break;
      if ( (__int16)(v14 - 1) < 0 )
        goto LABEL_10;
    }
    v11 = EntryAtLayerHeight;
  }
LABEL_10:
  CmpGetSecurityCellForKeyNodeStack(a1, &BugCheckParameter3, &BugCheckParameter4);
  v39 = 0LL;
  LODWORD(v41) = -1;
  LOWORD(a5) = 0;
  if ( (a4 & 1) != 0 )
  {
    for ( i = v12 < 0; !i; i = v12 < 0 )
    {
      v16 = CmpKeyNodeStackGetEntryAtLayerHeight(a1);
      if ( *(_DWORD *)(v16 + 8) != v17 )
      {
        EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*(_QWORD *)v16);
        if ( EffectiveKeyNodeSemantics == 1 )
          break;
        if ( *(char *)(v19 + 13) >= v21 )
        {
          LODWORD(v41) = *(_DWORD *)(v19 + 48);
          LOWORD(a5) = *(_WORD *)(v19 + 74);
          v39 = v20;
          break;
        }
        if ( EffectiveKeyNodeSemantics )
          break;
      }
      --v12;
    }
  }
  v22 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 16) + 72LL) + 76;
  Cell = HvAllocateCell(a2, v22, v10, (unsigned int)&v40, (__int64)&v37, (__int64)&v36);
  v24 = (char *)v37;
  SecurityDescriptorNode = Cell;
  if ( Cell < 0 )
  {
    v31 = v40;
  }
  else
  {
    memmove(v37, *(const void **)(v11 + 16), v22);
    v24[12] = 0;
    v24[13] = v24[13] & 0x7C | 0x80;
    *((_DWORD *)v24 + 4) = a3;
    *(_QWORD *)(v24 + 20) = 0LL;
    *((_DWORD *)v24 + 7) = -1;
    *((_DWORD *)v24 + 8) = -1;
    *((_DWORD *)v24 + 9) = 0;
    *((_DWORD *)v24 + 10) = -1;
    *((_DWORD *)v24 + 11) = -1;
    *((_DWORD *)v24 + 12) = -1;
    *((_WORD *)v24 + 26) = 0;
    *((_QWORD *)v24 + 7) = 0LL;
    *((_QWORD *)v24 + 8) = 0LL;
    *((_WORD *)v24 + 37) = 0;
    v26 = *(_WORD *)(*(_QWORD *)(v11 + 16) + 2LL) & 0xFFBF;
    *((_WORD *)v24 + 1) = v26;
    if ( a3 == -1 )
      *((_WORD *)v24 + 1) = v26 | 0xC;
    v27 = BugCheckParameter3;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v29 = CellFlat;
    ExAcquirePushLockExclusiveEx(a2 + 1784, 0LL);
    Src = (void *)(v29 + 20);
    v31 = v40;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               a2,
                               v40,
                               (__int64)v24,
                               (unsigned int)v40 >> 31,
                               Src,
                               0,
                               (unsigned int *)v24 + 11);
    CmUnlockHiveSecurity(a2);
    if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v27, &v35);
    else
      HvpReleaseCellPaged(v27, &v35);
    if ( SecurityDescriptorNode >= 0 )
    {
      v32 = a5;
      if ( (_WORD)a5 )
      {
        SecurityDescriptorNode = CmpCopyCell(v39, (unsigned int)v41, (__int64)&v34);
        if ( SecurityDescriptorNode < 0 )
          goto LABEL_34;
        *((_DWORD *)v24 + 12) = v34;
        *((_WORD *)v24 + 37) = v32;
      }
      SecurityDescriptorNode = 0;
      *a6 = v31;
      v31 = -1;
    }
  }
LABEL_34:
  if ( v24 )
  {
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a2, &v36);
    else
      HvpReleaseCellPaged(a2, &v36);
  }
  if ( v31 != -1 )
    CmpFreeKeyByCell(a2, v31);
  return (unsigned int)SecurityDescriptorNode;
}
