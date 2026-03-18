/*
 * XREFs of CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14065AAAC
 * Callers:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpPromoteSubtree @ 0x14065B6A0 (CmpPromoteSubtree.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140922400 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140922984 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140922B20 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmpValueEnumStackGetCurrentValueHive @ 0x14020004C (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140200068 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpValueEnumStackAdvance @ 0x14065AED8 (CmpValueEnumStackAdvance.c)
 *     CmpCopyValue @ 0x14065B108 (CmpCopyValue.c)
 *     CmpConcatenateValueLists @ 0x14065C3B8 (CmpConcatenateValueLists.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackCleanup @ 0x14069F3D4 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x14069F47C (CmpValueEnumStackInitialize.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     CmpAddValueToListEx @ 0x14079B920 (CmpAddValueToListEx.c)
 *     CmpCopyCell @ 0x14079BC7C (CmpCopyCell.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFreeKeyValueList @ 0x14091F7C8 (CmpFreeKeyValueList.c)
 */

__int64 __fastcall CmpFullPromoteSingleKeyFromKeyNodeStacks(__int64 a1, __int16 *a2)
{
  __int64 v2; // r15
  __int16 *v3; // rbx
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  __int16 v7; // dx
  __int64 EntryAtLayerHeight; // rdi
  ULONG_PTR v9; // rsi
  __int16 v10; // dx
  __int16 v11; // r9
  ULONG_PTR *v12; // r13
  ULONG_PTR v13; // rcx
  int v14; // ebx
  int v15; // eax
  ULONG_PTR CurrentValueHive; // rax
  __int64 CellFlat; // rax
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // cx
  bool v20; // zf
  unsigned int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // eax
  unsigned __int16 v26; // r13
  ULONG_PTR v27; // rdx
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rcx
  ULONG_PTR v32; // rdx
  __int64 v33; // rax
  int v35; // eax
  unsigned __int16 v36; // [rsp+30h] [rbp-89h]
  unsigned int v37; // [rsp+34h] [rbp-85h]
  __int64 v38; // [rsp+38h] [rbp-81h] BYREF
  int v39; // [rsp+40h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+44h] [rbp-75h] BYREF
  __int16 v41; // [rsp+4Ch] [rbp-6Dh]
  __int64 v42; // [rsp+50h] [rbp-69h] BYREF
  __int64 v43; // [rsp+58h] [rbp-61h] BYREF
  __int16 *v44; // [rsp+60h] [rbp-59h]
  ULONG_PTR BugCheckParameter4[12]; // [rsp+70h] [rbp-49h] BYREF

  v2 = 0LL;
  v44 = a2;
  v3 = a2;
  v42 = 0LL;
  memset(BugCheckParameter4, 0, 0x58uLL);
  v36 = 0;
  v5 = -1;
  LODWORD(v38) = -1;
  BugCheckParameter3 = -1LL;
  v6 = -1;
  v39 = 0;
  v43 = 0xFFFFFFFF00000000uLL;
  HvpGetCellContextReinitialize(&v42);
  CmpValueEnumStackInitialize(BugCheckParameter4);
  v41 = *v3;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v3);
  if ( a1 )
    v2 = CmpKeyNodeStackGetEntryAtLayerHeight(a1);
  v9 = *(_QWORD *)EntryAtLayerHeight;
  if ( *(char *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 13LL) < 0 && (__int16)(v7 - 1) >= 0 )
  {
    while ( 1 )
    {
      v12 = (ULONG_PTR *)CmpKeyNodeStackGetEntryAtLayerHeight(v3);
      v13 = v12[2];
      if ( v13 )
      {
        if ( *(char *)(v13 + 13) >= (char)v11 )
          break;
      }
      if ( (__int16)(v10 - 1) < 0 )
        goto LABEL_8;
    }
    if ( *(_WORD *)(v13 + 74) != v11 )
    {
      v35 = CmpCopyCell(*v12, *(unsigned int *)(v13 + 48), (__int64)&v38);
      v5 = v38;
      v14 = v35;
      if ( v35 < 0 )
        goto LABEL_50;
      v3 = v44;
      v36 = *(_WORD *)(v12[2] + 74);
    }
  }
