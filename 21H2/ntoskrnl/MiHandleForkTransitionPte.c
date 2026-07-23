/*
 * XREFs of MiHandleForkTransitionPte @ 0x14055ACA4
 * Callers:
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x14023894C (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14036B164 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiDuplicateCloneLeaf @ 0x14055A474 (MiDuplicateCloneLeaf.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14055ABC4 (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14055B920 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteUselessChildPte @ 0x14055BF20 (MiWriteUselessChildPte.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
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
  __int64 v28; // rdx
  __int64 v29; // rax
  signed __int32 v30; // eax
  __int64 Page; // rax
  _KPROCESS *v32; // rdx
  unsigned __int8 v33; // r14
  __int64 v34; // r13
  LONG *v35; // rdi
  KIRQL v36; // al
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // r8
  int v40; // eax
  bool v41; // zf
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdi
  __int64 v45; // rdi
  unsigned __int64 v46; // rdi
  BOOL v47; // eax
  int v48; // edx
  int v49; // eax
  unsigned __int64 v50; // rdx
  int v51; // edi
  bool v52; // zf
  __int64 v53; // rbx
  _KPROCESS *v54; // rdx
  LONG *SharedVm; // rbx
  unsigned int v56; // [rsp+30h] [rbp-98h]
  unsigned int v57; // [rsp+30h] [rbp-98h]
  int v58; // [rsp+34h] [rbp-94h]
  int v59; // [rsp+38h] [rbp-90h]
  unsigned int v60; // [rsp+40h] [rbp-88h]
  __int64 v61; // [rsp+40h] [rbp-88h]
  __int64 v62; // [rsp+48h] [rbp-80h] BYREF
  __int64 v63; // [rsp+50h] [rbp-78h]
  __int64 v64; // [rsp+58h] [rbp-70h]
  __int128 v65; // [rsp+60h] [rbp-68h] BYREF
  __int64 v66; // [rsp+70h] [rbp-58h]
  __int64 v67; // [rsp+78h] [rbp-50h]

  v12 = a5;
  v13 = (ULONG_PTR)a3;
  v62 = 0LL;
  v65 = 0LL;
  v15 = MiSwizzleInvalidPte((a5 << 16) | 0x400);
  v17 = ZeroPte;
  v18 = v16;
  v66 = v15;
  v19 = v16;
  v21 = *(unsigned __int16 *)(v20 + 1838);
  v67 = ZeroPte;
  v58 = v16;
  v59 = v16;
  v22 = *(_QWORD *)(qword_140C4E688 + 8 * v21);
  v24 = *(unsigned __int16 *)(v23 + 1838);
  v63 = v22;
  v64 = *(_QWORD *)(qword_140C4E688 + 8 * v24);
  if ( v64 == v22 )
  {
    while ( 1 )
    {
LABEL_12:
      v26 = MiLockTransitionLeafPage(v13, 0LL);
      if ( !v26 )
        goto LABEL_22;
      v27 = MI_READ_PTE_LOCK_FREE(v13);
      LODWORD(v28) = 0;
      v29 = (v27 >> 5) & 0x1F;
      v60 = v29;
      if ( !*(_WORD *)(v26 + 32)
        && (v29 & 0xFFFFFFF8) != 0x10
        && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v26 + 16)) )
      {
        break;
      }
      v56 = *(unsigned __int8 *)(v26 + 34) >> 6;
      v61 = a1 + 1664;
      if ( *a8 != -1LL )
      {
        if ( v19 )
        {
          MiReturnCommit(v22, 1LL);
          LODWORD(v28) = 0;
          v19 = 0;
        }
        if ( v18 )
        {
          MiReturnCrossPartitionCloneCharges(v22);
          LODWORD(v28) = 0;
        }
        v18 = v28;
        v53 = 48 * *a8 - 0x58000000000LL;
        MiLockNestedPageAtDpcInline(v53);
        MiFinalizePageAttribute(v53, v56, 1u);
        _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (*(_BYTE *)(v26 + 34) & 0x20) != 0 && (MiFlushTbList(a7, v54), (*(_BYTE *)(v26 + 34) & 8) != 0) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockWorkingSetExclusive(v61, a10);
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
          SharedVm = MiGetSharedVm(v61);
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
      MiInitializePageColorBase(a1 + 1664, v28, (__int64)&v65);
      v30 = _InterlockedExchangeAdd((volatile signed __int32 *)v65, 1u);
      v57 = HIDWORD(v65) | v30 & DWORD2(v65);
      Page = MiGetPage(v64, v57, 0LL);
      *a8 = Page;
      if ( Page == -1 )
      {
        v33 = a10;
        v34 = v64;
        do
        {
          MiFlushTbList(a7, v32);
          MiUnlockWorkingSetExclusive(v61, v33);
          MiWaitForFreePage(v34);
          v35 = MiGetSharedVm(v61);
          v36 = ExAcquireSpinLockExclusive(v35);
          v35[1] = 0;
          v33 = v36;
          MiMakeSystemAddressValid((ULONG_PTR)a3, 0LL, 0, v36, 1);
          v37 = MiGetPage(v34, v57, 0LL);
          *a8 = v37;
        }
        while ( v37 == -1 );
        v15 = v66;
        v17 = v67;
        v22 = v63;
        v18 = v58;
        v19 = v59;
        a10 = v33;
        v12 = a5;
      }
      v13 = (ULONG_PTR)a3;
      if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a3) & 0x401) != 0 )
        goto LABEL_22;
    }
    *(_QWORD *)v12 = v28;
    if ( MiPteInShadowRange(v12) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v40 = v38 + 1;
        if ( HIBYTE(word_140C4E048) != (_BYTE)v38 )
          goto LABEL_36;
        v41 = ((unsigned __int8)v27 & (unsigned __int8)v40) == 0;
      }
      else
      {
        v40 = v38;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_36;
        v41 = (v27 & 1) == 0;
      }
      if ( !v41 )
        v27 |= v39;
    }
    else
    {
      v40 = 0;
    }
LABEL_36:
    *(_QWORD *)v12 = v27;
    if ( v40 )
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
      v42 = *(_QWORD *)(v12 + 16);
    }
    else
    {
      v42 = 0LL;
    }
    *(_QWORD *)(v12 + 16) = v42 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v60 << 59);
    if ( (*(_QWORD *)(v26 + 16) & 2) != 0 )
    {
      v17 = *(_QWORD *)(v26 + 16);
      if ( (*(_BYTE *)(v26 + 34) & 7) == 3 )
      {
        MiUnlinkPageFromList(v26, 0);
        v43 = 1;
      }
      else
      {
        v43 = 0;
      }
      *(_QWORD *)(v26 + 16) &= ~2uLL;
      if ( v43 )
        MiInsertPageInList(v26, 8u);
    }
    *(_QWORD *)(v26 + 8) = v12;
    *(_QWORD *)(v26 + 40) |= 0x8000000000000000uLL;
    MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v26 + 16));
    v44 = *(_QWORD *)(v26 + 40);
    v63 = v44 & 0xFFFFFFFFFLL;
    v62 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)(v26 + 40) = v44 ^ (v44 ^ ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v62) >> 12)) & 0xFFFFFFFFFLL;
    v45 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v62) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    MiLockNestedPageAtDpcInline(v45);
    *(_QWORD *)(v45 + 24) ^= (*(_QWORD *)(v45 + 24) ^ (*(_QWORD *)(v45 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v46 = v15;
    v47 = MiPteInShadowRange((unsigned __int64)a3);
    v48 = 0;
    if ( v47 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v49 = v48 + 1;
        if ( HIBYTE(word_140C4E048) == (_BYTE)v48 && ((unsigned __int8)v15 & (unsigned __int8)v49) != 0 )
          v46 = v15 | 0x8000000000000000uLL;
LABEL_59:
        *a3 = v46;
        if ( v49 )
          MiWritePteShadow((__int64)a3, v46);
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v17 )
        {
          v50 = v17 & 0xFFFFFFFFFFFFFFFBuLL;
          if ( (v17 & 4) == 0 )
            v50 = v17;
          MiReleasePageFileInfo(v22, v50, 1);
        }
        if ( (a9 & 1) != 0 && v60 != 24 )
          v15 |= 8uLL;
        v51 = 0;
        if ( !MiPteInShadowRange((unsigned __int64)a4) )
          goto LABEL_76;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v51 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
            v52 = (v15 & 1) == 0;
            goto LABEL_74;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v52 = (v15 & 1) == 0;
LABEL_74:
          if ( !v52 )
            v15 |= 0x8000000000000000uLL;
        }
LABEL_76:
        *a4 = v15;
        if ( v51 )
          MiWritePteShadow((__int64)a4, v15);
        MiLockAndDecrementShareCount(48 * v63 - 0x58000000000LL, 0);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
        return 2LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v15 & 1) != 0 )
      {
        v46 = v15 | 0x8000000000000000uLL;
      }
    }
    v49 = v48;
    goto LABEL_59;
  }
  if ( (a9 & 1) == 0 )
  {
LABEL_7:
    if ( (unsigned int)MiGetCrossPartitionCloneCharges(v22) )
    {
      v18 = 1;
      v58 = 1;
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
    v59 = 1;
    goto LABEL_7;
  }
  MiWriteUselessChildPte(a4);
  *a12 = 1;
  return 1LL;
}
