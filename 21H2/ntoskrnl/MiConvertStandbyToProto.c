/*
 * XREFs of MiConvertStandbyToProto @ 0x140367128
 * Callers:
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14022AE80 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1402469DC (MiUnlockNestedProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPfnEntryEx @ 0x14025B9D0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     MiUpdatePfnPriority @ 0x14025ED44 (MiUpdatePfnPriority.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiMakePrototypePteDirect @ 0x140307A60 (MiMakePrototypePteDirect.c)
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 *     MiTryLockLeafPage @ 0x14030E6C8 (MiTryLockLeafPage.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiRecheckCombineVm @ 0x140367C80 (MiRecheckCombineVm.c)
 *     MiComparePages @ 0x14036ABE0 (MiComparePages.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14036B164 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiFillCombinePage @ 0x14036B1BC (MiFillCombinePage.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055D17C (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055D38C (MiReturnCrossPartitionCombineCharges.c)
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
  unsigned __int64 *v23; // r10
  char v24; // dl
  bool v25; // r9
  unsigned __int64 v26; // r11
  char v27; // si
  bool v28; // zf
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 *v32; // rdi
  unsigned __int64 v33; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v36; // eax
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 *v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rbx
  char v44; // [rsp+20h] [rbp-98h]
  char v45; // [rsp+21h] [rbp-97h]
  char v46; // [rsp+22h] [rbp-96h]
  int v47; // [rsp+24h] [rbp-94h]
  __int64 v48; // [rsp+28h] [rbp-90h] BYREF
  __int64 ContainingPageTable; // [rsp+30h] [rbp-88h]
  __int64 v50; // [rsp+38h] [rbp-80h]
  ULONG_PTR *v51; // [rsp+40h] [rbp-78h]
  unsigned __int64 v52; // [rsp+48h] [rbp-70h]
  int v53; // [rsp+50h] [rbp-68h] BYREF
  __int64 v54; // [rsp+58h] [rbp-60h]
  __int64 v55; // [rsp+60h] [rbp-58h]
  __int64 v56; // [rsp+68h] [rbp-50h]
  ULONG_PTR *v57; // [rsp+70h] [rbp-48h]
  int v60; // [rsp+C8h] [rbp+10h]
  __int64 v61; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v62; // [rsp+C8h] [rbp+10h]
  int v65; // [rsp+E0h] [rbp+28h]
  int v66; // [rsp+E0h] [rbp+28h]
  __int64 v67; // [rsp+F8h] [rbp+40h]

  ContainingPageTable = BugCheckParameter2;
  v48 = 0LL;
  v8 = *(_DWORD *)(a5 + 40) & 0x1F;
  v47 = v8;
  v9 = MiMakePrototypePteDirect(a5 + 48) | 0x800;
  v55 = v9;
  v11 = (__int64)(*(_QWORD *)(v10 + 56) << 25) >> 16;
  v54 = v11;
  v44 = 0;
  v12 = 1;
  v45 = 1;
  v14 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(v13 + 174));
  v50 = v14;
  v16 = *v15;
  v51 = v16;
  v57 = v16;
  if ( a8 == -1 )
  {
    v45 = 1;
    if ( v16 != (ULONG_PTR *)v14 )
    {
      v21 = 1;
      v44 = 1;
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v16, 1LL) )
        goto LABEL_15;
      v45 = 0;
    }
    v37 = MiLockProtoPoolPage(a5 + 48, 0LL);
    v38 = v37;
    v56 = v37;
    if ( !v37 )
    {
LABEL_85:
      v21 = v44;
      goto LABEL_15;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      MiUnlockProtoPoolPage(v37, 0x11u);
      goto LABEL_85;
    }
    if ( a7 == (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
      && v50 == *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL))
      && (unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1)
      && (MiTryLockLeafPage((__int64 *)(a5 + 48), v39, &v48), (v40 = v48) != 0) )
    {
      if ( (*(_BYTE *)(v48 + 35) & 0x40) == 0
        && !MiIsPageOnBadList(v48)
        && v51 == *(ULONG_PTR **)(qword_140C4E688 + 8 * ((*(_QWORD *)(v40 + 40) >> 39) & 0x3FFLL))
        && ((*(_BYTE *)(v40 + 34) & 7) == 6 || (*(_BYTE *)(v40 + 34) & 0x20) == 0) )
      {
        v62 = MiMapPageInHyperSpaceWorker((v40 + 0x58000000000LL) / 48, 0LL, 0x80000000);
        v46 = MiComparePages(v62, v54);
        MiUnmapPageInHyperSpaceWorker(v62, 0x11u, 0x80000000);
        if ( v46 )
        {
          if ( (**(_BYTE **)(a3 + 56) & 1) != 0 )
          {
            if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v47 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockNestedProtoPoolPage(v38);
LABEL_101:
              _InterlockedAnd64((volatile signed __int64 *)(ContainingPageTable + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_85;
            }
            if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockNestedProtoPoolPage(v38);
              MiDiscardTransitionPteEx(BugCheckParameter2, 0LL);
              goto LABEL_101;
            }
            *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
            MiGetPfnPriority(BugCheckParameter2);
            MiUpdatePfnPriority(v40);
            _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockNestedProtoPoolPage(v38);
            if ( !v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)(a5 + 56), 1uLL) )
              MiReturnCrossPartitionCombineCharges(v51, 1LL);
            v67 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
            v41 = (__int64 *)(MiMapPageInHyperSpaceWorker(v67, 0LL, 0x80000000)
                            + (*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF));
            v66 = 0;
            if ( MiPteInShadowRange((unsigned __int64)v41) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v66 = 1;
                if ( !HIBYTE(word_140C4E048) )
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
            *v41 = v9;
            if ( v66 )
              MiWritePteShadow((__int64)v41, v9);
            MiUnmapPageInHyperSpaceWorker((unsigned __int64)v41, 0x11u, 0x80000000);
            v42 = ContainingPageTable;
            *(_QWORD *)(ContainingPageTable + 24) |= 0x4000000000000000uLL;
            MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
            v43 = 48 * v67 - 0x58000000000LL;
            MiLockNestedPageAtDpcInline(v43);
            MiDecrementShareCount(v43);
            _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_117;
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockNestedProtoPoolPage(v38);
    }
    else
    {
      MiUnlockNestedProtoPoolPage(v38);
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_85;
  }
  v48 = 48 * a8 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(v16, v48, BugCheckParameter2, v11) )
    goto LABEL_14;
  TransitionPte = MiMakeTransitionPte(a8, v8);
  v54 = (a5 + 48) & 0x7FFFFFFFFFFFFFFFLL;
  v52 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a5 + 48);
  if ( v51 != (ULONG_PTR *)v50 )
  {
    if ( (unsigned int)MiGetCrossPartitionCombineCharges(v51, 0LL) )
    {
      v12 = 0;
      v45 = 0;
      goto LABEL_6;
    }
LABEL_14:
    v21 = 0;
LABEL_15:
    if ( !v45 )
      MiReturnCrossPartitionCombineCharges(v51, v21);
    return 0LL;
  }
LABEL_6:
  v53 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v53, v18, v19, v20);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  if ( (**(_BYTE **)(a3 + 56) & 1) == 0
    || (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) > 1u
    || v50 != *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL))
    || a7 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
    || !(unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1)
    || ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v47 )
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
  v23 = (unsigned __int64 *)(BugCheckParameter2 + 16);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0 && !IS_PTE_NOT_DEMAND_ZERO(*v23) )
    *(_BYTE *)(BugCheckParameter2 + 34) = v24 | 0x10;
  v25 = 0;
  if ( (*v23 & 2) != 0 )
  {
    if ( v12 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v50, v23) )
      v52 = v26;
    else
      v25 = 1;
    v27 = 1;
  }
  else
  {
    v28 = v12 == 0;
    v27 = 0;
    if ( v28 )
      v25 = (*v23 & 4) != 0;
  }
  if ( v25 )
  {
    v52 = MiCapturePageFileInfoInline(v23, 1, 1);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
    v23 = (unsigned __int64 *)(BugCheckParameter2 + 16);
  }
  if ( v27 )
    *v23 &= ~2uLL;
  v29 = 48 * ContainingPageTable - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v29);
  *(_QWORD *)(v29 + 24) ^= (*(_QWORD *)(v29 + 24) ^ ((*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockNestedPageAtDpcInline(v48);
  MiFinalizePageAttribute(v48, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1u);
  MiCopyPfnEntryEx(v48, BugCheckParameter2);
  if ( (unsigned int)MiGetPfnPriority(v30) < 5 )
    *(_BYTE *)(v48 + 35) = *(_BYTE *)(v48 + 35) & 0xF8 | 5;
  v31 = v48;
  *(_QWORD *)(v48 + 8) = v54;
  *(_QWORD *)(v31 + 40) = ContainingPageTable & 0xFFFFFFFFFLL | *(_QWORD *)(v31 + 40) & 0xFFFFFFF000000000uLL | 0x8000000000000000uLL;
  *(_QWORD *)(v31 + 24) &= 0xC000000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY(v31 + 16);
  if ( !v45 )
    *(_QWORD *)(a5 + 56) = 1LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  v60 = 0;
  if ( MiPteInShadowRange(a5 + 48) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v60 = 1;
      if ( HIBYTE(word_140C4E048) )
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
  if ( v60 )
    MiWritePteShadow(a5 + 48, TransitionPte);
  v61 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v32 = (__int64 *)(MiMapPageInHyperSpaceWorker(v61, 0LL, 0x80000000) + (*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF));
  v65 = 0;
  if ( !MiPteInShadowRange((unsigned __int64)v32) )
    goto LABEL_57;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v65 = 1;
    if ( !HIBYTE(word_140C4E048) )
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
  *v32 = v9;
  if ( v65 )
    MiWritePteShadow((__int64)v32, v9);
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v32, 0x11u, 0x80000000);
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiPfnReferenceCountIsZero(v48, a8);
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v45 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 16) & 4) != 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
      if ( v52 )
        v52 &= ~4uLL;
    }
  }
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v45 )
    goto LABEL_77;
  MiReturnCommit(v50, 1LL);
  v33 = 1LL;
  if ( (ULONG_PTR *)v50 != &MiSystemPartition )
    goto LABEL_74;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_74;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
  {
    do
    {
      v36 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
              CachedResidentAvailable + 1,
              CachedResidentAvailable);
      v28 = (_DWORD)CachedResidentAvailable == v36;
      LODWORD(CachedResidentAvailable) = v36;
      if ( v28 )
        goto LABEL_75;
    }
    while ( v36 != -1 && (unsigned __int64)(v36 + 1LL) <= 0x100 );
  }
  if ( (int)CachedResidentAvailable > 192
    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
  {
    v33 = (int)CachedResidentAvailable - 192 + 1LL;
  }
  if ( v33 )
LABEL_74:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + 7168), v33);
LABEL_75:
  if ( v51 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EFF8, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_77:
  MiLockAndDecrementShareCount(48 * v61 - 0x58000000000LL, 0);
  if ( v52 )
    MiReleasePageFileInfo(v50, v52, 1);
LABEL_117:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[13],
      0xFFFFFFFFFFFFFFFFuLL);
  return 1LL;
}
