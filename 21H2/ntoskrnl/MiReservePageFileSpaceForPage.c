/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x14023D660
 * Callers:
 *     MiReservePageFileSpace @ 0x14023D190 (MiReservePageFileSpace.c)
 *     MiOutSwapWorkingSetPte @ 0x14032CEB0 (MiOutSwapWorkingSetPte.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiInvalidPteConforms @ 0x14023B540 (MiInvalidPteConforms.c)
 *     MI_IS_RESET_PTE @ 0x14023DD20 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     MiSetNonResidentPteHeat @ 0x14023E7B0 (MiSetNonResidentPteHeat.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140269CD0 (MiLockLeafPage.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiIncreaseUsedPtesCount @ 0x1403097D4 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14030CA60 (MiGetUsedPtesHandle.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x140364704 (MiLockTransitionLeafPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388E94 (MiDiscardTransitionPteEx.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(__int64 a1, ULONG_PTR a2, char a3, unsigned __int64 *a4)
{
  unsigned int v4; // r13d
  int v5; // eax
  __int64 v8; // r14
  ULONG_PTR v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  bool v14; // zf
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v21; // rdi
  char v22; // di
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _LIST_ENTRY *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // r11
  bool v34; // cf
  unsigned __int64 v35; // rbx
  __int64 updated; // rax
  __int16 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 UsedPtesHandle; // rax
  BOOL v48; // [rsp+20h] [rbp-68h]
  int v49; // [rsp+24h] [rbp-64h]
  int v50; // [rsp+28h] [rbp-60h] BYREF
  __int64 v51; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v52; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v53; // [rsp+40h] [rbp-48h]
  int v55; // [rsp+A0h] [rbp+18h]

  v4 = 0;
  v5 = a3 & 0x80;
  v49 = 0;
  v55 = v5;
  v8 = 0LL;
  do
  {
    v48 = 0;
    if ( v5 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = MiLockLeafPage(a2, 0LL);
      v48 = v9 != 0;
    }
    v10 = MI_READ_PTE_LOCK_FREE(a2);
    v51 = v10;
    v12 = v10;
    if ( (v10 & 1) != 0 )
    {
      if ( v55 )
      {
        v15 = v10;
        if ( (unsigned int)MiPteInShadowRange(&v51, v11)
          && (unsigned int)MiPteHasShadow(v17, v16, v18, v19)
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v51 >> 3) & 0x1FF)) & 0x20) != 0 )
            v15 = v12 | 0x20;
          LOBYTE(v12) = v51;
        }
        v21 = (v15 >> 12) & 0xFFFFFFFFFLL;
        v9 = 48 * v21 - 0x58000000000LL;
        if ( (a3 & 1) == 0 )
        {
          v50 = 0;
          v48 = 1;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v50);
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          LOBYTE(v12) = v51;
        }
        if ( (unsigned int)MI_PFN_IS_PROTO(48 * v21 - 0x58000000000LL) )
          goto LABEL_111;
      }
      if ( (*(_BYTE *)v9 & 1) == 0
        || *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != a1
        || (*(_BYTE *)(v9 + 35) & 8) != 0 )
      {
        goto LABEL_111;
      }
      v22 = v12;
      v12 = *(_QWORD *)(v9 + 16);
      LODWORD(v53) = v9 + 16;
      if ( (unsigned int)MiPteInShadowRange(v9 + 16, a1)
        && (unsigned int)MiPteHasShadow(v24, v23, v25, v26)
        && (v12 & 1) != 0
        && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        v27 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v27 )
        {
          v28 = v12 | 0x20;
          v29 = *((_QWORD *)&v27->Flink + ((v53 >> 3) & 0x1FF));
          if ( (v29 & 0x20) == 0 )
            v28 = v12;
          v12 = v28;
          if ( (v29 & 0x42) != 0 )
            v12 = v28 | 0x42;
        }
      }
      v51 = v12;
      if ( (v12 & 1) != 0 || v12 && qword_140C4DF40 && (v12 & qword_140C4DF40) == 0 )
        goto LABEL_111;
      if ( !(unsigned int)MI_IS_RESET_PTE(v12) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
      {
LABEL_57:
        v13 = a1;
        goto LABEL_58;
      }
      if ( !v55 )
        goto LABEL_111;
      v14 = (v22 & 0x42) == 0;
LABEL_56:
      if ( v14 )
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
        v12 = MiSwizzleInvalidPte(8LL * (a3 & 0x7C));
        v51 = v12;
        v49 = 1;
        goto LABEL_57;
      }
      if ( !MiInvalidPteConforms(v10) )
        goto LABEL_111;
      v14 = ((v12 >> 5) & 0xF) == 0;
      goto LABEL_56;
    }
    if ( !v55 )
      goto LABEL_11;
    v9 = MiLockTransitionLeafPage(a2);
    v5 = v55;
  }
  while ( !v9 );
  v48 = 1;
  if ( (unsigned int)MI_PFN_IS_PROTO(v9) )
    goto LABEL_112;