LABEL_8:
  v14 = CmpValueEnumStackStartFromKeyNodeStack((__int64)BugCheckParameter4, v3);
  if ( v14 >= 0 )
  {
    LODWORD(v38) = 0;
    v37 = 0;
    while ( 1 )
    {
      v15 = CmpValueEnumStackAdvance(BugCheckParameter4);
      v14 = v15;
      if ( v15 == -2147483622 )
        break;
      if ( v15 < 0 )
        goto LABEL_50;
      if ( HIWORD(BugCheckParameter4[0]) != v41 )
      {
        CurrentValueHive = CmpValueEnumStackGetCurrentValueHive((__int64)BugCheckParameter4);
        v14 = CmpCopyValue(CurrentValueHive, LODWORD(BugCheckParameter4[0]), v9, (__int64)&BugCheckParameter3 + 4);
        if ( v14 < 0 )
          goto LABEL_50;
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v9, HIDWORD(BugCheckParameter3));
        else
          CellFlat = HvpGetCellPaged(v9);
        v18 = *(_WORD *)(CellFlat + 2);
        v19 = 2 * v18;
        v20 = (*(_BYTE *)(CellFlat + 16) & 1) == 0;
        v21 = *(_DWORD *)(CellFlat + 4);
        if ( v20 )
          v19 = v18;
        v22 = v19;
        v23 = v21 + 0x80000000;
        if ( v21 < 0x80000000 )
          v23 = v21;
        v24 = v38;
        if ( v23 > (unsigned int)v38 )
          v24 = v23;
        LODWORD(v38) = v24;
        if ( v22 <= v37 )
          v22 = v37;
        v37 = v22;
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v9, &v42);
        else
          HvpReleaseCellPaged(v9, &v42);
        v14 = CmpAddValueToListEx(v9, (__int64)&v39, 1);
        if ( v14 < 0 )
          goto LABEL_50;
        HIDWORD(BugCheckParameter3) = -1;
      }
    }
    if ( !v39 || (v25 = CmpConcatenateValueLists(v9, (__int64)&v43), v6 = HIDWORD(v43), v14 = v25, v25 >= 0) )
    {
      if ( *(char *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 13LL) >= 0 )
        goto LABEL_61;
      v14 = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8));
      if ( v14 < 0 )
        goto LABEL_50;
      if ( v2 )
      {
        v26 = v36;
        if ( *(_DWORD *)(*(_QWORD *)(v2 + 16) + 56LL) < (unsigned int)v36 )
        {
          v14 = HvpMarkCellDirty(*(_QWORD *)v2, *(unsigned int *)(v2 + 8));
          if ( v14 < 0 )
            goto LABEL_50;
        }
      }
      else
      {
LABEL_61:
        v26 = v36;
      }
      if ( v6 == -1
        || (v14 = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8)), v14 >= 0)
        && ((v27 = *(unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 40LL), (_DWORD)v27 == -1)
         || (v14 = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, v27), v14 >= 0)) )
      {
        v28 = *(_QWORD *)(EntryAtLayerHeight + 16);
        v29 = *(_BYTE *)(v28 + 13);
        if ( v29 < 0 )
        {
          *(_BYTE *)(v28 + 13) = v29 & 0x7F;
          *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 48LL) = v5;
          v5 = -1;
          *(_WORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 74LL) = v26;
          if ( v2 )
          {
            v30 = *(_QWORD *)(v2 + 16);
            if ( *(_DWORD *)(v30 + 56) < (unsigned int)v26 )
              *(_DWORD *)(v30 + 56) = v26;
          }
        }
        if ( v6 != -1 )
        {
          v31 = *(_QWORD *)(EntryAtLayerHeight + 16);
          v32 = *(unsigned int *)(v31 + 40);
          if ( (_DWORD)v32 != -1 )
          {
            HvFreeCell(*(_QWORD *)EntryAtLayerHeight, v32);
            v31 = *(_QWORD *)(EntryAtLayerHeight + 16);
          }
          v6 = -1;
          *(_QWORD *)(v31 + 36) = v43;
          v33 = *(_QWORD *)(EntryAtLayerHeight + 16);
          if ( *(_DWORD *)(v33 + 64) < (unsigned int)v38 )
          {
            *(_DWORD *)(v33 + 64) = v38;
            v33 = *(_QWORD *)(EntryAtLayerHeight + 16);
          }
          if ( *(_DWORD *)(v33 + 60) < v37 )
            *(_DWORD *)(v33 + 60) = v37;
          HvFreeCell(v9, (unsigned int)BugCheckParameter3);
          v39 = 0;
          LODWORD(BugCheckParameter3) = -1;
        }
        v14 = 0;
      }
    }
  }
LABEL_50:
  CmpValueEnumStackCleanup(BugCheckParameter4);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    CmpFreeKeyValueList(v9);
  if ( v6 != -1 )
    HvFreeCell(v9, v6);
  if ( v5 != -1 )
    HvFreeCell(v9, v5);
  return (unsigned int)v14;
}
