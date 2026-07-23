/*
 * XREFs of CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140729760
 * Callers:
 *     CmpPromoteSubtree @ 0x140729698 (CmpPromoteSubtree.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14087FFA4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKeyNodeStack @ 0x140880078 (CmpFullPromoteHiveRootFromKeyNodeStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1408806DC (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140880878 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BF08 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x1404ED29C (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpCopyCell @ 0x1405E2220 (CmpCopyCell.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpValueEnumStackAdvance @ 0x14072A104 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14072A3E0 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x14072A6EC (CmpValueEnumStackInitialize.c)
 *     CmpConcatenateValueLists @ 0x1408784E0 (CmpConcatenateValueLists.c)
 *     CmpCopyValue @ 0x140878E80 (CmpCopyValue.c)
 *     CmpFreeKeyValueList @ 0x140879164 (CmpFreeKeyValueList.c)
 *     CmpAddValueToList @ 0x14087B518 (CmpAddValueToList.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpFullPromoteSingleKeyFromKeyNodeStacks(__int64 a1, __int16 *a2)
{
  __int64 v4; // r12
  unsigned int v5; // r15d
  __int16 v6; // bx
  __int16 v7; // dx
  ULONG_PTR *EntryAtLayerHeight; // r14
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // r13
  unsigned int v11; // edi
  __int16 v12; // dx
  __int64 *v13; // rax
  __int16 v14; // dx
  __int16 v15; // r8
  __int64 v16; // rcx
  int v17; // esi
  unsigned __int16 v18; // bx
  ULONG_PTR v19; // rcx
  char v20; // al
  ULONG_PTR v21; // rax
  int v22; // ecx
  __int64 CurrentValueHive; // rax
  unsigned int v25; // esi
  __int64 v26; // rax
  unsigned __int16 v27; // r8
  char v28; // cl
  unsigned int v29; // eax
  unsigned __int16 v30; // dx
  unsigned int v31; // ebx
  unsigned int v32; // edi
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rax
  ULONG_PTR v37; // rcx
  ULONG_PTR v38; // rdx
  ULONG_PTR v39; // rax
  unsigned __int16 v40; // [rsp+30h] [rbp-89h]
  __int16 v41; // [rsp+32h] [rbp-87h]
  int v42; // [rsp+38h] [rbp-81h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+3Ch] [rbp-7Dh]
  unsigned int v44; // [rsp+44h] [rbp-75h]
  __int64 *v45; // [rsp+48h] [rbp-71h]
  unsigned __int64 v46; // [rsp+50h] [rbp-69h] BYREF
  __int64 v47; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v48; // [rsp+60h] [rbp-59h]
  _DWORD v49[24]; // [rsp+70h] [rbp-49h] BYREF

  memset(v49, 0, 0x58uLL);
  v4 = 0LL;
  v5 = -1;
  BugCheckParameter3 = -1LL;
  v47 = 0xFFFFFFFFLL;
  v40 = 0;
  v42 = 0;
  v46 = 0xFFFFFFFF00000000uLL;
  CmpValueEnumStackInitialize(v49);
  v6 = *a2;
  v41 = *a2;
  EntryAtLayerHeight = (ULONG_PTR *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, *a2);
  if ( a1 )
    v4 = CmpKeyNodeStackGetEntryAtLayerHeight(a1, v7);
  v9 = EntryAtLayerHeight[2];
  v10 = *EntryAtLayerHeight;
  v11 = *((_DWORD *)EntryAtLayerHeight + 2) >> 31;
  v48 = v11;
  if ( *(char *)(v9 + 13) < 0 )
  {
    v12 = v6 - 1;
    if ( (__int16)(v6 - 1) >= 0 )
    {
      while ( 1 )
      {
        v13 = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v12);
        v45 = v13;
        v16 = v13[2];
        if ( v16 )
        {
          if ( *(char *)(v16 + 13) >= (char)v15 )
            break;
        }
        v12 = v14 - 1;
        if ( v12 < 0 )
          goto LABEL_8;
      }
      if ( *(_WORD *)(v16 + 74) != v15 )
      {
        HIDWORD(BugCheckParameter3) = CmpCopyCell(*v13, *(unsigned int *)(v16 + 48), v10, v11);
        if ( HIDWORD(BugCheckParameter3) == -1 )
        {
LABEL_30:
          v17 = -1073741670;
          goto LABEL_19;
        }
        v40 = *(_WORD *)(v45[2] + 74);
      }
    }
  }
LABEL_8:
  v17 = CmpValueEnumStackStartFromKeyNodeStack((__int64)v49, a2);
  if ( v17 < 0 )
    goto LABEL_19;
  v44 = 0;
  LODWORD(v45) = 0;
  v17 = CmpValueEnumStackAdvance(v49);
  if ( v17 == -2147483622 )
  {
LABEL_10:
    if ( *(char *)(EntryAtLayerHeight[2] + 13) >= 0 )
      goto LABEL_13;
    if ( !(unsigned __int8)HvMarkCellDirty(*EntryAtLayerHeight, *((unsigned int *)EntryAtLayerHeight + 2), 0LL) )
      goto LABEL_50;
    if ( v4 )
    {
      v18 = v40;
      if ( *(_DWORD *)(*(_QWORD *)(v4 + 16) + 56LL) < (unsigned int)v40
        && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)v4, *(unsigned int *)(v4 + 8), 0LL) )
      {
        goto LABEL_50;
      }
    }
    else
    {
LABEL_13:
      v18 = v40;
    }
    if ( v5 == -1
      || (unsigned __int8)HvMarkCellDirty(*EntryAtLayerHeight, *((unsigned int *)EntryAtLayerHeight + 2), 0LL)
      && ((v35 = *(unsigned int *)(EntryAtLayerHeight[2] + 40), (_DWORD)v35 == -1)
       || (unsigned __int8)HvMarkCellDirty(*EntryAtLayerHeight, v35, 0LL)) )
    {
      v19 = EntryAtLayerHeight[2];
      v20 = *(_BYTE *)(v19 + 13);
      if ( v20 < 0 )
      {
        *(_BYTE *)(v19 + 13) = v20 & 0x7F;
        v21 = EntryAtLayerHeight[2];
        v22 = HIDWORD(BugCheckParameter3);
        HIDWORD(BugCheckParameter3) = -1;
        *(_DWORD *)(v21 + 48) = v22;
        *(_WORD *)(EntryAtLayerHeight[2] + 74) = v18;
        if ( v4 )
        {
          v36 = *(_QWORD *)(v4 + 16);
          if ( *(_DWORD *)(v36 + 56) < (unsigned int)v18 )
            *(_DWORD *)(v36 + 56) = v18;
        }
      }
      if ( v5 != -1 )
      {
        v37 = EntryAtLayerHeight[2];
        v38 = *(unsigned int *)(v37 + 40);
        if ( (_DWORD)v38 != -1 )
        {
          HvFreeCell(*EntryAtLayerHeight, v38);
          v37 = EntryAtLayerHeight[2];
        }
        v5 = -1;
        *(_QWORD *)(v37 + 36) = v46;
        v39 = EntryAtLayerHeight[2];
        if ( *(_DWORD *)(v39 + 64) < v44 )
        {
          *(_DWORD *)(v39 + 64) = v44;
          v39 = EntryAtLayerHeight[2];
        }
        if ( *(_DWORD *)(v39 + 60) < (unsigned int)v45 )
          *(_DWORD *)(v39 + 60) = (_DWORD)v45;
        HvFreeCell(v10, (unsigned int)BugCheckParameter3);
        LODWORD(BugCheckParameter3) = -1;
        v42 = 0;
      }
      v17 = 0;
      goto LABEL_19;
    }
LABEL_50:
    v17 = -1073741443;
    goto LABEL_19;
  }
  while ( v17 >= 0 )
  {
    if ( HIWORD(v49[1]) != v6 )
    {
      CurrentValueHive = CmpValueEnumStackGetCurrentValueHive((__int64)v49);
      v25 = CmpCopyValue(CurrentValueHive, v49[0], v10, v11);
      if ( v25 == -1 )
        goto LABEL_30;
      v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v10 + 8))(v10, v25, &v47);
      v27 = *(_WORD *)(v26 + 2);
      v28 = *(_BYTE *)(v26 + 16);
      v29 = *(_DWORD *)(v26 + 4);
      v30 = 2 * v27;
      if ( (v28 & 1) == 0 )
        v30 = v27;
      v31 = v29 + 0x80000000;
      v32 = v30;
      if ( v29 < 0x80000000 )
        v31 = v29;
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v10 + 16))(v10, &v47);
      v33 = CmpAddValueToList(v10, v25, v42, 1, (__int64)&v42);
      v17 = v33;
      if ( v31 <= v44 )
        v31 = v44;
      v44 = v31;
      if ( v32 <= (unsigned int)v45 )
        v32 = (unsigned int)v45;
      LODWORD(v45) = v32;
      if ( v33 < 0 )
        break;
      v11 = v48;
      v6 = v41;
    }
    v17 = CmpValueEnumStackAdvance(v49);
    if ( v17 == -2147483622 )
    {
      if ( !v42 )
        goto LABEL_10;
      v34 = CmpConcatenateValueLists(
              v10,
              (unsigned int)EntryAtLayerHeight[2] + 36,
              (unsigned int)&v42,
              v11,
              (__int64)&v46);
      v5 = HIDWORD(v46);
      v17 = v34;
      if ( v34 >= 0 )
        goto LABEL_10;
      break;
    }
  }
LABEL_19:
  CmpValueEnumStackCleanup(v49);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    CmpFreeKeyValueList(v10);
  if ( v5 != -1 )
    HvFreeCell(v10, v5);
  if ( HIDWORD(BugCheckParameter3) != -1 )
    HvFreeCell(v10, HIDWORD(BugCheckParameter3));
  return (unsigned int)v17;
}
