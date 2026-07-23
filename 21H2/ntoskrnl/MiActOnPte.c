/*
 * XREFs of MiActOnPte @ 0x1402E0E40
 * Callers:
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiRotatedToFrameBuffer @ 0x14022E898 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUpdateWsleAge @ 0x14023D07C (MiUpdateWsleAge.c)
 *     MI_CLEAR_RESET_PTE @ 0x14024020C (MI_CLEAR_RESET_PTE.c)
 *     MiUpdatePageTableUseCount @ 0x14024DB74 (MiUpdatePageTableUseCount.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiUpdatePfnPriority @ 0x14025ED44 (MiUpdatePfnPriority.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MI_IS_RESET_PTE @ 0x1402E2570 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiSharedVaToPartition @ 0x1402E5C9C (MiSharedVaToPartition.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiGetVaAge @ 0x140313E40 (MiGetVaAge.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiSetVaAgeList @ 0x140338400 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckUserVirtualAddress @ 0x140339750 (MiCheckUserVirtualAddress.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        int a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8)
{
  unsigned int v8; // r12d
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // r15
  _KPROCESS *Process; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  ULONG_PTR v18; // rsi
  bool v19; // zf
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  char updated; // al
  __int64 v24; // r12
  __int64 v25; // r8
  char v26; // cl
  char v27; // dl
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // r15
  __int64 v31; // rcx
  __int64 v32; // r9
  char v33; // al
  char v34; // al
  int v35; // eax
  ULONG_PTR v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rdx
  char v42; // al
  __int64 v43; // rax
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rdx
  int v47; // esi
  char v48; // di
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  int v56; // [rsp+20h] [rbp-58h] BYREF
  __int64 v57; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v58; // [rsp+30h] [rbp-48h]
  unsigned __int64 *v59; // [rsp+38h] [rbp-40h]
  int v62; // [rsp+98h] [rbp+20h] BYREF

  v8 = 0;
  v62 = 0;
  v9 = a4;
  v10 = a3;
  *a8 = 0LL;
  *a7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v59 = &Process[1].ActiveProcessorsPadding[6];
  v12 = (unsigned __int64)a4;
  if ( !a4 )
    v12 = a3;
  v58 = v12;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = MI_READ_PTE_LOCK_FREE(v12);
      v57 = v13;
      v14 = v13;
      if ( (v13 & 1) == 0 )
        break;
      if ( !v9 )
      {
        v20 = MI_READ_PTE_LOCK_FREE(&v57);
        if ( ((*(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
          return 3221226548LL;
        v15 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( (*(_QWORD *)(v15 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v15 + 8) <= 0 )
        {
          if ( MiLocateCloneAddress(Process, *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL, v21) )
            return 3221226548LL;
        }
        else
        {
          if ( a5 == 1 )
            return 3221226548LL;
          if ( !a5 )
            return 274LL;
        }
        v56 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v56);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(v10) )
          goto LABEL_30;
        LOBYTE(v16) = v57;
LABEL_33:
        if ( a5 == 2 )
        {
          updated = MiUpdatePfnPriority(v15);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v24 = (__int64)v59;
          if ( updated != -1 && !v9 )
            MiUpdateWsleAge((__int64)v59, (_QWORD *)v10, updated);
          if ( (*(_QWORD *)(v15 + 40) & 0x1000000000LL) == 0 )
          {
            v25 = *(_QWORD *)(v15 + 8);
            if ( v25 > 0 && !v9 )
              MiDemoteCombinedPte(v24, v10, v25 | 0x8000000000000000uLL);
          }
          return 0LL;
        }
        v26 = *(_BYTE *)(v15 + 34);
        if ( (v26 & 8) != 0 )
        {
LABEL_30:
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
        v27 = v26 & 0x10;
        if ( a5 == 1 )
        {
          if ( v27 || !v9 && (v16 & 0x42) != 0 )
            v8 = -1073740748;
          if ( !v27 && (*(_DWORD *)(v15 + 16) & 4) == 0 )
            *(_BYTE *)(v15 + 34) = v26 | 0x10;
          if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v15 + 16)) )
          {
            MI_CLEAR_RESET_PTE((__int64 *)(v15 + 16));
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return v8;
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return 3221226548LL;
          }
        }
        if ( v27 )
          *(_BYTE *)(v15 + 34) = v26 & 0xEF;
        v28 = MiCapturePageFileInfoInline((unsigned __int64 *)(v15 + 16), 1, 1);
        *a8 = v28;
        if ( v28 )
          *a7 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL));
        v29 = MiUpdatePageFileHighInPte(*(_QWORD *)(v15 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (unsigned int)MiPteInShadowRange(v15 + 16) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (v29 & 1) != 0 )
              v29 |= 0x8000000000000000uLL;
            *(_QWORD *)(v15 + 16) = v29;
            MiWritePteShadow(v15 + 16, v29);
            goto LABEL_67;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v29 & 1) != 0 )
          {
            v29 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v15 + 16) = v29;
LABEL_67:
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v9 || (v57 & 0x42) == 0 )
          return 0LL;
        MiWriteValidPteNewProtection(v10, v57 & 0xFFFFFFFFFFFFFF9DuLL);
        v30 = (__int64)(v10 << 25) >> 16;
        if ( (unsigned __int8)MiGetVaAge(v31, v30) < 7u )
        {
          LOBYTE(v32) = 1;
          MiSetVaAgeList(v59, v30, 1LL, v32);
        }
        return 3221225505LL;
      }
      v15 = MiLockLeafPage(v9, 0LL);
      v12 = v58;
      if ( v15 )
      {
        v16 = MI_READ_PTE_LOCK_FREE(v9);
        v57 = v16;
        if ( (v16 & 1) != 0 )
          goto LABEL_33;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v12 = v58;
      }
    }
    if ( (v13 & 0x400) != 0 )
      return 0LL;
    if ( (v13 & 0x800) == 0 )
      break;
    if ( v9 )
      v17 = MiLockLeafPage(v9, 0LL);
    else
      v17 = MiLockTransitionLeafPage(v10, 0LL);
    v18 = v17;
    v19 = v17 == 0;
    v12 = v58;
    if ( !v19 )
    {
      if ( !v9 || (v57 = MI_READ_PTE_LOCK_FREE(v9), (v57 & 1) == 0) )
      {
        if ( a5 == 2 )
        {
          MiUpdatePfnPriority(v18);
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 0LL;
        }
        v33 = *(_BYTE *)(v18 + 34);
        if ( (v33 & 7) == 2 )
        {
          if ( a5 != 1 )
          {
            if ( (v33 & 0x28) == 0 )
            {
              v38 = MiCapturePageFileInfoInline((unsigned __int64 *)(v18 + 16), 1, 1);
              *a8 = v38;
              if ( v38 )
                *a7 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v18 + 40) >> 39) & 0x3FFLL));
              v39 = MiUpdatePageFileHighInPte(*(_QWORD *)(v18 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
              v57 = v39;
              v40 = v39;
              if ( (unsigned int)MiPteInShadowRange(v18 + 16) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v41 = v39;
                  if ( !HIBYTE(word_140C4E048) && (v39 & 1) != 0 )
                    v41 = v39 | 0x8000000000000000uLL;
                  *(_QWORD *)(v18 + 16) = v41;
                  MiWritePteShadow(v18 + 16, v41);
                  goto LABEL_124;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                {
                  *(_QWORD *)(v18 + 16) = v39;
                  goto LABEL_124;
                }
                if ( (v39 & 1) != 0 )
                  v40 = v39 | 0x8000000000000000uLL;
              }
              *(_QWORD *)(v18 + 16) = v40;
            }
LABEL_124:
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return v8;
          }
          if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v18 + 16)) )
            MI_CLEAR_RESET_PTE((__int64 *)(v18 + 16));
          else
            v8 = -1073740748;
          if ( (*(_DWORD *)(v18 + 16) & 4) != 0 )
            goto LABEL_124;
          v34 = *(_BYTE *)(v18 + 34) | 0x10;
          *(_BYTE *)(v18 + 34) = v34;
          if ( *(_WORD *)(v18 + 32) )
          {
            *(_BYTE *)(v18 + 34) = v34 & 0xF8 | 3;
            goto LABEL_124;
          }
          v35 = MiUnlinkPageFromList(v18, 0);
          v36 = v18;
          if ( !v35 )
          {
            MiDiscardTransitionPteEx(v18, 0LL);
            v8 = -1073740748;
            goto LABEL_124;
          }
          v37 = 8LL;
LABEL_123:
          MiInsertPageInList(v36, v37);
          goto LABEL_124;
        }
        if ( (v33 & 7) != 3 )
          goto LABEL_124;
        if ( a5 == 1 )
        {
          v8 = -1073740748;
          goto LABEL_124;
        }
        if ( (v33 & 8) != 0 || a5 || (v33 & 0x20) != 0 )
          goto LABEL_124;
        v42 = v33 & 0xEF;
        *(_BYTE *)(v18 + 34) = v42;
        if ( *(_WORD *)(v18 + 32) )
          *(_BYTE *)(v18 + 34) = v42 & 0xF8 | 2;
        else
          MiUnlinkPageFromList(v18, 0);
        v43 = MiCapturePageFileInfoInline((unsigned __int64 *)(v18 + 16), 1, 1);
        *a8 = v43;
        if ( v43 )
          *a7 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v18 + 40) >> 39) & 0x3FFLL));
        v44 = MiUpdatePageFileHighInPte(*(_QWORD *)(v18 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
        v57 = v44;
        v45 = v44;
        if ( (unsigned int)MiPteInShadowRange(v18 + 16) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v46 = v44;
            if ( !HIBYTE(word_140C4E048) && (v44 & 1) != 0 )
              v46 = v44 | 0x8000000000000000uLL;
            *(_QWORD *)(v18 + 16) = v46;
            MiWritePteShadow(v18 + 16, v46);
            goto LABEL_121;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            *(_QWORD *)(v18 + 16) = v44;
LABEL_121:
            if ( *(_WORD *)(v18 + 32) )
              goto LABEL_124;
            v37 = 4LL;
            v36 = v18;
            goto LABEL_123;
          }
          if ( (v44 & 1) != 0 )
            v45 = v44 | 0x8000000000000000uLL;
        }
        *(_QWORD *)(v18 + 16) = v45;
        goto LABEL_121;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v12 = v58;
    }
  }
  v47 = a5;
  if ( a5 == 2 )
    return 0LL;
  if ( !v13 )
  {
    if ( !v9 && !a5 && !MiCheckUserVirtualAddress((__int64)(v10 << 25) >> 16, &v62, a1) )
    {
      v48 = v62;
      if ( v62 != 24 )
      {
        MiUpdatePageTableUseCount((__int64)(v10 << 25) >> 16, 1u);
        v49 = (32LL * (v48 & 0x1F)) | MiSwizzleInvalidPte(0x100000000LL) & 0xFFFFFFFFFFFFFC1FuLL;
        v57 = v49;
        v50 = v49;
        if ( !(unsigned int)MiPteInShadowRange(v10) )
        {
LABEL_140:
          *(_QWORD *)v10 = v50;
          return 0LL;
        }
        if ( (unsigned int)MiPteHasShadow() )
        {
          v51 = v49;
          if ( !HIBYTE(word_140C4E048) && (v49 & 1) != 0 )
            v51 = v49 | 0x8000000000000000uLL;
          *(_QWORD *)v10 = v51;
          MiWritePteShadow(v10, v51);
          return 0LL;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          if ( (v49 & 1) != 0 )
            v50 = v49 | 0x8000000000000000uLL;
          goto LABEL_140;
        }
LABEL_166:
        *(_QWORD *)v10 = v49;
        return 0LL;
      }
    }
    return 3221226548LL;
  }
  v52 = *(_QWORD *)(qword_140C4E688 + 8LL * Process[1].IdealProcessorPadding[5]);
  if ( v9 )
  {
    if ( a2 == 1 )
    {
      v52 = MiSharedVaToPartition(&Process[1].ActiveProcessorsPadding[6], (__int64)(v10 << 25) >> 16, v9);
    }
    else if ( (*(_DWORD *)(a1 + 48) & 0x100000) != 0 || (v53 = *(_QWORD *)(a1 + 72)) == 0 )
    {
      v52 = *(_QWORD *)(qword_140C4E688 + 8LL * Process[1].IdealProcessorPadding[5]);
    }
    else
    {
      v52 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)v53 + 60LL) & 0x3FF));
    }
  }
  if ( IS_PTE_NOT_DEMAND_ZERO(v14) )
  {
    if ( v47 == 1 )
      return 3221226548LL;
    v54 = MiCapturePageFileInfoInline((unsigned __int64 *)&v57, 1, 0);
    *a8 = v54;
    if ( !v54 )
      return 0LL;
    *a7 = v52;
    if ( !v9 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
      v9 = (unsigned __int64 *)v10;
    }
    v55 = v57;
    if ( (unsigned int)MiPteInShadowRange(v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (v55 & 1) != 0 )
          v55 |= 0x8000000000000000uLL;
        *v9 = v55;
        MiWritePteShadow((__int64)v9, v55);
        return 0LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v55 & 1) != 0 )
      {
        v55 |= 0x8000000000000000uLL;
      }
    }
    *v9 = v55;
    return 0LL;
  }
  if ( v47 == 1 )
  {
    if ( !(unsigned int)MI_IS_RESET_PTE(v14) )
      return 3221226548LL;
    MI_CLEAR_RESET_PTE(&v57);
    v49 = v57;
  }
  else
  {
    if ( (v14 & 2) != 0 )
    {
      MiReleasePageFileSpace(v52, v14, 1LL);
      v14 &= ~2uLL;
    }
    v49 = MiUpdatePageFileHighInPte(v14, 1LL);
    v57 = v49;
  }
  if ( v9 )
    v10 = (unsigned __int64)v9;
  if ( !(unsigned int)MiPteInShadowRange(v10) )
    goto LABEL_166;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v49 & 1) != 0 )
      v49 |= 0x8000000000000000uLL;
    goto LABEL_166;
  }
  if ( !HIBYTE(word_140C4E048) && (v49 & 1) != 0 )
    v49 |= 0x8000000000000000uLL;
  *(_QWORD *)v10 = v49;
  MiWritePteShadow(v10, v49);
  return 0LL;
}
