/*
 * XREFs of MiActOnPte @ 0x1403476D0
 * Callers:
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MiUpdatePageTableUseCount @ 0x14023C700 (MiUpdatePageTableUseCount.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiSharedVaToPartition @ 0x14028EF98 (MiSharedVaToPartition.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiSetVaAgeList @ 0x1402B0AC0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckUserVirtualAddress @ 0x1402B1E10 (MiCheckUserVirtualAddress.c)
 *     MiGetVaAge @ 0x1402CFC10 (MiGetVaAge.c)
 *     MiUpdatePfnPriority @ 0x1402D3D44 (MiUpdatePfnPriority.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiRotatedToFrameBuffer @ 0x14030F8A8 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUpdateWsleAge @ 0x14031D1EC (MiUpdateWsleAge.c)
 *     MI_CLEAR_RESET_PTE @ 0x14032060C (MI_CLEAR_RESET_PTE.c)
 *     MiLocateCloneAddress @ 0x140344118 (MiLocateCloneAddress.c)
 *     MI_IS_RESET_PTE @ 0x140348D80 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140349584 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     MiReleasePageFileSpace @ 0x14034D3F4 (MiReleasePageFileSpace.c)
 *     MiDemoteCombinedPte @ 0x14036AFB0 (MiDemoteCombinedPte.c)
 *     MiDiscardTransitionPteEx @ 0x140388734 (MiDiscardTransitionPteEx.c)
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
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  ULONG_PTR v18; // rsi
  bool v19; // zf
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char updated; // al
  __int64 v26; // r12
  __int64 v27; // r8
  char v28; // cl
  char v29; // dl
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // r8
  unsigned __int64 v33; // r15
  __int64 v34; // rcx
  char v35; // al
  char v36; // al
  int v37; // eax
  ULONG_PTR v38; // rcx
  unsigned int v39; // edx
  __int64 v40; // rax
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rdi
  __int64 v43; // r8
  unsigned __int64 v44; // rdx
  char v45; // al
  __int64 v46; // rax
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rdi
  __int64 v49; // r8
  unsigned __int64 v50; // rdx
  int v51; // esi
  char v52; // di
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rdi
  __int64 v55; // r8
  unsigned __int64 v56; // rdx
  ULONG_PTR *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // r8
  int v63; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v64; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v65; // [rsp+30h] [rbp-48h]
  unsigned __int64 *v66; // [rsp+38h] [rbp-40h]
  int v69; // [rsp+98h] [rbp+20h] BYREF

  v8 = 0;
  v69 = 0;
  v9 = a4;
  v10 = a3;
  *a8 = 0LL;
  *a7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v66 = &Process[1].ActiveProcessorsPadding[6];
  v12 = (unsigned __int64)a4;
  if ( !a4 )
    v12 = a3;
  v65 = v12;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = MI_READ_PTE_LOCK_FREE(v12);
      v64 = v13;
      v14 = v13;
      if ( (v13 & 1) == 0 )
        break;
      if ( !v9 )
      {
        v20 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v64);
        if ( ((*(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
          return 3221226548LL;
        v15 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( (*(_QWORD *)(v15 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v15 + 8) <= 0 )
        {
          if ( MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) )
            return 3221226548LL;
        }
        else
        {
          if ( a5 == 1 )
            return 3221226548LL;
          if ( !a5 )
            return 274LL;
        }
        v63 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v63, v21, v22, v23);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(v10) )
          goto LABEL_30;
        LOBYTE(v16) = v64;
LABEL_33:
        if ( a5 == 2 )
        {
          updated = MiUpdatePfnPriority(v15);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v26 = (__int64)v66;
          if ( updated != -1 && !v9 )
            MiUpdateWsleAge((__int64)v66, (_QWORD *)v10, updated);
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
        if ( v29 )
          *(_BYTE *)(v15 + 34) = v28 & 0xEF;
        v30 = MiCapturePageFileInfoInline((unsigned __int64 *)(v15 + 16), 1, 1);
        *a8 = v30;
        if ( v30 )
          *a7 = *(ULONG_PTR **)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL));
        v31 = MiUpdatePageFileHighInPte(*(_QWORD *)(v15 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
        if ( MiPteInShadowRange(v15 + 16) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4DE88) && (v31 & 1) != 0 )
              v31 |= 0x8000000000000000uLL;
            *(_QWORD *)(v15 + 16) = v31;
            MiWritePteShadow(v15 + 16, v31, v32);
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
        if ( v9 || (v64 & 0x42) == 0 )
          return 0LL;
        MiWriteValidPteNewProtection(v10, v64 & 0xFFFFFFFFFFFFFF9DuLL);
        v33 = (__int64)(v10 << 25) >> 16;
        if ( (unsigned __int8)MiGetVaAge(v34, v33) < 7u )
          MiSetVaAgeList((__int64)v66, v33, 1u, 1u);
        return 3221225505LL;
      }
      v15 = MiLockLeafPage(v9, 0LL);
      v12 = v65;
      if ( v15 )
      {
        v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
        v64 = v16;
        if ( (v16 & 1) != 0 )
          goto LABEL_33;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v12 = v65;
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
    v12 = v65;
    if ( !v19 )
    {
      if ( !v9 || (v64 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9), (v64 & 1) == 0) )
      {
        if ( a5 == 2 )
        {
          MiUpdatePfnPriority(v18);
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 0LL;
        }
        v35 = *(_BYTE *)(v18 + 34);
        if ( (v35 & 7) == 2 )
        {
          if ( a5 != 1 )
          {
            if ( (v35 & 0x28) == 0 )
            {
              v40 = MiCapturePageFileInfoInline((unsigned __int64 *)(v18 + 16), 1, 1);
              *a8 = v40;
              if ( v40 )
                *a7 = *(ULONG_PTR **)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v18 + 40) >> 39) & 0x3FFLL));
              v41 = MiUpdatePageFileHighInPte(*(_QWORD *)(v18 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
              v64 = v41;
              v42 = v41;
              if ( MiPteInShadowRange(v18 + 16) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v44 = v41;
                  if ( !HIBYTE(word_140C4DE88) && (v41 & 1) != 0 )
                    v44 = v41 | 0x8000000000000000uLL;
                  *(_QWORD *)(v18 + 16) = v44;
                  MiWritePteShadow(v18 + 16, v44, v43);
                  goto LABEL_124;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                {
                  *(_QWORD *)(v18 + 16) = v41;
                  goto LABEL_124;
                }
                if ( (v41 & 1) != 0 )
                  v42 = v41 | 0x8000000000000000uLL;
              }
              *(_QWORD *)(v18 + 16) = v42;
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
          v36 = *(_BYTE *)(v18 + 34) | 0x10;
          *(_BYTE *)(v18 + 34) = v36;
          if ( *(_WORD *)(v18 + 32) )
          {
            *(_BYTE *)(v18 + 34) = v36 & 0xF8 | 3;
            goto LABEL_124;
          }
          v37 = MiUnlinkPageFromList(v18, 0);
          v38 = v18;
          if ( !v37 )
          {
            MiDiscardTransitionPteEx(v18, 0LL);
            v8 = -1073740748;
            goto LABEL_124;
          }
          v39 = 8;
LABEL_123:
          MiInsertPageInList(v38, v39);
          goto LABEL_124;
        }
        if ( (v35 & 7) != 3 )
          goto LABEL_124;
        if ( a5 == 1 )
        {
          v8 = -1073740748;
          goto LABEL_124;
        }
        if ( (v35 & 8) != 0 || a5 || (v35 & 0x20) != 0 )
          goto LABEL_124;
        v45 = v35 & 0xEF;
        *(_BYTE *)(v18 + 34) = v45;
        if ( *(_WORD *)(v18 + 32) )
          *(_BYTE *)(v18 + 34) = v45 & 0xF8 | 2;
        else
          MiUnlinkPageFromList(v18, 0);
        v46 = MiCapturePageFileInfoInline((unsigned __int64 *)(v18 + 16), 1, 1);
        *a8 = v46;
        if ( v46 )
          *a7 = *(ULONG_PTR **)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v18 + 40) >> 39) & 0x3FFLL));
        v47 = MiUpdatePageFileHighInPte(*(_QWORD *)(v18 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
        v64 = v47;
        v48 = v47;
        if ( MiPteInShadowRange(v18 + 16) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v50 = v47;
            if ( !HIBYTE(word_140C4DE88) && (v47 & 1) != 0 )
              v50 = v47 | 0x8000000000000000uLL;
            *(_QWORD *)(v18 + 16) = v50;
            MiWritePteShadow(v18 + 16, v50, v49);
            goto LABEL_121;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            *(_QWORD *)(v18 + 16) = v47;
LABEL_121:
            if ( *(_WORD *)(v18 + 32) )
              goto LABEL_124;
            v39 = 4;
            v38 = v18;
            goto LABEL_123;
          }
          if ( (v47 & 1) != 0 )
            v48 = v47 | 0x8000000000000000uLL;
        }
        *(_QWORD *)(v18 + 16) = v48;
        goto LABEL_121;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v12 = v65;
    }
  }
  v51 = a5;
  if ( a5 == 2 )
    return 0LL;
  if ( !v13 )
  {
    if ( !v9 && !a5 && !MiCheckUserVirtualAddress((__int64)(v10 << 25) >> 16, &v69, a1) )
    {
      v52 = v69;
      if ( v69 != 24 )
      {
        MiUpdatePageTableUseCount((__int64)(v10 << 25) >> 16, 1LL);
        v53 = (32LL * (v52 & 0x1F)) | MiSwizzleInvalidPte(0x100000000LL) & 0xFFFFFFFFFFFFFC1FuLL;
        v64 = v53;
        v54 = v53;
        if ( !MiPteInShadowRange(v10) )
        {
LABEL_140:
          *(_QWORD *)v10 = v54;
          return 0LL;
        }
        if ( (unsigned int)MiPteHasShadow() )
        {
          v56 = v53;
          if ( !HIBYTE(word_140C4DE88) && (v53 & 1) != 0 )
            v56 = v53 | 0x8000000000000000uLL;
          *(_QWORD *)v10 = v56;
          MiWritePteShadow(v10, v56, v55);
          return 0LL;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          if ( (v53 & 1) != 0 )
            v54 = v53 | 0x8000000000000000uLL;
          goto LABEL_140;
        }
LABEL_166:
        *(_QWORD *)v10 = v53;
        return 0LL;
      }
    }
    return 3221226548LL;
  }
  v57 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * Process[1].IdealProcessorPadding[5]);
  if ( v9 )
  {
    if ( a2 == 1 )
    {
      v57 = MiSharedVaToPartition(
              (__int64)&Process[1].ActiveProcessorsPadding[6],
              (__int64)(v10 << 25) >> 16,
              (__int64)v9);
    }
    else if ( (*(_DWORD *)(a1 + 48) & 0x100000) != 0 || (v58 = *(_QWORD *)(a1 + 72)) == 0 )
    {
      v57 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * Process[1].IdealProcessorPadding[5]);
    }
    else
    {
      v57 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * (*(_WORD *)(*(_QWORD *)v58 + 60LL) & 0x3FF));
    }
  }
  if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v14) )
  {
    if ( v51 == 1 )
      return 3221226548LL;
    v60 = MiCapturePageFileInfoInline(&v64, 1, 0);
    *a8 = v60;
    if ( !v60 )
      return 0LL;
    *a7 = v57;
    if ( !v9 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
      v9 = (_QWORD *)v10;
    }
    v61 = v64;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4DE88) && (v61 & 1) != 0 )
          v61 |= 0x8000000000000000uLL;
        *v9 = v61;
        MiWritePteShadow((__int64)v9, v61, v62);
        return 0LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v61 & 1) != 0 )
      {
        v61 |= 0x8000000000000000uLL;
      }
    }
    *v9 = v61;
    return 0LL;
  }
  if ( v51 == 1 )
  {
    if ( !(unsigned int)MI_IS_RESET_PTE(v14) )
      return 3221226548LL;
    MI_CLEAR_RESET_PTE((__int64 *)&v64);
    v53 = v64;
  }
  else
  {
    if ( (v14 & 2) != 0 )
    {
      MiReleasePageFileSpace(v57, v14, 1LL);
      v14 &= ~2uLL;
    }
    v53 = MiUpdatePageFileHighInPte(v14, 1LL);
    v64 = v53;
  }
  if ( v9 )
    v10 = (unsigned __int64)v9;
  if ( !MiPteInShadowRange(v10) )
    goto LABEL_166;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v53 & 1) != 0 )
      v53 |= 0x8000000000000000uLL;
    goto LABEL_166;
  }
  if ( !HIBYTE(word_140C4DE88) && (v53 & 1) != 0 )
    v53 |= 0x8000000000000000uLL;
  *(_QWORD *)v10 = v53;
  MiWritePteShadow(v10, v53, v59);
  return 0LL;
}
