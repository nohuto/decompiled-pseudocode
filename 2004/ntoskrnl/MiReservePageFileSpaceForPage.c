/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x1402BAA60
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140237520 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x1402BA590 (MiReservePageFileSpace.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x14022A870 (MiInvalidPteConforms.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x140245EC0 (MiGetUsedPtesHandle.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiIncreaseUsedPtesCount @ 0x1402562E0 (MiIncreaseUsedPtesCount.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiSetNonResidentPteHeat @ 0x1402B78F0 (MiSetNonResidentPteHeat.c)
 *     MI_IS_RESET_PTE @ 0x1402BB120 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiDiscardTransitionPteEx @ 0x140386594 (MiDiscardTransitionPteEx.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(__int64 a1, unsigned __int64 a2, char a3, unsigned __int64 *a4)
{
  unsigned int v4; // r13d
  int v5; // eax
  __int64 v8; // r14
  ULONG_PTR v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  bool v13; // zf
  unsigned __int64 v14; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  char v20; // di
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _LIST_ENTRY *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r10
  __int64 v30; // r11
  bool v31; // cf
  unsigned __int64 v32; // rbx
  __int64 updated; // rax
  __int16 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 UsedPtesHandle; // rax
  BOOL v45; // [rsp+20h] [rbp-68h]
  int v46; // [rsp+24h] [rbp-64h]
  int v47; // [rsp+28h] [rbp-60h] BYREF
  __int64 v48; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v49; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+40h] [rbp-48h]
  int v52; // [rsp+A0h] [rbp+18h]

  v4 = 0;
  v5 = a3 & 0x80;
  v46 = 0;
  v52 = v5;
  v8 = 0LL;
  do
  {
    v45 = 0;
    if ( v5 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = MiLockLeafPage(a2, 0LL);
      v45 = v9 != 0;
    }
    v10 = MI_READ_PTE_LOCK_FREE(a2);
    v48 = v10;
    v11 = v10;
    if ( (v10 & 1) != 0 )
    {
      if ( v52 )
      {
        v14 = v10;
        if ( MiPteInShadowRange((unsigned __int64)&v48)
          && (unsigned int)MiPteHasShadow(v16, Flink, v17, v18)
          && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v48 >> 3) & 0x1FF)) & 0x20) != 0 )
            v14 = v11 | 0x20;
          LOBYTE(v11) = v48;
        }
        v19 = (v14 >> 12) & 0xFFFFFFFFFLL;
        v9 = 48 * v19 - 0x58000000000LL;
        if ( (a3 & 1) == 0 )
        {
          v47 = 0;
          v45 = 1;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v47, (__int64)Flink, v17, v18);
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          LOBYTE(v11) = v48;
        }
        if ( (unsigned int)MI_PFN_IS_PROTO(48 * v19 - 0x58000000000LL) )
          goto LABEL_111;
      }
      if ( (*(_BYTE *)v9 & 1) == 0
        || *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != a1
        || (*(_BYTE *)(v9 + 35) & 8) != 0 )
      {
        goto LABEL_111;
      }
      v20 = v11;
      v11 = *(_QWORD *)(v9 + 16);
      LODWORD(v50) = v9 + 16;
      if ( MiPteInShadowRange(v9 + 16)
        && (unsigned int)MiPteHasShadow(v22, v21, v23, v24)
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v25 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v25 )
        {
          v26 = v11 | 0x20;
          v27 = *((_QWORD *)&v25->Flink + ((v50 >> 3) & 0x1FF));
          if ( (v27 & 0x20) == 0 )
            v26 = v11;
          v11 = v26;
          if ( (v27 & 0x42) != 0 )
            v11 = v26 | 0x42;
        }
      }
      v48 = v11;
      if ( (v11 & 1) != 0 || v11 && qword_140C4DD40 && (v11 & qword_140C4DD40) == 0 )
        goto LABEL_111;
      if ( !(unsigned int)MI_IS_RESET_PTE(v11) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
      {
LABEL_57:
        v12 = a1;
        goto LABEL_58;
      }
      if ( !v52 )
        goto LABEL_111;
      v13 = (v20 & 0x42) == 0;
LABEL_56:
      if ( v13 )
        goto LABEL_111;
      goto LABEL_57;
    }
    if ( (v10 & 0x400) != 0 )
      goto LABEL_111;
    if ( (v10 & 0x800) == 0 )
    {
      if ( !v10 )
      {
        if ( (a3 & 2) == 0 )
          goto LABEL_111;
        v11 = MiSwizzleInvalidPte(8LL * (a3 & 0x7C));
        v48 = v11;
        v46 = 1;
        goto LABEL_57;
      }
      if ( !MiInvalidPteConforms(v10) )
        goto LABEL_111;
      v13 = ((v11 >> 5) & 0xF) == 0;
      goto LABEL_56;
    }
    if ( !v52 )
      goto LABEL_11;
    v9 = MiLockTransitionLeafPage(a2, 0LL);
    v5 = v52;
  }
  while ( !v9 );
  v45 = 1;
  if ( (unsigned int)MI_PFN_IS_PROTO(v9) )
    goto LABEL_112;