LABEL_11:
  v13 = a1;
  if ( *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) == a1 )
  {
    v51 = MI_READ_PTE_LOCK_FREE(v9 + 16);
    v12 = v51;
    if ( !(unsigned int)MI_IS_RESET_PTE(v51) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
    {
LABEL_58:
      if ( (v12 & 2) != 0 )
      {
        if ( (a3 & 1) != 0 )
          *a4 = v12;
        goto LABEL_111;
      }
      if ( v9 && (*(_BYTE *)(v9 + 34) & 0x28) != 0 )
        goto LABEL_111;
      if ( (v12 & 4) != 0 )
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
          v8 = MiCapturePageFileInfoInline(v9 + 16, 1LL, 0LL);
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
      v30 = *(_QWORD *)(v13 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a4) >> 4) + 6944);
      v52 = v12;
      MiSetNonResidentPteHeat(&v52, 0LL);
      v34 = (v12 & 0x400) != 0;
      v35 = v52;
      if ( !v34 )
      {
        v35 = v52 & 0xFFFFFFFFFFFFFFF9uLL;
        v52 &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      if ( v30 )
      {
        if ( v35 )
          updated = MiUpdatePageFileHighInPte(v35, v33, *(unsigned __int16 *)(v30 + 204));
        else
          updated = MiSwizzleInvalidPte(v32 & 0xFFFFFFFF00000000uLL);
        v35 = updated ^ (unsigned __int16)(updated ^ (v37 << 12)) & 0xF000 | 2;
        v52 = v35;
      }
      if ( v9 )
      {
        if ( !*(_WORD *)(v9 + 32) && (*(_BYTE *)(v9 + 34) & 0x10) != 0 && !v4 )
        {
          MiUnlinkPageFromList(v9, 0);
          v4 = 1;
        }
        if ( (unsigned int)MiPteInShadowRange(v9 + 16, v31) )
        {
          if ( (unsigned int)MiPteHasShadow(v39, v38, v40, v41) )
          {
            if ( !HIBYTE(word_140C4E008) && (v35 & 1) != 0 )
              v35 |= 0x8000000000000000uLL;
            *(_QWORD *)(v9 + 16) = v35;
            MiWritePteShadow(v9 + 16, v35);
LABEL_94:
            if ( v4 )
              MiInsertPageInList(v9, 8LL);
            goto LABEL_106;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v35 & 1) != 0 )
          {
            v35 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v9 + 16) = v35;
        goto LABEL_94;
      }
      if ( (unsigned int)MiPteInShadowRange(a2, v31) )
      {
        if ( (unsigned int)MiPteHasShadow(v43, v42, v44, v45) )
        {
          if ( !HIBYTE(word_140C4E008) && (v35 & 1) != 0 )
            v35 |= 0x8000000000000000uLL;
          *(_QWORD *)a2 = v35;
          MiWritePteShadow(a2, v35);
          goto LABEL_106;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v35 & 1) != 0 )
        {
          v35 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v35;
LABEL_106:
      if ( v49 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
        MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      }
      goto LABEL_110;
    }
  }
LABEL_111:
  if ( !v48 )
    goto LABEL_113;
LABEL_112:
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_113:
  if ( v8 )
    MiReleasePageFileInfo(a1, v8, 1LL);
  return v4;
}
