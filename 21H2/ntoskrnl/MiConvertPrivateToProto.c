/*
 * XREFs of MiConvertPrivateToProto @ 0x140272A10
 * Callers:
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402297E4 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiFillCombinePage @ 0x14026C038 (MiFillCombinePage.c)
 *     MiSetWsleProtection @ 0x14026ECFC (MiSetWsleProtection.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14026ED6C (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x14026EDC4 (MiTransferPageFileOwnership.c)
 *     MiWriteValidPteNewPage @ 0x14026EDE4 (MiWriteValidPteNewPage.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14026EEA8 (MiUpdateWorkingSetPrivateSize.c)
 *     MiGetPfnPriority @ 0x140273234 (MiGetPfnPriority.c)
 *     MiComparePages @ 0x140273250 (MiComparePages.c)
 *     MiIsPageOnBadList @ 0x140273354 (MiIsPageOnBadList.c)
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiRebuildPageTableLeafAges @ 0x140274030 (MiRebuildPageTableLeafAges.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140274148 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiUpdatePfnPriority @ 0x14027428C (MiUpdatePfnPriority.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140274D10 (MI_WSLE_LOG_ACCESS.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiIdentifyPfn @ 0x1402B1E40 (MiIdentifyPfn.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x1402E5708 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntryEx @ 0x1402E8154 (MiCopyPfnEntryEx.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiRemoveWsle @ 0x140331CC0 (MiRemoveWsle.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     MiResolveProtoCombine @ 0x14033A920 (MiResolveProtoCombine.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033FD38 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1405B6108 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1405B6318 (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiConvertPrivateToProto(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // cl
  __int64 v21; // rbx
  __int64 v22; // rdx
  unsigned int PfnPriority; // eax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rcx
  unsigned __int8 WsleContents; // al
  unsigned __int8 v28; // di
  int v29; // eax
  char v30; // cl
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v36; // rbx
  char v37; // dl
  __int64 v38; // r10
  unsigned __int64 *v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 *v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned __int64 v45; // rbx
  char v46; // al
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rbx
  unsigned __int64 v50; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v53; // zf
  signed __int32 v54; // eax
  __int64 v55; // r10
  char v56; // r8
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // r13
  char v59; // [rsp+30h] [rbp-B1h]
  char v60; // [rsp+31h] [rbp-B0h]
  char v61; // [rsp+32h] [rbp-AFh]
  int v63; // [rsp+38h] [rbp-A9h]
  __int64 v64; // [rsp+38h] [rbp-A9h]
  unsigned __int64 v65; // [rsp+38h] [rbp-A9h]
  BOOL v66; // [rsp+40h] [rbp-A1h]
  __int64 v67; // [rsp+48h] [rbp-99h] BYREF
  __int64 v68; // [rsp+50h] [rbp-91h]
  __int64 *v69; // [rsp+58h] [rbp-89h]
  int v70; // [rsp+60h] [rbp-81h] BYREF
  int v71; // [rsp+64h] [rbp-7Dh] BYREF
  int v72; // [rsp+68h] [rbp-79h] BYREF
  int v73; // [rsp+6Ch] [rbp-75h] BYREF
  int v74; // [rsp+70h] [rbp-71h] BYREF
  __int64 v75; // [rsp+78h] [rbp-69h]
  __int64 v76; // [rsp+80h] [rbp-61h]
  __int64 v77; // [rsp+88h] [rbp-59h]
  __int64 v78; // [rsp+90h] [rbp-51h]
  __int64 ContainingPageTable; // [rsp+98h] [rbp-49h]
  __int64 v80; // [rsp+A0h] [rbp-41h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-39h]
  __int128 v82; // [rsp+B0h] [rbp-31h] BYREF
  __int128 v83; // [rsp+C0h] [rbp-21h]
  _QWORD v84[2]; // [rsp+D0h] [rbp-11h] BYREF

  v7 = a3 + 48;
  v8 = a1;
  v82 = 0LL;
  v75 = a6;
  v83 = 0LL;
  v12 = a2;
  v76 = a3;
  v69 = (__int64 *)a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v66 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
  v67 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v67) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v10 = v12 << 25;
  v11 = *(unsigned __int16 *)(v8 + 174);
  LOBYTE(v12) = 0;
  v13 = *a5;
  v68 = *a5;
  v14 = v10 >> 16;
  v60 = 0;
  v59 = 1;
  v15 = *(_QWORD *)(qword_140C51F48 + 8 * v11);
  v77 = v15;
  if ( a7 != -1 )
  {
    v64 = 48 * a7 - 0x220000000000LL;
    if ( !(unsigned int)MiFillCombinePage(v64, v64, v9, v14) )
      return 0LL;
    v78 = v7 & 0x7FFFFFFFFFFFFFFFLL;
    v12 = 0LL;
    ContainingPageTable = MiGetContainingPageTable(v7);
    v36 = v77;
    v80 = 48 * ContainingPageTable - 0x220000000000LL;
    if ( v68 == v77 )
    {
      v37 = 1;
    }
    else
    {
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v68, 0LL) )
        return 0LL;
      v37 = 0;
      v59 = 0;
    }
    v70 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v70);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
      v37 = v59;
    }
    if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v9 + 32) != 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_67;
    }
    if ( v66 )
    {
      MiIdentifyPfn(v9, &v82);
      v37 = v59;
    }
    if ( (v67 & 0x42) != 0 )
      v67 &= 0xFFFFFFFFFFFFFFBDuLL;
    if ( (*(_BYTE *)(v9 + 34) & 0x10) == 0 && !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(*(_QWORD *)(v9 + 16)) )
      *(_BYTE *)(v9 + 34) = v56 | 0x10;
    v38 = *(_QWORD *)(v9 + 16);
    v39 = (unsigned __int64 *)(v9 + 16);
    if ( (v38 & 2) != 0 )
    {
      if ( !v37 || MI_IS_PTE_IN_WS_SWAP_SET(v36, (_WORD *)(v9 + 16)) )
      {
        v12 = MiCapturePageFileInfoInline(v39, 1, 1);
        v39 = (unsigned __int64 *)(v9 + 16);
        *(_BYTE *)(v9 + 34) |= 0x10u;
      }
      else
      {
        v12 = v55;
      }
      *v39 &= ~2uLL;
    }
    else if ( !v37 && (v38 & 4) != 0 )
    {
      v12 = MiCapturePageFileInfoInline((unsigned __int64 *)(v9 + 16), 1, 1);
      *(_BYTE *)(v9 + 34) |= 0x10u;
    }
    MiLockNestedPageAtDpcInline(v64);
    MiFinalizePageAttribute(v64, *(unsigned __int8 *)(v9 + 34) >> 6, 1LL);
    MiCopyPfnEntryEx(v64, v9);
    if ( (unsigned int)MiGetPfnPriority(v64) < 5 )
      *(_BYTE *)(v64 + 35) = *(_BYTE *)(v64 + 35) & 0xF8 | 5;
    v41 = ContainingPageTable;
    *(_QWORD *)(v64 + 8) = v78;
    *(_QWORD *)(v64 + 40) |= 0x8000000000000000uLL;
    MiSetPfnPteFrame(v40, v41);
    MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v64 + 16));
    v42 = v69;
    MiTransferPageFileOwnership(v64, (__int64)v69);
    _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v59 )
    {
      v43 = *(_QWORD *)(v9 + 16);
      if ( (v43 & 4) != 0 )
      {
        *(_QWORD *)(v9 + 16) = v43 & 0xFFFFFFFFFFFFFFFBuLL;
        if ( v12 )
          v12 &= ~4uLL;
      }
    }
    v44 = v67 ^ (v67 ^ (a7 << 12)) & 0xFFFFFFFFFF000LL;
    v67 = v44;
    v65 = v44;
    if ( (v44 & 0x800) != 0 )
    {
      v44 = v44 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
      v67 = v44;
      v65 = v44;
    }
    MiWriteValidPteNewPage(v42, v44, 0);
    if ( !v59 )
      *(_QWORD *)(v76 + 56) = 1LL;
    v45 = v65;
    *(_QWORD *)v7 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v7) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v57 = v65;
        if ( !HIBYTE(word_140C51864) && (v65 & 1) != 0 )
          v57 = v65 | 0x8000000000000000uLL;
        *(_QWORD *)v7 = v57;
        MiWritePteShadow(v7, v57);
LABEL_52:
        v46 = *(_BYTE *)(v9 + 34);
        *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
        *(_BYTE *)(v9 + 34) = v46 | 7;
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertTbFlushEntry(v75, v14, 1LL, 0LL);
        if ( v12 )
          MiReleasePageFileInfo(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)), v12, 1LL);
        v47 = v80;
        v71 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v71);
          while ( *(__int64 *)(v47 + 24) < 0 );
        }
        v48 = *(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v47 + 24) = v48;
        _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !v59 )
          goto LABEL_63;
        v49 = v68;
        MiReturnCommit(v68, 1LL);
        v50 = 1LL;
        if ( (ULONG_PTR *)v49 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              do
              {
                v48 = (unsigned int)(CachedResidentAvailable + 1);
                v54 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                        v48,
                        CachedResidentAvailable);
                v53 = (_DWORD)CachedResidentAvailable == v54;
                LODWORD(CachedResidentAvailable) = v54;
                if ( v53 )
                  goto LABEL_62;
              }
              while ( v54 != -1 && (unsigned __int64)(v54 + 1LL) <= 0x100 );
            }
            v48 = 192LL;
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v50 = (int)CachedResidentAvailable - 192 + 1LL;
            }
            if ( !v50 )
            {
LABEL_62:
              _InterlockedExchangeAdd64(&qword_140C53530, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_63:
              if ( (*(_BYTE *)(v8 + 184) & 7) == 0 )
                MiSetWsleProtection(v48, v14);
              MiUpdateWorkingSetPrivateSize(v8, v14, 0xFFFFFFFFFFFFFFFFuLL, 0);
              goto LABEL_25;
            }
          }
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 16960), v50);
        if ( (ULONG_PTR *)v49 != &MiSystemPartition )
          goto LABEL_63;
        goto LABEL_62;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v45 = v65;
        if ( (v65 & 1) != 0 )
          v45 = v65 | 0x8000000000000000uLL;
      }
      else
      {
        v45 = v65;
      }
    }
    *(_QWORD *)v7 = v45;
    goto LABEL_52;
  }
  v59 = 1;
  if ( v13 == v15 )
    goto LABEL_3;
  v60 = 1;
  LOBYTE(v12) = 1;
  if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v13, 1LL) )
    return 0LL;
  v59 = 0;
LABEL_3:
  v16 = MiLockProtoPoolPage(v7, 0LL);
  if ( !v16 )
    goto LABEL_68;
  v17 = MiLockLeafPage(v7, 0LL);
  v12 = v17;
  if ( !v17 )
  {
    LOBYTE(v18) = 17;
    MiUnlockProtoPoolPage(v16, v18);
    LOBYTE(v12) = v60;
    goto LABEL_68;
  }
  if ( (*(_BYTE *)(v17 + 35) & 0x40) != 0
    || (unsigned int)MiIsPageOnBadList(v17)
    || v13 != *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL))
    || (v20 = *(_BYTE *)(v12 + 34), (v20 & 7) != 6) && (v20 & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v18) = 17;
    MiUnlockProtoPoolPage(v16, v18);
    LOBYTE(v12) = v60;
LABEL_68:
    if ( !v59 )
      MiReturnCrossPartitionCombineCharges(v13, (unsigned __int8)v12);
    return 0LL;
  }
  v21 = MiMapPageInHyperSpaceWorker(0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4), 0LL, 0x80000000LL);
  v61 = MiComparePages(v21, v14);
  LOBYTE(v22) = 17;
  MiUnmapPageInHyperSpaceWorker(v21, v22, 0x80000000LL);
  if ( v61 )
  {
    PfnPriority = MiGetPfnPriority(v9);
    MiUpdatePfnPriority(v12, PfnPriority, 0LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v72 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v72);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  *(_BYTE *)(v16 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v16);
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v61 )
    goto LABEL_66;
  v8 = a1;
  if ( dword_140C52B68 )
    MI_WSLE_LOG_ACCESS(a1, v69);
  v25 = MiSwizzleInvalidPte((v7 << 16) | 0x400, v24) | 0x800;
  WsleContents = MiGetWsleContents(v26, v14);
  v73 = 0;
  v28 = WsleContents;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v73);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v9 + 32) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_66:
    LOBYTE(v12) = v60;
LABEL_67:
    v13 = v68;
    goto LABEL_68;
  }
  v29 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v69, v25, (unsigned int)(*(_DWORD *)(v9 + 24) + 1));
  v63 = v29;
  if ( v66 )
  {
    MiIdentifyPfn(v9, &v82);
    v29 = v63;
  }
  v30 = *(_BYTE *)(v9 + 34);
  *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
  v31 = *(_QWORD *)(v9 + 40);
  *(_BYTE *)(v9 + 34) = v30 | 7;
  v32 = v31 & 0xFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v29 )
    MiInsertTbFlushEntry(v75, v14, 1LL, 0LL);
  MiRemoveWsle(v8, v14, 1, v28, 10, 1);
  MiRebuildPageTableLeafAges(v33, v14);
  v34 = 48 * v32 - 0x220000000000LL;
  v74 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v74);
    while ( *(__int64 *)(v34 + 24) < 0 );
  }
  MiDecrementShareCount(v34);
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v59 && _InterlockedIncrement64((volatile signed __int64 *)(v76 + 56)) != 1 )
    MiReturnCrossPartitionCombineCharges(v68, 1LL);
  MiResolveProtoCombine(v69, v8, v7);
LABEL_25:
  if ( (*(_BYTE *)(v8 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v66 )
  {
    if ( a7 == -1 )
      v58 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v58 = v7 | 1;
    *((_QWORD *)&v83 + 1) = v58;
    v84[0] = &v82;
    v84[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v84, 1, 671088641, 634, 289413892);
  }
  return v9;
}
