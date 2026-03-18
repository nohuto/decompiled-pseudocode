/*
 * XREFs of MiHandleForkTransitionPte @ 0x140554F74
 * Callers:
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140308C48 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiFinalizePageAttribute @ 0x14034BF54 (MiFinalizePageAttribute.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x140368364 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiDuplicateCloneLeaf @ 0x140554744 (MiDuplicateCloneLeaf.c)
 *     MiGetCrossPartitionCloneCharges @ 0x140554E94 (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x140555BF0 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteUselessChildPte @ 0x1405561F0 (MiWriteUselessChildPte.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        unsigned __int8 a10,
        _QWORD *a11,
        _DWORD *a12)
{
  __int64 v12; // r14
  ULONG_PTR v13; // rdi
  __int64 v15; // rbx
  unsigned int v16; // r9d
  __int64 v17; // rsi
  unsigned int v18; // r12d
  int v19; // r13d
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rax
  ULONG_PTR v26; // rbp
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rax
  signed __int32 v32; // eax
  __int64 Page; // rax
  _KPROCESS *v34; // rdx
  unsigned __int8 v35; // r14
  __int64 v36; // r13
  LONG *v37; // rdi
  KIRQL v38; // al
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // r8
  int v42; // eax
  bool v43; // zf
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rdi
  BOOL v52; // eax
  int v53; // edx
  int v54; // eax
  unsigned __int64 v55; // rdx
  int v56; // edi
  __int64 v57; // r8
  _DWORD *v58; // r9
  bool v59; // zf
  __int64 v60; // rbx
  _KPROCESS *v61; // rdx
  LONG *SharedVm; // rbx
  unsigned int v63; // [rsp+30h] [rbp-98h]
  unsigned int v64; // [rsp+30h] [rbp-98h]
  int v65; // [rsp+34h] [rbp-94h]
  int v66; // [rsp+38h] [rbp-90h]
  unsigned int v67; // [rsp+40h] [rbp-88h]
  __int64 v68; // [rsp+40h] [rbp-88h]
  __int64 v69; // [rsp+48h] [rbp-80h] BYREF
  __int64 v70; // [rsp+50h] [rbp-78h]
  __int64 v71; // [rsp+58h] [rbp-70h]
  __int128 v72; // [rsp+60h] [rbp-68h] BYREF
  __int64 v73; // [rsp+70h] [rbp-58h]
  __int64 v74; // [rsp+78h] [rbp-50h]

  v12 = a5;
  v13 = (ULONG_PTR)a3;
  v69 = 0LL;
  v72 = 0LL;
  v15 = MiSwizzleInvalidPte((a5 << 16) | 0x400);
  v17 = ZeroPte;
  v18 = v16;
  v73 = v15;
  v19 = v16;
  v21 = *(unsigned __int16 *)(v20 + 1838);
  v74 = ZeroPte;
  v65 = v16;
  v66 = v16;
  v22 = *(_QWORD *)(qword_140C4E588 + 8 * v21);
  v24 = *(unsigned __int16 *)(v23 + 1838);
  v70 = v22;
  v71 = *(_QWORD *)(qword_140C4E588 + 8 * v24);
  if ( v71 == v22 )
  {
    while ( 1 )
    {
LABEL_12:
      v26 = MiLockTransitionLeafPage(v13, 0LL);
      if ( !v26 )
        goto LABEL_22;
      v27 = MI_READ_PTE_LOCK_FREE(v13);
      v30 = 0LL;
      v31 = (v27 >> 5) & 0x1F;
      v67 = v31;
      if ( !*(_WORD *)(v26 + 32)
        && (v31 & 0xFFFFFFF8) != 0x10
        && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v26 + 16)) )
      {
        break;
      }
      v63 = *(unsigned __int8 *)(v26 + 34) >> 6;
      v68 = a1 + 1664;
      if ( *a8 != -1LL )
      {
        if ( v19 )
        {
          MiReturnCommit(v22, 1LL);
          v30 = 0LL;
          v19 = 0;
        }
        if ( v18 )
        {
          MiReturnCrossPartitionCloneCharges(v22);
          v30 = 0LL;
        }
        v18 = v30;
        v60 = 48 * *a8 - 0x58000000000LL;
        MiLockNestedPageAtDpcInline(v60, v30, v28, v29);
        MiFinalizePageAttribute(v60, v63, 1);
        _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (*(_BYTE *)(v26 + 34) & 0x20) != 0 && (MiFlushTbList(a7, v61), (*(_BYTE *)(v26 + 34) & 8) != 0) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockWorkingSetExclusive(v68, a10);
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
          SharedVm = MiGetSharedVm(v68);
          ExAcquireSpinLockExclusive(SharedVm);
          SharedVm[1] = 0;
        }
        else if ( (unsigned int)MiDuplicateCloneLeaf((unsigned __int64)a3, a4, *a8, a10, 2u) )
        {
          *a8 = -1LL;
          ++*a6;
          return 1LL;
        }
LABEL_22:
        if ( v19 )
          MiReturnCommit(v22, 1LL);
        if ( v18 )
          MiReturnCrossPartitionCloneCharges(v22);
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInitializePageColorBase(a1 + 1664, v30, (__int64)&v72);
      v32 = _InterlockedExchangeAdd((volatile signed __int32 *)v72, 1u);
      v64 = HIDWORD(v72) | v32 & DWORD2(v72);
      Page = MiGetPage(v71, v64, 0LL);
      *a8 = Page;
      if ( Page == -1 )
      {
        v35 = a10;
        v36 = v71;
        do
        {
          MiFlushTbList(a7, v34);
          MiUnlockWorkingSetExclusive(v68, v35);
          MiWaitForFreePage(v36);
          v37 = MiGetSharedVm(v68);
          v38 = ExAcquireSpinLockExclusive(v37);
          v37[1] = 0;
          v35 = v38;
          MiMakeSystemAddressValid((ULONG_PTR)a3, 0LL, 0, v38, 1);
          v39 = MiGetPage(v36, v64, 0LL);
          *a8 = v39;
        }
        while ( v39 == -1 );
        v15 = v73;
        v17 = v74;
        v22 = v70;
        v18 = v65;
        v19 = v66;
        a10 = v35;
        v12 = a5;
      }
      v13 = (ULONG_PTR)a3;
      if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a3) & 0x401) != 0 )
        goto LABEL_22;
    }
    *(_QWORD *)v12 = v30;
    if ( MiPteInShadowRange(v12) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v42 = v40 + 1;
        if ( HIBYTE(word_140C4DF48) != (_BYTE)v40 )
          goto LABEL_36;
        v43 = ((unsigned __int8)v27 & (unsigned __int8)v42) == 0;
      }
      else
      {
        v42 = v40;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_36;
        v43 = (v27 & 1) == 0;
      }
      if ( !v43 )
        v27 |= v41;
    }
    else
    {
      v42 = 0;
    }
LABEL_36:
    *(_QWORD *)v12 = v27;
    if ( v42 )
      MiWritePteShadow(v12, v27);
    MI_MAKE_PROTECT_WRITE_COPY((__int64 *)v12);
    *(_QWORD *)(v12 + 8) = v18;
    *(_QWORD *)(v12 + 24) = 2LL;
    if ( (a9 & 1) != 0 )
    {
      *(_QWORD *)(v12 + 16) = 1LL;
      if ( v19 )
        ++*a11;
      else
        ++a11[1];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 7624), 1uLL);
      v44 = *(_QWORD *)(v12 + 16);
    }
    else
    {
      v44 = 0LL;
    }
    *(_QWORD *)(v12 + 16) = v44 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v67 << 59);
    if ( (*(_QWORD *)(v26 + 16) & 2) != 0 )
    {
      v17 = *(_QWORD *)(v26 + 16);
      if ( (*(_BYTE *)(v26 + 34) & 7) == 3 )
      {
        MiUnlinkPageFromList(v26, 0);
        v45 = 1;
      }
      else
      {
        v45 = 0;
      }
      *(_QWORD *)(v26 + 16) &= ~2uLL;
      if ( v45 )
        MiInsertPageInList(v26, 8u);
    }
    *(_QWORD *)(v26 + 8) = v12;
    *(_QWORD *)(v26 + 40) |= 0x8000000000000000uLL;
    MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v26 + 16));
    v46 = *(_QWORD *)(v26 + 40);
    v70 = v46 & 0xFFFFFFFFFLL;
    v69 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)(v26 + 40) = v46 ^ (v46 ^ ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v69) >> 12)) & 0xFFFFFFFFFLL;
    v47 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v69) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    MiLockNestedPageAtDpcInline(v47, v48, v49, v50);
    *(_QWORD *)(v47 + 24) ^= (*(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v51 = v15;
    v52 = MiPteInShadowRange((unsigned __int64)a3);
    v53 = 0;
    if ( v52 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v54 = v53 + 1;
        if ( HIBYTE(word_140C4DF48) == (_BYTE)v53 && ((unsigned __int8)v15 & (unsigned __int8)v54) != 0 )
          v51 = v15 | 0x8000000000000000uLL;
LABEL_59:
        *a3 = v51;
        if ( v54 )
          MiWritePteShadow((__int64)a3, v51);
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v17 )
        {
          v55 = v17 & 0xFFFFFFFFFFFFFFFBuLL;
          if ( (v17 & 4) == 0 )
            v55 = v17;
          MiReleasePageFileInfo(v22, v55, 1);
        }
        if ( (a9 & 1) != 0 && v67 != 24 )
          v15 |= 8uLL;
        v56 = 0;
        if ( !MiPteInShadowRange((unsigned __int64)a4) )
          goto LABEL_76;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v56 = 1;
          if ( !HIBYTE(word_140C4DF48) )
          {
            v59 = (v15 & 1) == 0;
            goto LABEL_74;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v59 = (v15 & 1) == 0;
LABEL_74:
          if ( !v59 )
            v15 |= 0x8000000000000000uLL;
        }
LABEL_76:
        *a4 = v15;
        if ( v56 )
          MiWritePteShadow((__int64)a4, v15);
        MiLockAndDecrementShareCount(48 * v70 - 0x58000000000LL, 0LL, v57, v58);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
        return 2LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v15 & 1) != 0 )
      {
        v51 = v15 | 0x8000000000000000uLL;
      }
    }
    v54 = v53;
    goto LABEL_59;
  }
  if ( (a9 & 1) == 0 )
  {
LABEL_7:
    if ( (unsigned int)MiGetCrossPartitionCloneCharges(v22) )
    {
      v18 = 1;
      v65 = 1;
      goto LABEL_12;
    }
    MiWriteUselessChildPte(a4);
    *a12 = 1;
    if ( v19 )
      MiReturnCommit(v22, 1LL);
    return 1LL;
  }
  if ( (unsigned int)MiChargeCommit(v22, v16 + 1, 0) )
  {
    v19 = 1;
    v66 = 1;
    goto LABEL_7;
  }
  MiWriteUselessChildPte(a4);
  *a12 = 1;
  return 1LL;
}
