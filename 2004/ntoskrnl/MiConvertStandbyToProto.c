/*
 * XREFs of MiConvertStandbyToProto @ 0x140364CE8
 * Callers:
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiUpdatePfnPriority @ 0x1402501B0 (MiUpdatePfnPriority.c)
 *     MiMakePrototypePteDirect @ 0x140263C40 (MiMakePrototypePteDirect.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x1402AAA70 (MiGetPfnPriority.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402BC1EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsPageOnBadList @ 0x140319D2C (MiIsPageOnBadList.c)
 *     MiCopyPfnEntryEx @ 0x14031C670 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14031CC14 (MiFinalizePageAttribute.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiTryLockLeafPage @ 0x14033AC04 (MiTryLockLeafPage.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14033B0D4 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140356754 (MiUnlockNestedProtoPoolPage.c)
 *     MiRecheckCombineVm @ 0x140365840 (MiRecheckCombineVm.c)
 *     MiComparePages @ 0x1403687A0 (MiComparePages.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x140368D24 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiFillCombinePage @ 0x140368D7C (MiFillCombinePage.c)
 *     MiDiscardTransitionPteEx @ 0x140386594 (MiDiscardTransitionPteEx.c)
 *     MiGetCrossPartitionCombineCharges @ 0x140557A9C (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x140557CAC (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiConvertStandbyToProto(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        ULONG_PTR BugCheckParameter2,
        __int64 a7,
        __int64 a8)
{
  int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r8
  char v12; // si
  __int64 v13; // r9
  __int64 v14; // rax
  ULONG_PTR **v15; // rdx
  ULONG_PTR *v16; // rcx
  __int64 TransitionPte; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 v21; // di
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 *v25; // r10
  _BOOL8 v26; // r9
  unsigned __int64 v27; // r11
  char v28; // si
  bool v29; // zf
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rdi
  __int64 v38; // r8
  unsigned __int64 v39; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r9
  __int64 *v56; // rdi
  __int64 v57; // r8
  __int64 v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  char v63; // [rsp+20h] [rbp-98h]
  char v64; // [rsp+21h] [rbp-97h]
  char v65; // [rsp+22h] [rbp-96h]
  int v66; // [rsp+24h] [rbp-94h]
  __int64 v67; // [rsp+28h] [rbp-90h] BYREF
  __int64 ContainingPageTable; // [rsp+30h] [rbp-88h]
  __int64 v69; // [rsp+38h] [rbp-80h]
  ULONG_PTR *v70; // [rsp+40h] [rbp-78h]
  unsigned __int64 v71; // [rsp+48h] [rbp-70h]
  int v72; // [rsp+50h] [rbp-68h] BYREF
  __int64 v73; // [rsp+58h] [rbp-60h]
  __int64 v74; // [rsp+60h] [rbp-58h]
  __int64 v75; // [rsp+68h] [rbp-50h]
  ULONG_PTR *v76; // [rsp+70h] [rbp-48h]
  int v79; // [rsp+C8h] [rbp+10h]
  __int64 v80; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v81; // [rsp+C8h] [rbp+10h]
  int v84; // [rsp+E0h] [rbp+28h]
  int v85; // [rsp+E0h] [rbp+28h]
  __int64 v86; // [rsp+F8h] [rbp+40h]

  ContainingPageTable = BugCheckParameter2;
  v67 = 0LL;
  v8 = *(_DWORD *)(a5 + 40) & 0x1F;
  v66 = v8;
  v9 = MiMakePrototypePteDirect(a5 + 48) | 0x800;
  v74 = v9;
  v11 = (__int64)(*(_QWORD *)(v10 + 56) << 25) >> 16;
  v73 = v11;
  v63 = 0;
  v12 = 1;
  v64 = 1;
  v14 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(v13 + 174));
  v69 = v14;
  v16 = *v15;
  v70 = v16;
  v76 = v16;
  if ( a8 == -1 )
  {
    v64 = 1;
    if ( v16 != (ULONG_PTR *)v14 )
    {
      v21 = 1;
      v63 = 1;
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v16, 1LL) )
        goto LABEL_15;
      v64 = 0;
    }
    v43 = MiLockProtoPoolPage(a5 + 48, 0LL);
    v47 = v43;
    v75 = v43;
    if ( !v43 )
    {
LABEL_85:
      v21 = v63;
      goto LABEL_15;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      LOBYTE(v44) = 17;
      MiUnlockProtoPoolPage(v43, v44);
      goto LABEL_85;
    }
    if ( a7 == (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
      && v69 == *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL))
      && (unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1)
      && (MiTryLockLeafPage((__int64 *)(a5 + 48), v44, &v67), (v48 = v67) != 0) )
    {
      if ( (*(_BYTE *)(v67 + 35) & 0x40) == 0
        && !MiIsPageOnBadList(v67)
        && v70 == *(ULONG_PTR **)(qword_140C4E448 + 8 * ((*(_QWORD *)(v48 + 40) >> 39) & 0x3FFLL))
        && ((*(_BYTE *)(v48 + 34) & 7) == 6 || (*(_BYTE *)(v48 + 34) & 0x20) == 0) )
      {
        v81 = MiMapPageInHyperSpaceWorker((v48 + 0x58000000000LL) / 48, 0LL, 0x80000000, v46);
        v65 = MiComparePages(v81, v73);
        MiUnmapPageInHyperSpaceWorker(v81, 0x11u, 0x80000000);
        if ( v65 )
        {
          if ( (**(_BYTE **)(a3 + 56) & 1) != 0 )
          {
            if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v66 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockNestedProtoPoolPage(v47, v44, v45, v46);
LABEL_101:
              _InterlockedAnd64((volatile signed __int64 *)(ContainingPageTable + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_85;
            }
            if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockNestedProtoPoolPage(v47, v49, v50, v51);
              MiDiscardTransitionPteEx(BugCheckParameter2, 0LL);
              goto LABEL_101;
            }
            *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
            MiGetPfnPriority(BugCheckParameter2);
            MiUpdatePfnPriority(v48);
            _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockNestedProtoPoolPage(v47, v52, v53, v54);
            if ( !v64 && _InterlockedExchangeAdd64((volatile signed __int64 *)(a5 + 56), 1uLL) )
              MiReturnCrossPartitionCombineCharges(v70, 1LL);
            v86 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
            v56 = (__int64 *)(MiMapPageInHyperSpaceWorker(v86, 0LL, 0x80000000, v55)
                            + (*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF));
            v85 = 0;
            if ( MiPteInShadowRange((unsigned __int64)v56) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v85 = 1;
                if ( !HIBYTE(word_140C4DE08) )
                {
LABEL_112:
                  if ( (v9 & 1) != 0 )
                    v9 |= 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                goto LABEL_112;
              }
            }
            *v56 = v9;
            if ( v85 )
              MiWritePteShadow((__int64)v56, v9, v57);
            MiUnmapPageInHyperSpaceWorker((unsigned __int64)v56, 0x11u, 0x80000000);
            v58 = ContainingPageTable;
            *(_QWORD *)(ContainingPageTable + 24) |= 0x4000000000000000uLL;
            MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
            v59 = 48 * v86 - 0x58000000000LL;
            MiLockNestedPageAtDpcInline(v59, v60, v61, v62);
            MiDecrementShareCount(v59);
            _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_117;
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockNestedProtoPoolPage(v47, v44, v45, v46);
    }
    else
    {
      MiUnlockNestedProtoPoolPage(v47, v44, v45, v46);
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_85;
  }
  v67 = 48 * a8 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(v16, v67, BugCheckParameter2, v11) )
    goto LABEL_14;
  TransitionPte = MiMakeTransitionPte(a8, v8);
  v73 = (a5 + 48) & 0x7FFFFFFFFFFFFFFFLL;
  v71 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a5 + 48);
  if ( v70 != (ULONG_PTR *)v69 )
  {
    if ( (unsigned int)MiGetCrossPartitionCombineCharges(v70, 0LL) )
    {
      v12 = 0;
      v64 = 0;
      goto LABEL_6;
    }
LABEL_14:
    v21 = 0;
LABEL_15:
    if ( !v64 )
      MiReturnCrossPartitionCombineCharges(v70, v21);
    return 0LL;
  }
LABEL_6:
  v72 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v72, v18, v19, v20);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  if ( (**(_BYTE **)(a3 + 56) & 1) == 0
    || (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) > 1u
    || v69 != *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL))
    || a7 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
    || !(unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1)
    || ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v66 )
  {
    goto LABEL_13;
  }
  if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
  {
    MiDiscardTransitionPteEx(BugCheckParameter2, 0LL);
LABEL_13:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_14;
  }
  LOBYTE(v23) = *(_BYTE *)(BugCheckParameter2 + 34);
  v25 = (unsigned __int64 *)(BugCheckParameter2 + 16);
  if ( (v23 & 0x10) == 0 && !IS_PTE_NOT_DEMAND_ZERO(*v25) )
  {
    LOBYTE(v23) = v23 | 0x10;
    *(_BYTE *)(BugCheckParameter2 + 34) = v23;
  }
  v26 = 0LL;
  if ( (*v25 & 2) != 0 )
  {
    if ( v12 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v69, v25) )
      v71 = v27;
    else
      LOBYTE(v26) = 1;
    v28 = 1;
  }
  else
  {
    v29 = v12 == 0;
    v28 = 0;
    if ( v29 )
      v26 = (*v25 & 4) != 0;
  }
  if ( v26 )
  {
    v71 = MiCapturePageFileInfoInline(v25, 1, 1);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
    v25 = (unsigned __int64 *)(BugCheckParameter2 + 16);
  }
  if ( v28 )
    *v25 &= ~2uLL;
  v30 = 48 * ContainingPageTable - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v30, v23, v24, v26);
  *(_QWORD *)(v30 + 24) ^= (*(_QWORD *)(v30 + 24) ^ ((*(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockNestedPageAtDpcInline(v67, 0x3FFFFFFFFFFFFFFFLL, v31, v32);
  MiFinalizePageAttribute(v67, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1);
  MiCopyPfnEntryEx(v67, BugCheckParameter2);
  if ( (unsigned int)MiGetPfnPriority(v33) < 5 )
    *(_BYTE *)(v67 + 35) = *(_BYTE *)(v67 + 35) & 0xF8 | 5;
  v34 = v67;
  *(_QWORD *)(v67 + 8) = v73;
  *(_QWORD *)(v34 + 40) = ContainingPageTable & 0xFFFFFFFFFLL | *(_QWORD *)(v34 + 40) & 0xFFFFFFF000000000uLL | 0x8000000000000000uLL;
  *(_QWORD *)(v34 + 24) &= 0xC000000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY(v34 + 16);
  if ( !v64 )
    *(_QWORD *)(a5 + 56) = 1LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  v79 = 0;
  if ( MiPteInShadowRange(a5 + 48) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v79 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_48;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_48;
    }
    if ( (TransitionPte & 1) != 0 )
      TransitionPte |= 0x8000000000000000uLL;
  }
LABEL_48:
  *(_QWORD *)(a5 + 48) = TransitionPte;
  if ( v79 )
    MiWritePteShadow(a5 + 48, TransitionPte, v35);
  v80 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v37 = (__int64 *)(MiMapPageInHyperSpaceWorker(v80, 0LL, 0x80000000, v36)
                  + (*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF));
  v84 = 0;
  if ( !MiPteInShadowRange((unsigned __int64)v37) )
    goto LABEL_57;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v84 = 1;
    if ( !HIBYTE(word_140C4DE08) )
    {
LABEL_55:
      if ( (v9 & 1) != 0 )
        v9 |= 0x8000000000000000uLL;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    goto LABEL_55;
  }
LABEL_57:
  *v37 = v9;
  if ( v84 )
    MiWritePteShadow((__int64)v37, v9, v38);
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v37, 0x11u, 0x80000000);
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiPfnReferenceCountIsZero(v67, a8);
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v64 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 16) & 4) != 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
      if ( v71 )
        v71 &= ~4uLL;
    }
  }
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v64 )
    goto LABEL_77;
  MiReturnCommit(v69, 1LL);
  v39 = 1LL;
  if ( (ULONG_PTR *)v69 != &MiSystemPartition )
    goto LABEL_74;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_74;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
  {
    do
    {
      v42 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
              CachedResidentAvailable + 1,
              CachedResidentAvailable);
      v29 = (_DWORD)CachedResidentAvailable == v42;
      LODWORD(CachedResidentAvailable) = v42;
      if ( v29 )
        goto LABEL_75;
    }
    while ( v42 != -1 && (unsigned __int64)(v42 + 1LL) <= 0x100 );
  }
  if ( (int)CachedResidentAvailable > 192
    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
  {
    v39 = (int)CachedResidentAvailable - 192 + 1LL;
  }
  if ( v39 )
LABEL_74:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 7168), v39);
LABEL_75:
  if ( v70 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EDB8, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_77:
  MiLockAndDecrementShareCount(48 * v80 - 0x58000000000LL, 0);
  if ( v71 )
    MiReleasePageFileInfo(v69, v71, 1);
LABEL_117:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[13],
      0xFFFFFFFFFFFFFFFFuLL);
  return 1LL;
}
