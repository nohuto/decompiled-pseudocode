/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x1402E1EB0
 * Callers:
 *     MiReservePageFileSpace @ 0x1402E19E0 (MiReservePageFileSpace.c)
 *     MiOutSwapWorkingSetPte @ 0x140337C00 (MiOutSwapWorkingSetPte.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     MI_IS_RESET_PTE @ 0x1402E2570 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     MiSetNonResidentPteHeat @ 0x1402E3000 (MiSetNonResidentPteHeat.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(__int64 a1, ULONG_PTR a2, char a3, unsigned __int64 *a4)
{
  unsigned int v4; // r13d
  int v5; // eax
  unsigned __int64 v8; // r14
  ULONG_PTR v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  bool v13; // zf
  unsigned __int64 v14; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rdi
  char v17; // di
  struct _LIST_ENTRY *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r10
  __int64 v23; // r11
  bool v24; // cf
  __int64 v25; // rbx
  __int64 updated; // rax
  __int16 v27; // r8
  __int64 UsedPtesHandle; // rax
  BOOL v30; // [rsp+20h] [rbp-68h]
  int v31; // [rsp+24h] [rbp-64h]
  int v32; // [rsp+28h] [rbp-60h] BYREF
  __int64 v33; // [rsp+30h] [rbp-58h] BYREF
  __int64 v34; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+40h] [rbp-48h]
  int v37; // [rsp+A0h] [rbp+18h]

  v4 = 0;
  v5 = a3 & 0x80;
  v31 = 0;
  v37 = v5;
  v8 = 0LL;
  do
  {
    v30 = 0;
    if ( v5 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = MiLockLeafPage((unsigned __int64 *)a2, 0LL);
      v30 = v9 != 0;
    }
    v10 = MI_READ_PTE_LOCK_FREE(a2);
    v33 = v10;
    v11 = v10;
    if ( (v10 & 1) != 0 )
    {
      if ( v37 )
      {
        v14 = v10;
        if ( (unsigned int)MiPteInShadowRange(&v33)
          && (unsigned int)MiPteHasShadow()
          && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v33 >> 3) & 0x1FF)) & 0x20) != 0 )
            v14 = v11 | 0x20;
          LOBYTE(v11) = v33;
        }
        v16 = (v14 >> 12) & 0xFFFFFFFFFLL;
        v9 = 48 * v16 - 0x58000000000LL;
        if ( (a3 & 1) == 0 )
        {
          v32 = 0;
          v30 = 1;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v32);
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          LOBYTE(v11) = v33;
        }
        if ( (unsigned int)MI_PFN_IS_PROTO(48 * v16 - 0x58000000000LL) )
          goto LABEL_111;
      }
      if ( (*(_BYTE *)v9 & 1) == 0
        || *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != a1
        || (*(_BYTE *)(v9 + 35) & 8) != 0 )
      {
        goto LABEL_111;
      }
      v17 = v11;
      v11 = *(_QWORD *)(v9 + 16);
      LODWORD(v35) = v9 + 16;
      if ( (unsigned int)MiPteInShadowRange(v9 + 16)
        && (unsigned int)MiPteHasShadow()
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v18 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v18 )
        {
          v19 = v11 | 0x20;
          v20 = *((_QWORD *)&v18->Flink + ((v35 >> 3) & 0x1FF));
          if ( (v20 & 0x20) == 0 )
            v19 = v11;
          v11 = v19;
          if ( (v20 & 0x42) != 0 )
            v11 = v19 | 0x42;
        }
      }
      v33 = v11;
      if ( (v11 & 1) != 0 || v11 && qword_140C4DF80 && (v11 & qword_140C4DF80) == 0 )
        goto LABEL_111;
      if ( !(unsigned int)MI_IS_RESET_PTE(v11) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
      {
LABEL_57:
        v12 = a1;
        goto LABEL_58;
      }
      if ( !v37 )
        goto LABEL_111;
      v13 = (v17 & 0x42) == 0;
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
        v33 = v11;
        v31 = 1;
        goto LABEL_57;
      }
      if ( !MiInvalidPteConforms(v10) )
        goto LABEL_111;
      v13 = ((v11 >> 5) & 0xF) == 0;
      goto LABEL_56;
    }
    if ( !v37 )
      goto LABEL_11;
    v9 = MiLockTransitionLeafPage(a2, 0LL);
    v5 = v37;
  }
  while ( !v9 );
  v30 = 1;
  if ( (unsigned int)MI_PFN_IS_PROTO(v9) )
    goto LABEL_112;
LABEL_11:
  v12 = a1;
  if ( *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) == a1 )
  {
    v33 = MI_READ_PTE_LOCK_FREE(v9 + 16);
    v11 = v33;
    if ( !(unsigned int)MI_IS_RESET_PTE(v33) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
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
          v8 = MiCapturePageFileInfoInline((unsigned __int64 *)(v9 + 16), 1, 0);
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
      v21 = *(_QWORD *)(v12 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a4) >> 4) + 6944);
      v34 = v11;
      MiSetNonResidentPteHeat(&v34, 0LL);
      v24 = (v11 & 0x400) != 0;
      v25 = v34;
      if ( !v24 )
      {
        v25 = v34 & 0xFFFFFFFFFFFFFFF9uLL;
        v34 &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      if ( v21 )
      {
        if ( v25 )
          updated = MiUpdatePageFileHighInPte(v25, v23);
        else
          updated = MiSwizzleInvalidPte(v22 & 0xFFFFFFFF00000000uLL);
        v25 = updated ^ (unsigned __int16)(updated ^ (v27 << 12)) & 0xF000 | 2;
        v34 = v25;
      }
      if ( v9 )
      {
        if ( !*(_WORD *)(v9 + 32) && (*(_BYTE *)(v9 + 34) & 0x10) != 0 && !v4 )
        {
          MiUnlinkPageFromList(v9, 0);
          v4 = 1;
        }
        if ( (unsigned int)MiPteInShadowRange(v9 + 16) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (v25 & 1) != 0 )
              v25 |= 0x8000000000000000uLL;
            *(_QWORD *)(v9 + 16) = v25;
            MiWritePteShadow(v9 + 16, v25);
LABEL_94:
            if ( v4 )
              MiInsertPageInList(v9, 8LL);
            goto LABEL_106;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v25 & 1) != 0 )
          {
            v25 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v9 + 16) = v25;
        goto LABEL_94;
      }
      if ( (unsigned int)MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (v25 & 1) != 0 )
            v25 |= 0x8000000000000000uLL;
          *(_QWORD *)a2 = v25;
          MiWritePteShadow(a2, v25);
          goto LABEL_106;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v25 & 1) != 0 )
        {
          v25 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v25;
LABEL_106:
      if ( v31 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
        MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      }
      goto LABEL_110;
    }
  }
LABEL_111:
  if ( !v30 )
    goto LABEL_113;
LABEL_112:
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_113:
  if ( v8 )
    MiReleasePageFileInfo(a1, v8, 1);
  return v4;
}
