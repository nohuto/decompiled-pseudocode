/*
 * XREFs of MiActOnPte @ 0x140228A50
 * Callers:
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiSharedVaToPartition @ 0x140226348 (MiSharedVaToPartition.c)
 *     MI_IS_RESET_PTE @ 0x1402284A0 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14022956C (IS_PTE_NOT_DEMAND_ZERO.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x140290D70 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetVaAge @ 0x1402A0200 (MiGetVaAge.c)
 *     MiUpdatePfnPriority @ 0x1402A91E0 (MiUpdatePfnPriority.c)
 *     MiReleasePageFileSpace @ 0x1402AB620 (MiReleasePageFileSpace.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiCheckUserVirtualAddress @ 0x1402B2640 (MiCheckUserVirtualAddress.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x140300408 (MiRotatedToFrameBuffer.c)
 *     MiUpdateWsleAge @ 0x14030EDEC (MiUpdateWsleAge.c)
 *     MI_CLEAR_RESET_PTE @ 0x1403121FC (MI_CLEAR_RESET_PTE.c)
 *     MiUpdatePageTableUseCount @ 0x140341598 (MiUpdatePageTableUseCount.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 *     MiDemoteCombinedPte @ 0x140368610 (MiDemoteCombinedPte.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        _QWORD *a4,
        int a5,
        unsigned int a6,
        ULONG_PTR **a7,
        __int64 *a8)
{
  unsigned int v8; // r12d
  _QWORD *v9; // r14
  ULONG_PTR v10; // r15
  _KPROCESS *Process; // r13
  _QWORD *v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9
  ULONG_PTR v20; // rsi
  bool v21; // zf
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int8 updated; // al
  unsigned __int64 *v27; // r12
  __int64 v28; // r8
  char v29; // cl
  char v30; // dl
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rcx
  __int64 v38; // r9
  char v39; // al
  char v40; // al
  int v41; // eax
  ULONG_PTR v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  char v51; // al
  __int64 v52; // rax
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  int v59; // esi
  char v60; // di
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  ULONG_PTR *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // [rsp+20h] [rbp-58h] BYREF
  __int64 v79; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v80; // [rsp+30h] [rbp-48h]
  unsigned __int64 *v81; // [rsp+38h] [rbp-40h]
  int v84; // [rsp+98h] [rbp+20h] BYREF

  v8 = 0;
  v84 = 0;
  v9 = a4;
  v10 = a3;
  *a8 = 0LL;
  *a7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v81 = &Process[1].ActiveProcessorsPadding[6];
  v12 = a4;
  if ( !a4 )
    v12 = (_QWORD *)a3;
  v80 = v12;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = MI_READ_PTE_LOCK_FREE(v12);
      v79 = v13;
      v14 = v13;
      if ( (v13 & 1) == 0 )
        break;
      if ( !v9 )
      {
        v22 = MI_READ_PTE_LOCK_FREE(&v79);
        if ( ((*(_QWORD *)(48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
          return 3221226548LL;
        v15 = 48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( (*(_QWORD *)(v15 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v15 + 8) <= 0 )
        {
          if ( MiLocateCloneAddress(Process, *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) )
            return 3221226548LL;
        }
        else
        {
          if ( a5 == 1 )
            return 3221226548LL;
          if ( !a5 )
            return 274LL;
        }
        v78 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v78);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(v10, v23, v24, v17) )
          goto LABEL_30;
        LOBYTE(v16) = v79;
LABEL_33:
        if ( a5 == 2 )
        {
          LOBYTE(v8) = v9 == 0LL;
          updated = MiUpdatePfnPriority(v15, a6, v8, v17);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v27 = v81;
          if ( updated != 0xFF && !v9 )
            MiUpdateWsleAge(v81, v10, updated);
          if ( (*(_QWORD *)(v15 + 40) & 0x1000000000LL) == 0 )
          {
            v28 = *(_QWORD *)(v15 + 8);
            if ( v28 > 0 && !v9 )
              MiDemoteCombinedPte(v27, v10, v28 | 0x8000000000000000uLL);
          }
          return 0LL;
        }
        v29 = *(_BYTE *)(v15 + 34);
        if ( (v29 & 8) != 0 )
        {
LABEL_30:
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
        v30 = v29 & 0x10;
        if ( a5 == 1 )
        {
          if ( v30 || !v9 && (v16 & 0x42) != 0 )
            v8 = -1073740748;
          if ( !v30 && (*(_DWORD *)(v15 + 16) & 4) == 0 )
            *(_BYTE *)(v15 + 34) = v29 | 0x10;
          if ( MI_IS_RESET_PTE(*(_QWORD *)(v15 + 16)) )
          {
            MI_CLEAR_RESET_PTE(v15 + 16);
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return v8;
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return 3221226548LL;
          }
        }
        if ( v30 )
          *(_BYTE *)(v15 + 34) = v29 & 0xEF;
        v31 = MiCapturePageFileInfoInline(v15 + 16, 1LL);
        *a8 = v31;
        if ( v31 )
          *a7 = *(ULONG_PTR **)(qword_140C4E588 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL));
        v32 = MiUpdatePageFileHighInPte(*(_QWORD *)(v15 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (unsigned int)MiPteInShadowRange(v15 + 16, v33) )
        {
          if ( (unsigned int)MiPteHasShadow(v35, v34) )
          {
            if ( !HIBYTE(word_140C4DF48) && (v32 & 1) != 0 )
              v32 |= 0x8000000000000000uLL;
            *(_QWORD *)(v15 + 16) = v32;
            MiWritePteShadow(v15 + 16, v32);
            goto LABEL_67;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v32 & 1) != 0 )
          {
            v32 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v15 + 16) = v32;
LABEL_67:
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v9 || (v79 & 0x42) == 0 )
          return 0LL;
        MiWriteValidPteNewProtection(v10, v79 & 0xFFFFFFFFFFFFFF9DuLL);
        v36 = (__int64)(v10 << 25) >> 16;
        if ( (unsigned __int8)MiGetVaAge(v37, v36) < 7u )
        {
          LOBYTE(v38) = 1;
          MiSetVaAgeList(v81, v36, 1LL, v38, v78);
        }
        return 3221225505LL;
      }
      v15 = MiLockLeafPage(v9, 0LL);
      v12 = v80;
      if ( v15 )
      {
        v16 = MI_READ_PTE_LOCK_FREE(v9);
        v79 = v16;
        if ( (v16 & 1) != 0 )
          goto LABEL_33;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v12 = v80;
      }
    }
    if ( (v13 & 0x400) != 0 )
      return 0LL;
    if ( (v13 & 0x800) == 0 )
      break;
    if ( v9 )
      v18 = MiLockLeafPage(v9, 0LL);
    else
      v18 = MiLockTransitionLeafPage(v10);
    v20 = v18;
    v21 = v18 == 0;
    v12 = v80;
    if ( !v21 )
    {
      if ( !v9 || (v79 = MI_READ_PTE_LOCK_FREE(v9), (v79 & 1) == 0) )
      {
        if ( a5 == 2 )
        {
          MiUpdatePfnPriority(v20, a6, 1LL, v19);
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 0LL;
        }
        v39 = *(_BYTE *)(v20 + 34);
        if ( (v39 & 7) == 2 )
        {
          if ( a5 != 1 )
          {
            if ( (v39 & 0x28) == 0 )
            {
              v44 = MiCapturePageFileInfoInline(v20 + 16, 1LL);
              *a8 = v44;
              if ( v44 )
                *a7 = *(ULONG_PTR **)(qword_140C4E588 + 8 * ((*(_QWORD *)(v20 + 40) >> 39) & 0x3FFLL));
              v45 = MiUpdatePageFileHighInPte(*(_QWORD *)(v20 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
              v79 = v45;
              v46 = v45;
              if ( (unsigned int)MiPteInShadowRange(v20 + 16, v47) )
              {
                if ( (unsigned int)MiPteHasShadow(v49, v48) )
                {
                  v50 = v45;
                  if ( !HIBYTE(word_140C4DF48) && (v45 & 1) != 0 )
                    v50 = v45 | 0x8000000000000000uLL;
                  *(_QWORD *)(v20 + 16) = v50;
                  MiWritePteShadow(v20 + 16, v50);
                  goto LABEL_124;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                {
                  *(_QWORD *)(v20 + 16) = v45;
                  goto LABEL_124;
                }
                if ( (v45 & 1) != 0 )
                  v46 = v45 | 0x8000000000000000uLL;
              }
              *(_QWORD *)(v20 + 16) = v46;
            }
LABEL_124:
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return v8;
          }
          if ( MI_IS_RESET_PTE(*(_QWORD *)(v20 + 16)) )
            MI_CLEAR_RESET_PTE(v20 + 16);
          else
            v8 = -1073740748;
          if ( (*(_DWORD *)(v20 + 16) & 4) != 0 )
            goto LABEL_124;
          v40 = *(_BYTE *)(v20 + 34) | 0x10;
          *(_BYTE *)(v20 + 34) = v40;
          if ( *(_WORD *)(v20 + 32) )
          {
            *(_BYTE *)(v20 + 34) = v40 & 0xF8 | 3;
            goto LABEL_124;
          }
          v41 = MiUnlinkPageFromList(v20, 0);
          v42 = v20;
          if ( !v41 )
          {
            MiDiscardTransitionPteEx(v20, 0LL);
            v8 = -1073740748;
            goto LABEL_124;
          }
          v43 = 8LL;
LABEL_123:
          MiInsertPageInList(v42, v43);
          goto LABEL_124;
        }
        if ( (v39 & 7) != 3 )
          goto LABEL_124;
        if ( a5 == 1 )
        {
          v8 = -1073740748;
          goto LABEL_124;
        }
        if ( (v39 & 8) != 0 || a5 || (v39 & 0x20) != 0 )
          goto LABEL_124;
        v51 = v39 & 0xEF;
        *(_BYTE *)(v20 + 34) = v51;
        if ( *(_WORD *)(v20 + 32) )
          *(_BYTE *)(v20 + 34) = v51 & 0xF8 | 2;
        else
          MiUnlinkPageFromList(v20, 0);
        v52 = MiCapturePageFileInfoInline(v20 + 16, 1LL);
        *a8 = v52;
        if ( v52 )
          *a7 = *(ULONG_PTR **)(qword_140C4E588 + 8 * ((*(_QWORD *)(v20 + 40) >> 39) & 0x3FFLL));
        v53 = MiUpdatePageFileHighInPte(*(_QWORD *)(v20 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
        v79 = v53;
        v54 = v53;
        if ( (unsigned int)MiPteInShadowRange(v20 + 16, v55) )
        {
          if ( (unsigned int)MiPteHasShadow(v57, v56) )
          {
            v58 = v53;
            if ( !HIBYTE(word_140C4DF48) && (v53 & 1) != 0 )
              v58 = v53 | 0x8000000000000000uLL;
            *(_QWORD *)(v20 + 16) = v58;
            MiWritePteShadow(v20 + 16, v58);
            goto LABEL_121;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            *(_QWORD *)(v20 + 16) = v53;
LABEL_121:
            if ( *(_WORD *)(v20 + 32) )
              goto LABEL_124;
            v43 = 4LL;
            v42 = v20;
            goto LABEL_123;
          }
          if ( (v53 & 1) != 0 )
            v54 = v53 | 0x8000000000000000uLL;
        }
        *(_QWORD *)(v20 + 16) = v54;
        goto LABEL_121;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v12 = v80;
    }
  }
  v59 = a5;
  if ( a5 == 2 )
    return 0LL;
  if ( !v13 )
  {
    if ( !v9 && !a5 && !MiCheckUserVirtualAddress((__int64)(v10 << 25) >> 16, &v84) )
    {
      v60 = v84;
      if ( v84 != 24 )
      {
        MiUpdatePageTableUseCount((__int64)(v10 << 25) >> 16, 1LL);
        v61 = (32LL * (v60 & 0x1F)) | MiSwizzleInvalidPte(0x100000000LL) & 0xFFFFFFFFFFFFFC1FuLL;
        v79 = v61;
        v62 = v61;
        if ( !(unsigned int)MiPteInShadowRange(v10, v63) )
        {
LABEL_140:
          *(_QWORD *)v10 = v62;
          return 0LL;
        }
        if ( (unsigned int)MiPteHasShadow(v65, v64) )
        {
          v66 = v61;
          if ( !HIBYTE(word_140C4DF48) && (v61 & 1) != 0 )
            v66 = v61 | 0x8000000000000000uLL;
          *(_QWORD *)v10 = v66;
          MiWritePteShadow(v10, v66);
          return 0LL;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          if ( (v61 & 1) != 0 )
            v62 = v61 | 0x8000000000000000uLL;
          goto LABEL_140;
        }
LABEL_166:
        *(_QWORD *)v10 = v61;
        return 0LL;
      }
    }
    return 3221226548LL;
  }
  v67 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * Process[1].IdealProcessorPadding[5]);
  if ( v9 )
  {
    if ( a2 == 1 )
    {
      v67 = MiSharedVaToPartition(
              (__int64)&Process[1].ActiveProcessorsPadding[6],
              (__int64)(v10 << 25) >> 16,
              (__int64)v9);
    }
    else if ( (*(_DWORD *)(a1 + 48) & 0x100000) != 0 || (v68 = *(_QWORD *)(a1 + 72)) == 0 )
    {
      v67 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * Process[1].IdealProcessorPadding[5]);
    }
    else
    {
      v67 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * (*(_WORD *)(*(_QWORD *)v68 + 60LL) & 0x3FF));
    }
  }
  if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v14) )
  {
    if ( v59 == 1 )
      return 3221226548LL;
    v73 = MiCapturePageFileInfoInline(&v79, 1LL);
    *a8 = v73;
    if ( !v73 )
      return 0LL;
    *a7 = v67;
    if ( !v9 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
      v9 = (_QWORD *)v10;
    }
    v75 = v79;
    if ( (unsigned int)MiPteInShadowRange(v9, v74) )
    {
      if ( (unsigned int)MiPteHasShadow(v77, v76) )
      {
        if ( !HIBYTE(word_140C4DF48) && (v75 & 1) != 0 )
          v75 |= 0x8000000000000000uLL;
        *v9 = v75;
        MiWritePteShadow(v9, v75);
        return 0LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v75 & 1) != 0 )
      {
        v75 |= 0x8000000000000000uLL;
      }
    }
    *v9 = v75;
    return 0LL;
  }
  if ( v59 == 1 )
  {
    if ( !MI_IS_RESET_PTE(v14) )
      return 3221226548LL;
    MI_CLEAR_RESET_PTE(&v79);
    v61 = v79;
  }
  else
  {
    if ( (v14 & 2) != 0 )
    {
      MiReleasePageFileSpace(v67, v14, 1LL, v69);
      v14 &= ~2uLL;
    }
    v61 = MiUpdatePageFileHighInPte(v14, 1LL);
    v79 = v61;
  }
  if ( v9 )
    v10 = (ULONG_PTR)v9;
  if ( !(unsigned int)MiPteInShadowRange(v10, v70) )
    goto LABEL_166;
  if ( !(unsigned int)MiPteHasShadow(v72, v71) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v61 & 1) != 0 )
      v61 |= 0x8000000000000000uLL;
    goto LABEL_166;
  }
  if ( !HIBYTE(word_140C4DF48) && (v61 & 1) != 0 )
    v61 |= 0x8000000000000000uLL;
  *(_QWORD *)v10 = v61;
  MiWritePteShadow(v10, v61);
  return 0LL;
}
