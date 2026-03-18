/*
 * XREFs of MiActOnPte @ 0x1402BB6D0
 * Callers:
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 * Callees:
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x140237D20 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetVaAge @ 0x1402471D0 (MiGetVaAge.c)
 *     MiUpdatePfnPriority @ 0x1402501B0 (MiUpdatePfnPriority.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiCheckUserVirtualAddress @ 0x140259610 (MiCheckUserVirtualAddress.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiSharedVaToPartition @ 0x1402B8FC8 (MiSharedVaToPartition.c)
 *     MI_IS_RESET_PTE @ 0x1402BB120 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402BC1EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiUpdatePageTableUseCount @ 0x140312260 (MiUpdatePageTableUseCount.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiLocateCloneAddress @ 0x14033A8E4 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14033CD08 (MiRotatedToFrameBuffer.c)
 *     MiUpdateWsleAge @ 0x14034C4B8 (MiUpdateWsleAge.c)
 *     MI_CLEAR_RESET_PTE @ 0x14034F9EC (MI_CLEAR_RESET_PTE.c)
 *     MiDemoteCombinedPte @ 0x140368FD0 (MiDemoteCombinedPte.c)
 *     MiDiscardTransitionPteEx @ 0x140386594 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        _QWORD *a4,
        int a5,
        __int64 a6,
        ULONG_PTR **a7,
        __int64 *a8)
{
  unsigned int v8; // r12d
  _QWORD *v9; // r14
  unsigned __int64 v10; // r15
  _KPROCESS *Process; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  ULONG_PTR v18; // rsi
  bool v19; // zf
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 updated; // al
  __int64 v26; // r12
  __int64 v27; // r8
  char v28; // cl
  char v29; // dl
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // r15
  __int64 v37; // rcx
  char v38; // al
  char v39; // al
  int v40; // eax
  ULONG_PTR v41; // rcx
  unsigned int v42; // edx
  __int64 v43; // rax
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rdx
  char v51; // al
  __int64 v52; // rax
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rdx
  int v60; // esi
  char v61; // di
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int64 v68; // rdx
  ULONG_PTR *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // [rsp+20h] [rbp-58h] BYREF
  __int64 v82; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v83; // [rsp+30h] [rbp-48h]
  unsigned __int64 *v84; // [rsp+38h] [rbp-40h]
  int v87; // [rsp+98h] [rbp+20h] BYREF

  v8 = 0;
  v87 = 0;
  v9 = a4;
  v10 = a3;
  *a8 = 0LL;
  *a7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v84 = &Process[1].ActiveProcessorsPadding[6];
  v12 = (unsigned __int64)a4;
  if ( !a4 )
    v12 = a3;
  v83 = v12;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = MI_READ_PTE_LOCK_FREE(v12);
      v82 = v13;
      v14 = v13;
      if ( (v13 & 1) == 0 )
        break;
      if ( !v9 )
      {
        v20 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v82);
        if ( ((*(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
          return 3221226548LL;
        v15 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
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
        v81 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v81, v21, v22, v23);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(v10) )
          goto LABEL_30;
        LOBYTE(v16) = v82;
LABEL_33:
        if ( a5 == 2 )
        {
          updated = MiUpdatePfnPriority(v15);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v26 = (__int64)v84;
          if ( updated != 0xFF && !v9 )
            MiUpdateWsleAge(v84, v10, updated);
          if ( (*(_QWORD *)(v15 + 40) & 0x1000000000LL) == 0 )
          {
            v27 = *(_QWORD *)(v15 + 8);
            if ( v27 > 0 && !v9 )
              MiDemoteCombinedPte(v26, v10, v27 | 0x8000000000000000uLL);
          }
          return 0LL;
        }
        v28 = *(_BYTE *)(v15 + 34);
        if ( (v28 & 8) != 0 )
        {
LABEL_30:
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
        v29 = v28 & 0x10;
        if ( a5 == 1 )
        {
          if ( v29 || !v9 && (v16 & 0x42) != 0 )
            v8 = -1073740748;
          if ( !v29 && (*(_DWORD *)(v15 + 16) & 4) == 0 )
            *(_BYTE *)(v15 + 34) = v28 | 0x10;
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
        if ( v29 )
          *(_BYTE *)(v15 + 34) = v28 & 0xEF;
        v30 = MiCapturePageFileInfoInline(v15 + 16, 1LL);
        *a8 = v30;
        if ( v30 )
          *a7 = *(ULONG_PTR **)(qword_140C4E448 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL));
        v31 = MiUpdatePageFileHighInPte(*(_QWORD *)(v15 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
        if ( MiPteInShadowRange(v15 + 16) )
        {
          if ( (unsigned int)MiPteHasShadow(v33, v32, v34, v35) )
          {
            if ( !HIBYTE(word_140C4DE08) && (v31 & 1) != 0 )
              v31 |= 0x8000000000000000uLL;
            *(_QWORD *)(v15 + 16) = v31;
            MiWritePteShadow(v15 + 16, v31);
            goto LABEL_67;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v31 & 1) != 0 )
          {
            v31 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v15 + 16) = v31;
LABEL_67:
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v9 || (v82 & 0x42) == 0 )
          return 0LL;
        MiWriteValidPteNewProtection(v10, v82 & 0xFFFFFFFFFFFFFF9DuLL);
        v36 = (__int64)(v10 << 25) >> 16;
        if ( (unsigned __int8)MiGetVaAge(v37, v36) < 7u )
          MiSetVaAgeList((__int64)v84, v36, 1u, 1u);
        return 3221225505LL;
      }
      v15 = MiLockLeafPage(v9, 0LL);
      v12 = v83;
      if ( v15 )
      {
        v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
        v82 = v16;
        if ( (v16 & 1) != 0 )
          goto LABEL_33;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v12 = v83;
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
    v12 = v83;
    if ( !v19 )
    {
      if ( !v9 || (v82 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9), (v82 & 1) == 0) )
      {
        if ( a5 == 2 )
        {
          MiUpdatePfnPriority(v18);
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 0LL;
        }
        v38 = *(_BYTE *)(v18 + 34);
        if ( (v38 & 7) == 2 )
        {
          if ( a5 != 1 )
          {
            if ( (v38 & 0x28) == 0 )
            {
              v43 = MiCapturePageFileInfoInline(v18 + 16, 1LL);
              *a8 = v43;
              if ( v43 )
                *a7 = *(ULONG_PTR **)(qword_140C4E448 + 8 * ((*(_QWORD *)(v18 + 40) >> 39) & 0x3FFLL));
              v44 = MiUpdatePageFileHighInPte(*(_QWORD *)(v18 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
              v82 = v44;
              v45 = v44;
              if ( MiPteInShadowRange(v18 + 16) )
              {
                if ( (unsigned int)MiPteHasShadow(v47, v46, v48, v49) )
                {
                  v50 = v44;
                  if ( !HIBYTE(word_140C4DE08) && (v44 & 1) != 0 )
                    v50 = v44 | 0x8000000000000000uLL;
                  *(_QWORD *)(v18 + 16) = v50;
                  MiWritePteShadow(v18 + 16, v50);
                  goto LABEL_124;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                {
                  *(_QWORD *)(v18 + 16) = v44;
                  goto LABEL_124;
                }
                if ( (v44 & 1) != 0 )
                  v45 = v44 | 0x8000000000000000uLL;
              }
              *(_QWORD *)(v18 + 16) = v45;
            }
LABEL_124:
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return v8;
          }
          if ( MI_IS_RESET_PTE(*(_QWORD *)(v18 + 16)) )
            MI_CLEAR_RESET_PTE(v18 + 16);
          else
            v8 = -1073740748;
          if ( (*(_DWORD *)(v18 + 16) & 4) != 0 )
            goto LABEL_124;
          v39 = *(_BYTE *)(v18 + 34) | 0x10;
          *(_BYTE *)(v18 + 34) = v39;
          if ( *(_WORD *)(v18 + 32) )
          {
            *(_BYTE *)(v18 + 34) = v39 & 0xF8 | 3;
            goto LABEL_124;
          }
          v40 = MiUnlinkPageFromList(v18, 0);
          v41 = v18;
          if ( !v40 )
          {
            MiDiscardTransitionPteEx(v18, 0LL);
            v8 = -1073740748;
            goto LABEL_124;
          }
          v42 = 8;
LABEL_123:
          MiInsertPageInList(v41, v42);
          goto LABEL_124;
        }
        if ( (v38 & 7) != 3 )
          goto LABEL_124;
        if ( a5 == 1 )
        {
          v8 = -1073740748;
          goto LABEL_124;
        }
        if ( (v38 & 8) != 0 || a5 || (v38 & 0x20) != 0 )
          goto LABEL_124;
        v51 = v38 & 0xEF;
        *(_BYTE *)(v18 + 34) = v51;
        if ( *(_WORD *)(v18 + 32) )
          *(_BYTE *)(v18 + 34) = v51 & 0xF8 | 2;
        else
          MiUnlinkPageFromList(v18, 0);
        v52 = MiCapturePageFileInfoInline(v18 + 16, 1LL);
        *a8 = v52;
        if ( v52 )
          *a7 = *(ULONG_PTR **)(qword_140C4E448 + 8 * ((*(_QWORD *)(v18 + 40) >> 39) & 0x3FFLL));
        v53 = MiUpdatePageFileHighInPte(*(_QWORD *)(v18 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
        v82 = v53;
        v54 = v53;
        if ( MiPteInShadowRange(v18 + 16) )
        {
          if ( (unsigned int)MiPteHasShadow(v56, v55, v57, v58) )
          {
            v59 = v53;
            if ( !HIBYTE(word_140C4DE08) && (v53 & 1) != 0 )
              v59 = v53 | 0x8000000000000000uLL;
            *(_QWORD *)(v18 + 16) = v59;
            MiWritePteShadow(v18 + 16, v59);
            goto LABEL_121;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            *(_QWORD *)(v18 + 16) = v53;
LABEL_121:
            if ( *(_WORD *)(v18 + 32) )
              goto LABEL_124;
            v42 = 4;
            v41 = v18;
            goto LABEL_123;
          }
          if ( (v53 & 1) != 0 )
            v54 = v53 | 0x8000000000000000uLL;
        }
        *(_QWORD *)(v18 + 16) = v54;
        goto LABEL_121;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v12 = v83;
    }
  }
  v60 = a5;
  if ( a5 == 2 )
    return 0LL;
  if ( !v13 )
  {
    if ( !v9 && !a5 && !MiCheckUserVirtualAddress((__int64)(v10 << 25) >> 16, &v87, a1) )
    {
      v61 = v87;
      if ( v87 != 24 )
      {
        MiUpdatePageTableUseCount((__int64)(v10 << 25) >> 16, 1LL);
        v62 = (32LL * (v61 & 0x1F)) | MiSwizzleInvalidPte(0x100000000LL) & 0xFFFFFFFFFFFFFC1FuLL;
        v82 = v62;
        v63 = v62;
        if ( !MiPteInShadowRange(v10) )
        {
LABEL_140:
          *(_QWORD *)v10 = v63;
          return 0LL;
        }
        if ( (unsigned int)MiPteHasShadow(v65, v64, v66, v67) )
        {
          v68 = v62;
          if ( !HIBYTE(word_140C4DE08) && (v62 & 1) != 0 )
            v68 = v62 | 0x8000000000000000uLL;
          *(_QWORD *)v10 = v68;
          MiWritePteShadow(v10, v68);
          return 0LL;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          if ( (v62 & 1) != 0 )
            v63 = v62 | 0x8000000000000000uLL;
          goto LABEL_140;
        }
LABEL_166:
        *(_QWORD *)v10 = v62;
        return 0LL;
      }
    }
    return 3221226548LL;
  }
  v69 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * Process[1].IdealProcessorPadding[5]);
  if ( v9 )
  {
    if ( a2 == 1 )
    {
      v69 = MiSharedVaToPartition(
              (__int64)&Process[1].ActiveProcessorsPadding[6],
              (__int64)(v10 << 25) >> 16,
              (__int64)v9);
    }
    else if ( (*(_DWORD *)(a1 + 48) & 0x100000) != 0 || (v70 = *(_QWORD *)(a1 + 72)) == 0 )
    {
      v69 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * Process[1].IdealProcessorPadding[5]);
    }
    else
    {
      v69 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * (*(_WORD *)(*(_QWORD *)v70 + 60LL) & 0x3FF));
    }
  }
  if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v14) )
  {
    if ( v60 == 1 )
      return 3221226548LL;
    v75 = MiCapturePageFileInfoInline(&v82, 1LL);
    *a8 = v75;
    if ( !v75 )
      return 0LL;
    *a7 = v69;
    if ( !v9 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
      v9 = (_QWORD *)v10;
    }
    v76 = v82;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( (unsigned int)MiPteHasShadow(v78, v77, v79, v80) )
      {
        if ( !HIBYTE(word_140C4DE08) && (v76 & 1) != 0 )
          v76 |= 0x8000000000000000uLL;
        *v9 = v76;
        MiWritePteShadow(v9, v76);
        return 0LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v76 & 1) != 0 )
      {
        v76 |= 0x8000000000000000uLL;
      }
    }
    *v9 = v76;
    return 0LL;
  }
  if ( v60 == 1 )
  {
    if ( !MI_IS_RESET_PTE(v14) )
      return 3221226548LL;
    MI_CLEAR_RESET_PTE(&v82);
    v62 = v82;
  }
  else
  {
    if ( (v14 & 2) != 0 )
    {
      MiReleasePageFileSpace((__int64)v69, v14);
      v14 &= ~2uLL;
    }
    v62 = MiUpdatePageFileHighInPte(v14, 1LL);
    v82 = v62;
  }
  if ( v9 )
    v10 = (unsigned __int64)v9;
  if ( !MiPteInShadowRange(v10) )
    goto LABEL_166;
  if ( !(unsigned int)MiPteHasShadow(v72, v71, v73, v74) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v62 & 1) != 0 )
      v62 |= 0x8000000000000000uLL;
    goto LABEL_166;
  }
  if ( !HIBYTE(word_140C4DE08) && (v62 & 1) != 0 )
    v62 |= 0x8000000000000000uLL;
  *(_QWORD *)v10 = v62;
  MiWritePteShadow(v10, v62);
  return 0LL;
}
