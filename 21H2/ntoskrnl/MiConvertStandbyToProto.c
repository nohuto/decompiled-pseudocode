/*
 * XREFs of MiConvertStandbyToProto @ 0x140227490
 * Callers:
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 * Callees:
 *     MiRecheckCombineVm @ 0x140227DF0 (MiRecheckCombineVm.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140227E94 (MiUnlockNestedProtoPoolPage.c)
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402297E4 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiFillCombinePage @ 0x14026C038 (MiFillCombinePage.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14026ED6C (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x14026EDC4 (MiTransferPageFileOwnership.c)
 *     MiTryLockLeafPage @ 0x1402708F4 (MiTryLockLeafPage.c)
 *     MiGetPfnPriority @ 0x140273234 (MiGetPfnPriority.c)
 *     MiComparePages @ 0x140273250 (MiComparePages.c)
 *     MiIsPageOnBadList @ 0x140273354 (MiIsPageOnBadList.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiUpdatePfnPriority @ 0x14027428C (MiUpdatePfnPriority.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     MiFinalizePageAttribute @ 0x1402E5708 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntryEx @ 0x1402E8154 (MiCopyPfnEntryEx.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033FD38 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1405B6108 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1405B6318 (MiReturnCrossPartitionCombineCharges.c)
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
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r12
  unsigned __int8 v11; // r14
  __int64 v12; // r9
  ULONG_PTR *v13; // rsi
  ULONG_PTR **v14; // rdx
  ULONG_PTR *v15; // rax
  char v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned int PfnPriority; // eax
  __int64 v23; // r13
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 TransitionPte; // rdi
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // r10
  char v33; // r14
  __int64 v34; // r14
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // r11
  unsigned __int64 v42; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v45; // zf
  signed __int32 v46; // eax
  __int64 v47; // r11
  char v48; // dl
  char v49; // [rsp+20h] [rbp-78h]
  char v50; // [rsp+21h] [rbp-77h]
  char v51; // [rsp+22h] [rbp-76h]
  unsigned int v52; // [rsp+24h] [rbp-74h]
  __int64 v53; // [rsp+28h] [rbp-70h] BYREF
  ULONG_PTR *v54; // [rsp+30h] [rbp-68h]
  ULONG_PTR *v55; // [rsp+38h] [rbp-60h]
  __int64 v56; // [rsp+40h] [rbp-58h]
  __int64 ContainingPageTable; // [rsp+48h] [rbp-50h]
  ULONG_PTR *v58; // [rsp+50h] [rbp-48h] BYREF
  __int64 v61; // [rsp+A8h] [rbp+10h]
  __int64 *v62; // [rsp+A8h] [rbp+10h]
  int v65; // [rsp+C0h] [rbp+28h]
  int v66; // [rsp+C0h] [rbp+28h]

  v53 = 0LL;
  v52 = *(_DWORD *)(a5 + 40) & 0x1F;
  v8 = MiSwizzleInvalidPte(((a5 + 48) << 16) | 0x400, a2) | 0x800;
  v56 = v8;
  v10 = (__int64)(*(_QWORD *)(v9 + 56) << 25) >> 16;
  v49 = 0;
  v11 = 1;
  v50 = 1;
  v13 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v12 + 174));
  v55 = v13;
  v15 = *v14;
  v54 = v15;
  v58 = v15;
  if ( a8 == -1 )
  {
    v16 = 1;
    v50 = 1;
    if ( v15 != v13 )
    {
      v49 = 1;
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v15, 1LL) )
        goto LABEL_29;
      v16 = 0;
      v50 = 0;
    }
    v17 = MiLockProtoPoolPage(a5 + 48, 0LL);
    v19 = v17;
    ContainingPageTable = v17;
    if ( v17 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        LOBYTE(v18) = 17;
        MiUnlockProtoPoolPage(v17, v18);
      }
      else
      {
        if ( a7 == (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
          && v13 == *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL))
          && (unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1)
          && (MiTryLockLeafPage(a5 + 48, 1LL, &v53), (v20 = v53) != 0) )
        {
          if ( (*(_BYTE *)(v53 + 35) & 0x40) == 0
            && !(unsigned int)MiIsPageOnBadList(v53)
            && v54 == *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL))
            && ((*(_BYTE *)(v20 + 34) & 7) == 6 || (*(_BYTE *)(v20 + 34) & 0x20) == 0)
            && (v61 = MiMapPageInHyperSpaceWorker(
                        0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4),
                        0LL,
                        0x80000000LL),
                v51 = MiComparePages(v61, v10),
                LOBYTE(v21) = 17,
                MiUnmapPageInHyperSpaceWorker(v61, v21, 0x80000000LL),
                v51)
            && (**(_BYTE **)(a3 + 56) & 1) != 0
            && ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) == v52 )
          {
            if ( (MiUnlinkPageFromListEx(BugCheckParameter2) & 3) == 0 )
            {
              *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
              PfnPriority = MiGetPfnPriority(BugCheckParameter2);
              MiUpdatePfnPriority(v20, PfnPriority, 0LL);
              _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockNestedProtoPoolPage(v19);
              if ( !v16 && _InterlockedIncrement64((volatile signed __int64 *)(a5 + 56)) != 1 )
                MiReturnCrossPartitionCombineCharges(v54, 1LL);
              v23 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL;
              v24 = (__int64 *)(MiMapPageInHyperSpaceWorker(v23, 0LL, 0x80000000LL)
                              + (*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF));
              v65 = 0;
              if ( !(unsigned int)MiPteInShadowRange(v24) )
                goto LABEL_19;
              if ( (unsigned int)MiPteHasShadow(v26, v25) )
              {
                v65 = 1;
                if ( !HIBYTE(word_140C51864) )
                {
LABEL_123:
                  if ( (v8 & 1) != 0 )
                    v8 |= 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                goto LABEL_123;
              }
LABEL_19:
              *v24 = v8;
              if ( v65 )
                MiWritePteShadow(v24, v8);
              LOBYTE(v25) = 17;
              MiUnmapPageInHyperSpaceWorker(v24, v25, 0x80000000LL);
              *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
              MiPfnReferenceCountIsZero(
                BugCheckParameter2,
                0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
              MiLockNestedPageAtDpcInline(48 * v23 - 0x220000000000LL);
              MiDecrementShareCount(48 * v23 - 0x220000000000LL);
              _InterlockedAnd64((volatile signed __int64 *)(48 * v23 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_22:
              if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
                _InterlockedExchangeAdd64(
                  (volatile signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[13],
                  0xFFFFFFFFFFFFFFFFuLL);
              return 1LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockNestedProtoPoolPage(v19);
            MiDiscardTransitionPteEx(BugCheckParameter2, 0LL);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockNestedProtoPoolPage(v19);
          }
        }
        else
        {
          MiUnlockNestedProtoPoolPage(v19);
        }
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    goto LABEL_28;
  }
  v53 = 48 * a8 - 0x220000000000LL;
  if ( (unsigned int)MiFillCombinePage(a8, v53, BugCheckParameter2, v10) )
  {
    TransitionPte = MiMakeTransitionPte(a8, v52);
    v56 = (a5 + 48) & 0x7FFFFFFFFFFFFFFFLL;
    v29 = 0LL;
    ContainingPageTable = MiGetContainingPageTable();
    if ( v54 != v55 )
    {
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v54, 0LL) )
        goto LABEL_89;
      v11 = 0;
      v50 = 0;
    }
    LODWORD(v58) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v58);
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
    if ( (**(_BYTE **)(a3 + 56) & 1) != 0
      && (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) <= 1u
      && v55 == *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL))
      && a7 == (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
      && (unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1)
      && ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) == v52 )
    {
      if ( (MiUnlinkPageFromListEx(BugCheckParameter2) & 3) == 0 )
      {
        v32 = (_QWORD *)(BugCheckParameter2 + 16);
        if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0 && !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(*v32) )
          *(_BYTE *)(BugCheckParameter2 + 34) = v48 | 0x10;
        LOBYTE(v31) = 0;
        if ( (*v32 & 2) != 0 )
        {
          if ( !v11 || (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v55, v32, v30, v31) )
            LOBYTE(v31) = 1;
          else
            v29 = v47;
          v33 = 1;
        }
        else
        {
          if ( !v11 )
            LOBYTE(v31) = (*v32 & 4) != 0;
          v33 = 0;
        }
        if ( (_BYTE)v31 )
        {
          v29 = MiCapturePageFileInfoInline(v32, 1LL, 1LL);
          *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
          v32 = (_QWORD *)(BugCheckParameter2 + 16);
        }
        if ( v33 )
          *v32 &= ~2uLL;
        v34 = 48 * ContainingPageTable - 0x220000000000LL;
        MiLockNestedPageAtDpcInline(v34);
        *(_QWORD *)(v34 + 24) ^= (((*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v34 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiLockNestedPageAtDpcInline(v53);
        MiFinalizePageAttribute(v53, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1LL);
        MiCopyPfnEntryEx(v53, BugCheckParameter2);
        if ( (unsigned int)MiGetPfnPriority(v53) < 5 )
          *(_BYTE *)(v53 + 35) = *(_BYTE *)(v53 + 35) & 0xF8 | 5;
        v35 = v53;
        *(_QWORD *)(v53 + 8) = v56;
        *(_QWORD *)(v35 + 40) |= 0x8000000000000000uLL;
        MiSetPfnPteFrame(v35, ContainingPageTable);
        *(_QWORD *)(v35 + 24) &= 0xC000000000000000uLL;
        MI_MAKE_PROTECT_WRITE_COPY(v35 + 16);
        if ( !v50 )
          *(_QWORD *)(a5 + 56) = 1LL;
        *(_QWORD *)(a5 + 48) = 0LL;
        if ( (unsigned int)MiPteInShadowRange(a5 + 48) )
        {
          if ( (unsigned int)MiPteHasShadow(v37, v36) )
          {
            v38 = 1;
            if ( !HIBYTE(word_140C51864) && (TransitionPte & 1) != 0 )
              TransitionPte |= 0x8000000000000000uLL;
          }
          else
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (TransitionPte & 1) != 0 )
            {
              TransitionPte |= 0x8000000000000000uLL;
            }
            v38 = 0;
          }
        }
        else
        {
          v38 = 0;
        }
        *(_QWORD *)(a5 + 48) = TransitionPte;
        if ( v38 )
          MiWritePteShadow(a5 + 48, TransitionPte);
        v56 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL;
        v62 = (__int64 *)((*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF)
                        + MiMapPageInHyperSpaceWorker(v56, 0LL, 0x80000000LL));
        v66 = 0;
        if ( !(unsigned int)MiPteInShadowRange(v62) )
          goto LABEL_61;
        if ( (unsigned int)MiPteHasShadow(v40, v39) )
        {
          v66 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
LABEL_105:
            if ( (v8 & 1) != 0 )
              v8 |= 0x8000000000000000uLL;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          goto LABEL_105;
        }
LABEL_61:
        v41 = v62;
        *v62 = v8;
        if ( v66 )
          MiWritePteShadow(v62, v8);
        LOBYTE(v39) = 17;
        MiUnmapPageInHyperSpaceWorker(v41, v39, 0x80000000LL);
        *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
        MiTransferPageFileOwnership(v53, a7);
        MiPfnReferenceCountIsZero(v53, a8);
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v50 )
        {
          if ( (*(_QWORD *)(BugCheckParameter2 + 16) & 4) != 0 )
          {
            *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
            if ( v29 )
              v29 &= ~4uLL;
          }
        }
        *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
        MiPfnReferenceCountIsZero(
          BugCheckParameter2,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !v50 )
          goto LABEL_72;
        MiReturnCommit(v55, 1LL);
        v42 = 1LL;
        if ( v55 != &MiSystemPartition )
          goto LABEL_82;
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_82;
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v46 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v45 = (_DWORD)CachedResidentAvailable == v46;
            LODWORD(CachedResidentAvailable) = v46;
            if ( v45 )
              goto LABEL_70;
          }
          while ( v46 != -1 && (unsigned __int64)(v46 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v42 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( v42 )
LABEL_82:
          _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 2120, v42);
LABEL_70:
        if ( v54 == &MiSystemPartition )
          _InterlockedExchangeAdd64(&qword_140C53530, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_72:
        MiLockAndDecrementShareCount(48 * v56 - 0x220000000000LL, 0LL);
        if ( v29 )
          MiReleasePageFileInfo(v55, v29, 1LL);
        goto LABEL_22;
      }
      MiDiscardTransitionPteEx(BugCheckParameter2, 0LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_89:
    v11 = 0;
    goto LABEL_29;
  }
LABEL_28:
  v11 = v49;
LABEL_29:
  if ( !v50 )
    MiReturnCrossPartitionCombineCharges(v54, v11);
  return 0LL;
}