LABEL_11:
  v12 = a1;
  if ( *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) == a1 )
  {
    v48 = MI_READ_PTE_LOCK_FREE(v9 + 16);
    v11 = v48;
    if ( !(unsigned int)MI_IS_RESET_PTE(v48) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
    {
LABEL_58:
      if ( (v11 & 2) != 0 )
      {
        if ( (a3 & 1) != 0 )
          *a4 = v11;
        goto LABEL_111;
      }
      if ( v9 && (*(_BYTE *)(v9 + 34) & 0x28) != 0 )
        goto LABEL_111;
      if ( (v11 & 4) != 0 )
      {
        if ( !v9 )
          goto LABEL_111;
        if ( (a3 & 1) == 0 )
        {
          if ( !*(_WORD *)(v9 + 32) )
          {
            if ( !(unsigned int)MiUnlinkPageFromList(v9, 0) )
            {
              MiDiscardTransitionPteEx(v9, 0LL);
              goto LABEL_111;
            }
            v4 = 1;
          }
          v8 = MiCapturePageFileInfoInline(v9 + 16, 1LL);
          *(_BYTE *)(v9 + 34) |= 0x10u;
          goto LABEL_71;
        }
LABEL_110:
        v4 = 1;
        goto LABEL_111;
      }
LABEL_71:
      if ( (a3 & 1) != 0 )
        goto LABEL_110;
      v28 = *(_QWORD *)(v12 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a4) >> 4) + 6944);
      v49 = v11;
      MiSetNonResidentPteHeat(&v49, 0);
      v31 = (v11 & 0x400) != 0;
      v32 = v49;
      if ( !v31 )
      {
        v32 = v49 & 0xFFFFFFFFFFFFFFF9uLL;
        v49 &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      if ( v28 )
      {
        if ( v32 )
          updated = MiUpdatePageFileHighInPte(v32, v30);
        else
          updated = MiSwizzleInvalidPte(v29 & 0xFFFFFFFF00000000uLL);
        v32 = updated ^ (unsigned __int16)(updated ^ (v34 << 12)) & 0xF000 | 2;
        v49 = v32;
      }
      if ( v9 )
      {
        if ( !*(_WORD *)(v9 + 32) && (*(_BYTE *)(v9 + 34) & 0x10) != 0 && !v4 )
        {
          MiUnlinkPageFromList(v9, 0);
          v4 = 1;
        }
        if ( MiPteInShadowRange(v9 + 16) )
        {
          if ( (unsigned int)MiPteHasShadow(v36, v35, v37, v38) )
          {
            if ( !HIBYTE(word_140C4DE08) && (v32 & 1) != 0 )
              v32 |= 0x8000000000000000uLL;
            *(_QWORD *)(v9 + 16) = v32;
            MiWritePteShadow(v9 + 16, v32);
LABEL_94:
            if ( v4 )
              MiInsertPageInList(v9, 8u);
            goto LABEL_106;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v32 & 1) != 0 )
          {
            v32 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v9 + 16) = v32;
        goto LABEL_94;
      }
      if ( MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow(v40, v39, v41, v42) )
        {
          if ( !HIBYTE(word_140C4DE08) && (v32 & 1) != 0 )
            v32 |= 0x8000000000000000uLL;
          *(_QWORD *)a2 = v32;
          MiWritePteShadow(a2, v32);
          goto LABEL_106;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v32 & 1) != 0 )
        {
          v32 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v32;
LABEL_106:
      if ( v46 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
        MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      }
      goto LABEL_110;
    }
  }
LABEL_111:
  if ( !v45 )
    goto LABEL_113;
LABEL_112:
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_113:
  if ( v8 )
    MiReleasePageFileInfo(a1, v8, 1LL);
  return v4;
}
