/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x1403486C0
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x1402B02C0 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x1403481F0 (MiReservePageFileSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402C9D60 (MiInvalidPteConforms.c)
 *     MiGetUsedPtesHandle @ 0x1402CC840 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402CEA34 (MiIncreaseUsedPtesCount.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MI_IS_RESET_PTE @ 0x140348D80 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     MiSetNonResidentPteHeat @ 0x140349540 (MiSetNonResidentPteHeat.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388734 (MiDiscardTransitionPteEx.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(__int64 a1, unsigned __int64 a2, char a3, unsigned __int64 *a4)
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
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  char v19; // di
  struct _LIST_ENTRY *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r10
  __int64 v25; // r11
  bool v26; // cf
  __int64 v27; // rbx
  __int64 updated; // rax
  __int16 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 UsedPtesHandle; // rax
  BOOL v34; // [rsp+20h] [rbp-68h]
  int v35; // [rsp+24h] [rbp-64h]
  int v36; // [rsp+28h] [rbp-60h] BYREF
  __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-48h]
  int v41; // [rsp+A0h] [rbp+18h]

  v4 = 0;
  v5 = a3 & 0x80;
  v35 = 0;
  v41 = v5;
  v8 = 0LL;
  do
  {
    v34 = 0;
    if ( v5 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = MiLockLeafPage(a2, 0LL);
      v34 = v9 != 0;
    }
    v10 = MI_READ_PTE_LOCK_FREE(a2);
    v37 = v10;
    v11 = v10;
    if ( (v10 & 1) != 0 )
    {
      if ( v41 )
      {
        v14 = v10;
        if ( MiPteInShadowRange((unsigned __int64)&v37)
          && (unsigned int)MiPteHasShadow()
          && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v37 >> 3) & 0x1FF)) & 0x20) != 0 )
            v14 = v11 | 0x20;
          LOBYTE(v11) = v37;
        }
        v18 = (v14 >> 12) & 0xFFFFFFFFFLL;
        v9 = 48 * v18 - 0x58000000000LL;
        if ( (a3 & 1) == 0 )
        {
          v36 = 0;
          v34 = 1;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v36, (__int64)Flink, v16, v17);
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          LOBYTE(v11) = v37;
        }
        if ( (unsigned int)MI_PFN_IS_PROTO(48 * v18 - 0x58000000000LL) )
          goto LABEL_111;
      }
      if ( (*(_BYTE *)v9 & 1) == 0
        || *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != a1
        || (*(_BYTE *)(v9 + 35) & 8) != 0 )
      {
        goto LABEL_111;
      }
      v19 = v11;
      v11 = *(_QWORD *)(v9 + 16);
      LODWORD(v39) = v9 + 16;
      if ( MiPteInShadowRange(v9 + 16)
        && (unsigned int)MiPteHasShadow()
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v20 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v20 )
        {
          v21 = v11 | 0x20;
          v22 = *((_QWORD *)&v20->Flink + ((v39 >> 3) & 0x1FF));
          if ( (v22 & 0x20) == 0 )
            v21 = v11;
          v11 = v21;
          if ( (v22 & 0x42) != 0 )
            v11 = v21 | 0x42;
        }
      }
      v37 = v11;
      if ( (v11 & 1) != 0 || v11 && qword_140C4DDC0 && (v11 & qword_140C4DDC0) == 0 )
        goto LABEL_111;
      if ( !(unsigned int)MI_IS_RESET_PTE(v11) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
      {
LABEL_57:
        v12 = a1;
        goto LABEL_58;
      }
      if ( !v41 )
        goto LABEL_111;
      v13 = (v19 & 0x42) == 0;
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
        v37 = v11;
        v35 = 1;
        goto LABEL_57;
      }
      if ( !MiInvalidPteConforms(v10) )
        goto LABEL_111;
      v13 = ((v11 >> 5) & 0xF) == 0;
      goto LABEL_56;
    }
    if ( !v41 )
      goto LABEL_11;
    v9 = MiLockTransitionLeafPage(a2, 0LL);
    v5 = v41;
  }
  while ( !v9 );
  v34 = 1;
  if ( (unsigned int)MI_PFN_IS_PROTO(v9) )
    goto LABEL_112;
LABEL_11:
  v12 = a1;
  if ( *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) == a1 )
  {
    v37 = MI_READ_PTE_LOCK_FREE(v9 + 16);
    v11 = v37;
    if ( !(unsigned int)MI_IS_RESET_PTE(v37) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
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
      v23 = *(_QWORD *)(v12 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a4) >> 4) + 6944);
      v38 = v11;
      MiSetNonResidentPteHeat(&v38, 0LL);
      v26 = (v11 & 0x400) != 0;
      v27 = v38;
      if ( !v26 )
      {
        v27 = v38 & 0xFFFFFFFFFFFFFFF9uLL;
        v38 &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      if ( v23 )
      {
        if ( v27 )
          updated = MiUpdatePageFileHighInPte(v27, v25);
        else
          updated = MiSwizzleInvalidPte(v24 & 0xFFFFFFFF00000000uLL);
        v27 = updated ^ (unsigned __int16)(updated ^ (v29 << 12)) & 0xF000 | 2;
        v38 = v27;
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
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4DE88) && (v27 & 1) != 0 )
              v27 |= 0x8000000000000000uLL;
            *(_QWORD *)(v9 + 16) = v27;
            MiWritePteShadow(v9 + 16, v27, v30);
LABEL_94:
            if ( v4 )
              MiInsertPageInList(v9, 8u);
            goto LABEL_106;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v27 & 1) != 0 )
          {
            v27 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v9 + 16) = v27;
        goto LABEL_94;
      }
      if ( MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4DE88) && (v27 & 1) != 0 )
            v27 |= 0x8000000000000000uLL;
          *(_QWORD *)a2 = v27;
          MiWritePteShadow(a2, v27, v31);
          goto LABEL_106;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v27 & 1) != 0 )
        {
          v27 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v27;
LABEL_106:
      if ( v35 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
        MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
      }
      goto LABEL_110;
    }
  }
LABEL_111:
  if ( !v34 )
    goto LABEL_113;
LABEL_112:
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_113:
  if ( v8 )
    MiReleasePageFileInfo(a1, v8, 1);
  return v4;
}
