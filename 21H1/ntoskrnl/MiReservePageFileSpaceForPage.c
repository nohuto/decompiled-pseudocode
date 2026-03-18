/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x140227DE0
 * Callers:
 *     MiReservePageFileSpace @ 0x140227910 (MiReservePageFileSpace.c)
 *     MiOutSwapWorkingSetPte @ 0x140290570 (MiOutSwapWorkingSetPte.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiSetNonResidentPteHeat @ 0x140224C70 (MiSetNonResidentPteHeat.c)
 *     MI_IS_RESET_PTE @ 0x1402284A0 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiInvalidPteConforms @ 0x1402838C0 (MiInvalidPteConforms.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiIncreaseUsedPtesCount @ 0x1402AF310 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdi
  bool v16; // zf
  unsigned __int64 v17; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdi
  char v22; // di
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _LIST_ENTRY *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // r11
  bool v32; // cf
  unsigned __int64 v33; // rbx
  __int64 updated; // rax
  __int16 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 UsedPtesHandle; // rax
  BOOL v42; // [rsp+20h] [rbp-68h]
  int v43; // [rsp+24h] [rbp-64h]
  int v44; // [rsp+28h] [rbp-60h] BYREF
  __int64 v45; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v46; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v47; // [rsp+40h] [rbp-48h]
  int v49; // [rsp+A0h] [rbp+18h]

  v4 = 0;
  v5 = a3 & 0x80;
  v43 = 0;
  v49 = v5;
  v8 = 0LL;
  do
  {
    v42 = 0;
    if ( v5 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = MiLockLeafPage(a2, 0LL);
      v42 = v9 != 0;
    }
    v10 = MI_READ_PTE_LOCK_FREE(a2);
    v45 = v10;
    v12 = v10;
    if ( (v10 & 1) != 0 )
    {
      if ( v49 )
      {
        v17 = v10;
        if ( (unsigned int)MiPteInShadowRange(&v45, v11)
          && (unsigned int)MiPteHasShadow(v19, Flink)
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v45 >> 3) & 0x1FF)) & 0x20) != 0 )
            v17 = v12 | 0x20;
          LOBYTE(v12) = v45;
        }
        v21 = (v17 >> 12) & 0xFFFFFFFFFLL;
        v9 = 48 * v21 - 0x58000000000LL;
        if ( (a3 & 1) == 0 )
        {
          v44 = 0;
          v42 = 1;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v44);
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          LOBYTE(v12) = v45;
        }
        if ( (unsigned int)MI_PFN_IS_PROTO(48 * v21 - 0x58000000000LL, Flink, v20) )
          goto LABEL_111;
      }
      if ( (*(_BYTE *)v9 & 1) == 0
        || *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != a1
        || (*(_BYTE *)(v9 + 35) & 8) != 0 )
      {
        goto LABEL_111;
      }
      v22 = v12;
      v12 = *(_QWORD *)(v9 + 16);
      LODWORD(v47) = v9 + 16;
      if ( (unsigned int)MiPteInShadowRange(v9 + 16, a1)
        && (unsigned int)MiPteHasShadow(v24, v23)
        && (v12 & 1) != 0
        && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        v25 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v25 )
        {
          v26 = v12 | 0x20;
          v27 = *((_QWORD *)&v25->Flink + ((v47 >> 3) & 0x1FF));
          if ( (v27 & 0x20) == 0 )
            v26 = v12;
          v12 = v26;
          if ( (v27 & 0x42) != 0 )
            v12 = v26 | 0x42;
        }
      }
      v45 = v12;
      if ( (v12 & 1) != 0 || v12 && qword_140C4DE80 && (v12 & qword_140C4DE80) == 0 )
        goto LABEL_111;
      if ( !(unsigned int)MI_IS_RESET_PTE(v12) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
      {
LABEL_57:
        v15 = a1;
        goto LABEL_58;
      }
      if ( !v49 )
        goto LABEL_111;
      v16 = (v22 & 0x42) == 0;
LABEL_56:
      if ( v16 )
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
        v45 = v12;
        v43 = 1;
        goto LABEL_57;
      }
      if ( !(unsigned int)MiInvalidPteConforms(v10) )
        goto LABEL_111;
      v16 = ((v12 >> 5) & 0xF) == 0;
      goto LABEL_56;
    }
    if ( !v49 )
      goto LABEL_11;
    v9 = MiLockTransitionLeafPage(a2);
    v5 = v49;
  }
  while ( !v9 );
  v42 = 1;
  if ( (unsigned int)MI_PFN_IS_PROTO(v9, v13, v14) )
    goto LABEL_112;
LABEL_11:
  v15 = a1;
  if ( *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) == a1 )
  {
    v45 = MI_READ_PTE_LOCK_FREE(v9 + 16);
    v12 = v45;
    if ( !(unsigned int)MI_IS_RESET_PTE(v45) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
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
      v28 = *(_QWORD *)(v15 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a4) >> 4) + 6944);
      v46 = v12;
      MiSetNonResidentPteHeat(&v46, 0);
      v32 = (v12 & 0x400) != 0;
      v33 = v46;
      if ( !v32 )
      {
        v33 = v46 & 0xFFFFFFFFFFFFFFF9uLL;
        v46 &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      if ( v28 )
      {
        if ( v33 )
          updated = MiUpdatePageFileHighInPte(v33, v31, *(unsigned __int16 *)(v28 + 204));
        else
          updated = MiSwizzleInvalidPte(v30 & 0xFFFFFFFF00000000uLL);
        v33 = updated ^ (unsigned __int16)(updated ^ (v35 << 12)) & 0xF000 | 2;
        v46 = v33;
      }
      if ( v9 )
      {
        if ( !*(_WORD *)(v9 + 32) && (*(_BYTE *)(v9 + 34) & 0x10) != 0 && !v4 )
        {
          MiUnlinkPageFromList(v9, 0);
          v4 = 1;
        }
        if ( (unsigned int)MiPteInShadowRange(v9 + 16, v29) )
        {
          if ( (unsigned int)MiPteHasShadow(v37, v36) )
          {
            if ( !HIBYTE(word_140C4DF48) && (v33 & 1) != 0 )
              v33 |= 0x8000000000000000uLL;
            *(_QWORD *)(v9 + 16) = v33;
            MiWritePteShadow(v9 + 16, v33);
LABEL_94:
            if ( v4 )
              MiInsertPageInList(v9, 8LL);
            goto LABEL_106;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v33 & 1) != 0 )
          {
            v33 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v9 + 16) = v33;
        goto LABEL_94;
      }
      if ( (unsigned int)MiPteInShadowRange(a2, v29) )
      {
        if ( (unsigned int)MiPteHasShadow(v39, v38) )
        {
          if ( !HIBYTE(word_140C4DF48) && (v33 & 1) != 0 )
            v33 |= 0x8000000000000000uLL;
          *(_QWORD *)a2 = v33;
          MiWritePteShadow(a2, v33);
          goto LABEL_106;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v33 & 1) != 0 )
        {
          v33 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v33;
LABEL_106:
      if ( v43 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
        MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      }
      goto LABEL_110;
    }
  }
LABEL_111:
  if ( !v42 )
    goto LABEL_113;
LABEL_112:
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_113:
  if ( v8 )
    MiReleasePageFileInfo(a1, v8, 1LL);
  return v4;
}
