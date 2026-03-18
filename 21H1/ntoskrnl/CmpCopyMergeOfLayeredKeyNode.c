/*
 * XREFs of CmpCopyMergeOfLayeredKeyNode @ 0x1407156C0
 * Callers:
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14087BB10 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     CmpCopyCell @ 0x140656E58 (CmpCopyCell.c)
 *     CmpGetSecurityDescriptorNode @ 0x14068BBE0 (CmpGetSecurityDescriptorNode.c)
 *     CmpFreeKeyByCell @ 0x1406963D0 (CmpFreeKeyByCell.c)
 *     HvAllocateCell @ 0x140698D38 (HvAllocateCell.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406C8D88 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140715E8C (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407160A0 (CmpGetEffectiveKeyNodeSemantics.c)
 */

__int64 __fastcall CmpCopyMergeOfLayeredKeyNode(
        __int16 *a1,
        ULONG_PTR a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int v6; // r15d
  __int16 v11; // bx
  __int64 v12; // r14
  __int16 v13; // dx
  __int64 EntryAtLayerHeight; // rax
  __int16 v15; // dx
  int v16; // r8d
  __int64 v17; // rax
  int v18; // r9d
  int EffectiveKeyNodeSemantics; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // r8
  unsigned int v23; // ebx
  unsigned int Cell; // eax
  char *v25; // r14
  unsigned int v26; // r12d
  size_t v27; // r8
  __int64 v28; // rbx
  __int16 v29; // cx
  __int64 v30; // rsi
  __int64 v31; // rbx
  int SecurityDescriptorNode; // ebx
  __int16 v33; // bx
  int v35; // eax
  __int64 v36; // [rsp+30h] [rbp-30h] BYREF
  void *v37; // [rsp+38h] [rbp-28h] BYREF
  __int64 v38; // [rsp+40h] [rbp-20h]
  __int64 v39; // [rsp+48h] [rbp-18h] BYREF
  __int64 v40; // [rsp+50h] [rbp-10h]
  unsigned int v41; // [rsp+A0h] [rbp+40h]
  __int64 v42; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v43; // [rsp+B8h] [rbp+58h] BYREF

  v6 = a5;
  v36 = 0xFFFFFFFFLL;
  v42 = 0xFFFFFFFFLL;
  v39 = 0LL;
  v43 = 0;
  v37 = 0LL;
  if ( a5 == 2 )
  {
    if ( a3 == -1 )
      v6 = 0;
    else
      v6 = a3 >> 31;
  }
  v11 = *a1;
  v12 = 0LL;
  v38 = 0LL;
  v13 = v11;
  if ( v11 >= 0 )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, v13);
      if ( *(_DWORD *)(EntryAtLayerHeight + 8) != v16 )
        break;
      v13 = v15 - 1;
      if ( v13 < 0 )
        goto LABEL_5;
    }
    v12 = EntryAtLayerHeight;
    v38 = EntryAtLayerHeight;
  }
LABEL_5:
  CmpGetSecurityCellForKeyNodeStack(a1, &v39, &v43);
  v40 = 0LL;
  v41 = -1;
  LOWORD(a5) = 0;
  if ( (a4 & 1) != 0 && v11 >= 0 )
  {
    do
    {
      v17 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, v11);
      if ( *(_DWORD *)(v17 + 8) != v18 )
      {
        EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*(_QWORD *)v17);
        if ( EffectiveKeyNodeSemantics == 1 )
          break;
        if ( *(char *)(v20 + 13) >= v22 )
        {
          v41 = *(_DWORD *)(v20 + 48);
          LOWORD(a5) = *(_WORD *)(v20 + 74);
          v40 = v21;
          break;
        }
        if ( EffectiveKeyNodeSemantics )
          break;
      }
      --v11;
    }
    while ( v11 >= 0 );
  }
  v23 = *(unsigned __int16 *)(*(_QWORD *)(v12 + 16) + 72LL) + 76;
  Cell = HvAllocateCell(a2, v23, v6, (__int64)&v37, (__int64)&v36);
  v25 = (char *)v37;
  v26 = Cell;
  if ( Cell == -1 )
  {
LABEL_31:
    SecurityDescriptorNode = -1073741670;
    goto LABEL_17;
  }
  v27 = v23;
  v28 = v38;
  memmove(v37, *(const void **)(v38 + 16), v27);
  v25[12] = 0;
  v25[13] = v25[13] & 0x7C | 0x80;
  *((_DWORD *)v25 + 4) = a3;
  *(_QWORD *)(v25 + 20) = 0LL;
  *((_DWORD *)v25 + 7) = -1;
  *((_QWORD *)v25 + 4) = 0xFFFFFFFFLL;
  *((_DWORD *)v25 + 10) = -1;
  *((_DWORD *)v25 + 11) = -1;
  *((_DWORD *)v25 + 12) = -1;
  *((_WORD *)v25 + 26) = 0;
  *((_QWORD *)v25 + 7) = 0LL;
  *((_QWORD *)v25 + 8) = 0LL;
  *((_WORD *)v25 + 37) = 0;
  v29 = *(_WORD *)(*(_QWORD *)(v28 + 16) + 2LL) & 0xFFBF;
  *((_WORD *)v25 + 1) = v29;
  if ( a3 == -1 )
    *((_WORD *)v25 + 1) = v29 | 0xC;
  v30 = v39;
  v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v39 + 8))(v39, v43, &v42);
  ExAcquirePushLockExclusiveEx(a2 + 1776, 0LL);
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                             a2,
                             v26,
                             (__int64)v25,
                             (void *)(v31 + 20),
                             0,
                             (unsigned int *)v25 + 11);
  ExReleasePushLockEx(a2 + 1776, 0LL);
  (*(void (__fastcall **)(__int64, __int64 *))(v30 + 16))(v30, &v42);
  if ( SecurityDescriptorNode >= 0 )
  {
    v33 = a5;
    if ( !(_WORD)a5 )
    {
LABEL_16:
      SecurityDescriptorNode = 0;
      *a6 = v26;
      v26 = -1;
      goto LABEL_17;
    }
    v35 = CmpCopyCell(v40, v41, a2, v6);
    if ( v35 != -1 )
    {
      *((_DWORD *)v25 + 12) = v35;
      *((_WORD *)v25 + 37) = v33;
      goto LABEL_16;
    }
    goto LABEL_31;
  }
LABEL_17:
  if ( v25 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a2 + 16))(a2, &v36);
  if ( v26 != -1 )
    CmpFreeKeyByCell(a2, v26, 0);
  return (unsigned int)SecurityDescriptorNode;
}
