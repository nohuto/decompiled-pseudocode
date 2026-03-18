/*
 * XREFs of MiConvertPrivateToProto @ 0x140369DA0
 * Callers:
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     EtwpLogKernelEvent @ 0x140226150 (EtwpLogKernelEvent.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MiRebuildPageTableLeafAges @ 0x14029DDE0 (MiRebuildPageTableLeafAges.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402B9F70 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiRemoveWsle @ 0x1402BC4C0 (MiRemoveWsle.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402CFBA0 (MI_WSLE_LOG_ACCESS.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x1402D3D44 (MiUpdatePfnPriority.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14030D9AC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140313E68 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140349584 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     MiIsPageOnBadList @ 0x14034D80C (MiIsPageOnBadList.c)
 *     MiFinalizePageAttribute @ 0x140350B14 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntryEx @ 0x140352310 (MiCopyPfnEntryEx.c)
 *     MiComparePages @ 0x14036A780 (MiComparePages.c)
 *     MiResolveProtoCombine @ 0x14036A884 (MiResolveProtoCombine.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14036AC58 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14036AD04 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiFillCombinePage @ 0x14036AD5C (MiFillCombinePage.c)
 *     MiSetWsleProtection @ 0x14036AF70 (MiSetWsleProtection.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055B46C (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055B67C (MiReturnCrossPartitionCombineCharges.c)
 */

__m128i *__fastcall MiConvertPrivateToProto(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // r15
  __m128i *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  int v21; // r10d
  __m128i *v22; // r14
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rbx
  __int64 v29; // r8
  int HasShadow; // eax
  __int64 v31; // r11
  int v32; // eax
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r13
  unsigned __int64 v39; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v42; // zf
  signed __int32 v43; // eax
  __int64 v44; // r14
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v51; // r9
  __int64 v52; // r13
  unsigned __int64 v53; // rbx
  __int64 v54; // rbx
  __int64 v55; // rcx
  char WsleContents; // al
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  char v60; // di
  BOOL v61; // r14d
  __int8 v62; // cl
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rbx
  unsigned __int64 v69; // r15
  unsigned int v70; // ebx
  __int64 v71; // r8
  __int64 v72; // rcx
  unsigned int v73; // ecx
  char v74; // [rsp+30h] [rbp-B1h]
  unsigned __int8 v75; // [rsp+31h] [rbp-B0h]
  char v76; // [rsp+32h] [rbp-AFh]
  int v78; // [rsp+40h] [rbp-A1h]
  __int64 v79; // [rsp+48h] [rbp-99h] BYREF
  __int64 v80; // [rsp+50h] [rbp-91h]
  unsigned __int64 v81; // [rsp+58h] [rbp-89h]
  int v82; // [rsp+60h] [rbp-81h] BYREF
  int v83; // [rsp+64h] [rbp-7Dh] BYREF
  int v84; // [rsp+68h] [rbp-79h] BYREF
  int v85; // [rsp+6Ch] [rbp-75h] BYREF
  __int64 v86; // [rsp+70h] [rbp-71h]
  __int64 v87; // [rsp+78h] [rbp-69h]
  __int64 v88; // [rsp+80h] [rbp-61h]
  __int64 v89; // [rsp+88h] [rbp-59h]
  __int64 v90; // [rsp+98h] [rbp-49h]
  __int64 ContainingPageTable; // [rsp+A0h] [rbp-41h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-39h]
  __int128 v93; // [rsp+B0h] [rbp-31h] BYREF
  __int128 v94; // [rsp+C0h] [rbp-21h]
  _QWORD v95[2]; // [rsp+D0h] [rbp-11h] BYREF

  v7 = a3 + 48;
  v86 = a1;
  v93 = 0LL;
  v94 = 0LL;
  v88 = a6;
  v89 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v78 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v79 = MI_READ_PTE_LOCK_FREE(a2);
  v10 = (__m128i *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v79) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL);
  v11 = *(unsigned __int16 *)(a1 + 174);
  v12 = *a5;
  v80 = *a5;
  v13 = (__int64)(a2 << 25) >> 16;
  v81 = v13;
  v75 = 0;
  v14 = *(_QWORD *)(qword_140C4E4C8 + 8 * v11);
  v87 = v14;
  v74 = 1;
  if ( a7 == -1 )
  {
    v74 = 1;
    if ( v12 != v14 )
    {
      v75 = 1;
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v12, 1LL) )
        return 0LL;
      v74 = 0;
    }
    v47 = MiLockProtoPoolPage(v7, 0LL);
    if ( v47 )
    {
      v48 = MiLockLeafPage((__int64 *)v7, 0, v45, v46);
      v49 = v48;
      if ( v48 )
      {
        if ( (*(_BYTE *)(v48 + 35) & 0x40) == 0 && !MiIsPageOnBadList(v48) )
        {
          v52 = v80;
          if ( v80 == *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v49 + 40) >> 39) & 0x3FFLL))
            && ((*(_BYTE *)(v49 + 34) & 7) == 6 || (*(_BYTE *)(v49 + 34) & 0x20) == 0) )
          {
            v53 = MiMapPageInHyperSpaceWorker((v49 + 0x58000000000LL) / 48, 0LL, 0x80000000, v51);
            v76 = MiComparePages(v53, v13);
            MiUnmapPageInHyperSpaceWorker(v53, 0x11u, 0x80000000);
            if ( v76 == 1 )
            {
              MiGetPfnPriority((__int64)v10);
              MiUpdatePfnPriority(v49);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockProtoPoolPage(v47, 0x11u);
            if ( v76 )
            {
              if ( dword_140C4E6A8 )
                MI_WSLE_LOG_ACCESS(v86, a2);
              v54 = MiSwizzleInvalidPte((v7 << 16) | 0x400) | 0x800;
              WsleContents = MiGetWsleContents(v55, v81);
              v84 = 0;
              v60 = WsleContents;
              while ( _interlockedbittestandset64(&v10[1].m128i_i32[2], 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v84, v57, v58, v59);
                while ( v10[1].m128i_i64[1] < 0 );
              }
              if ( (v10[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) == 1 && v10[2].m128i_i16[0] == 1 )
              {
                v61 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED((__int64 *)a2, v54, v58, v59);
                if ( v78 )
                  MiIdentifyPfn(v10, (unsigned __int64 *)&v93);
                v62 = v10[2].m128i_i8[2];
                v10[1].m128i_i64[1] |= 0x4000000000000000uLL;
                v63 = v10[2].m128i_i64[1] & 0xFFFFFFFFFLL;
                v10[2].m128i_i8[2] = v62 | 7;
                _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                if ( v61 )
                  MiInsertTbFlushEntry(v88, v81, 1LL, 0);
                v44 = v86;
                MiRemoveWsle(v86, v81, 1LL, v60, 10, 1);
                MiRebuildPageTableLeafAges(v64, v81);
                v68 = 48 * v63 - 0x58000000000LL;
                v85 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v68 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v85, v65, v66, v67);
                  while ( *(__int64 *)(v68 + 24) < 0 );
                }
                MiDecrementShareCount(v68);
                _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( !v74 && _InterlockedIncrement64((volatile signed __int64 *)(v89 + 56)) != 1 )
                  MiReturnCrossPartitionCombineCharges(v52, 1LL);
                MiResolveProtoCombine(a2, v44, v7);
                goto LABEL_108;
              }
              _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            }
            v12 = v52;
            goto LABEL_79;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      MiUnlockProtoPoolPage(v47, 0x11u);
    }
    v12 = v80;
LABEL_79:
    if ( !v74 )
      MiReturnCrossPartitionCombineCharges(v12, v75);
    return 0LL;
  }
  v15 = 48 * a7 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(a7, v15, v10, (__int64)(a2 << 25) >> 16) )
    return 0LL;
  v90 = v7 & 0x7FFFFFFFFFFFFFFFLL;
  v16 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(v7);
  v20 = 48 * ContainingPageTable - 0x58000000000LL;
  if ( v12 != v87 )
  {
    if ( (unsigned int)MiGetCrossPartitionCombineCharges(v12, 0LL) )
    {
      v74 = 0;
      goto LABEL_6;
    }
    return 0LL;
  }
LABEL_6:
  v82 = 0;
  while ( _interlockedbittestandset64(&v10[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v82, v17, v18, v19);
    while ( v10[1].m128i_i64[1] < 0 );
  }
  v21 = 1;
  if ( (v10[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) != 1 || v10[2].m128i_i16[0] != 1 )
  {
    _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_79;
  }
  if ( v78 )
  {
    MiIdentifyPfn(v10, (unsigned __int64 *)&v93);
    v21 = 1;
  }
  if ( (v79 & 0x42) != 0 )
    v79 &= 0xFFFFFFFFFFFFFFBDuLL;
  LOBYTE(v17) = v10[2].m128i_i8[2];
  if ( (v17 & 0x10) == 0 && !IS_PTE_NOT_DEMAND_ZERO(v10[1].m128i_i64[0]) )
  {
    LOBYTE(v17) = v17 | 0x10;
    v10[2].m128i_i8[2] = v17;
  }
  v22 = v10 + 1;
  v23 = v10[1].m128i_i64[0];
  if ( (((unsigned __int8)v23 >> 1) & (unsigned __int8)v21) != 0 )
  {
    if ( v74 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v87, (__m128i *)v10[1].m128i_i16) )
    {
      v16 = v23;
    }
    else
    {
      v16 = MiCapturePageFileInfoInline((unsigned __int64 *)&v10[1], v21, v21);
      v10[2].m128i_i8[2] |= 0x10u;
    }
    v22->m128i_i64[0] &= ~2uLL;
  }
  else if ( !v74 )
  {
    LOBYTE(v23) = (unsigned __int8)v23 >> 2;
    if ( ((unsigned __int8)v23 & (unsigned __int8)v21) != 0 )
    {
      v16 = MiCapturePageFileInfoInline((unsigned __int64 *)&v10[1], v21, v21);
      v10[2].m128i_i8[2] |= 0x10u;
    }
  }
  MiLockNestedPageAtDpcInline(v15, v17, v18, v23);
  MiFinalizePageAttribute(v15, v10[2].m128i_u8[2] >> 6, 1);
  MiCopyPfnEntryEx(v15, (__int64)v10);
  if ( (unsigned int)MiGetPfnPriority(v24) < 5 )
    *(_BYTE *)(v15 + 35) = *(_BYTE *)(v15 + 35) & 0xF8 | 5;
  v25 = ContainingPageTable;
  *(_QWORD *)(v15 + 8) = v90;
  *(_QWORD *)(v15 + 40) = *(_QWORD *)(v15 + 40) & 0xFFFFFFF000000000uLL | v25 & 0xFFFFFFFFFLL | 0x8000000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY(v15 + 16);
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v74 )
  {
    if ( (v22->m128i_i64[0] & 4) != 0 )
    {
      v22->m128i_i64[0] &= ~4uLL;
      if ( v16 )
        v16 &= ~4uLL;
    }
  }
  v26 = v79 ^ (v79 ^ (a7 << 12)) & 0xFFFFFFFFF000LL;
  v79 = v26;
  v27 = v26;
  if ( (v26 & 0x800) != 0 )
  {
    v26 = v26 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
    v79 = v26;
    v27 = v26;
  }
  MiWriteValidPteNewPage((__int64 *)a2, v26, 0);
  if ( !v74 )
    *(_QWORD *)(v89 + 56) = 1LL;
  *(_QWORD *)v7 = 0LL;
  v28 = v27;
  if ( MiPteInShadowRange(v7) )
  {
    HasShadow = MiPteHasShadow();
    v31 = 1LL;
    if ( HasShadow )
    {
      v32 = 1;
      if ( !HIBYTE(word_140C4DE88) && (v27 & 1) != 0 )
        v28 = v27 | 0x8000000000000000uLL;
      goto LABEL_47;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v27 & 1) != 0 )
      v28 = v27 | 0x8000000000000000uLL;
  }
  else
  {
    v31 = 1LL;
  }
  v32 = 0;
LABEL_47:
  *(_QWORD *)v7 = v28;
  if ( v32 )
    MiWritePteShadow(v7, v28, v29);
  v10[1].m128i_i64[1] |= 0x4000000000000000uLL;
  v10[2].m128i_i8[2] |= 7u;
  _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v33 = v81;
  MiInsertTbFlushEntry(v88, v81, v31, 0);
  if ( v16 )
    MiReleasePageFileInfo(
      *(_QWORD *)(qword_140C4E4C8 + 8 * (((unsigned __int64)v10[2].m128i_i64[1] >> 39) & 0x3FF)),
      v16,
      1);
  v83 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v83, v34, v35, v36);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  v37 = *(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v20 + 24) = v37;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v74 != 1 )
    goto LABEL_68;
  v38 = v80;
  MiReturnCommit(v80, 1LL);
  v39 = 1LL;
  if ( (ULONG_PTR *)v38 != &MiSystemPartition )
    goto LABEL_65;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_65;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
  {
    do
    {
      v37 = (unsigned int)(CachedResidentAvailable + 1);
      v43 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
              v37,
              CachedResidentAvailable);
      v42 = (_DWORD)CachedResidentAvailable == v43;
      LODWORD(CachedResidentAvailable) = v43;
      if ( v42 )
        goto LABEL_66;
    }
    while ( v43 != -1 && (unsigned __int64)(v43 + 1LL) <= 0x100 );
  }
  v37 = 192LL;
  if ( (int)CachedResidentAvailable > 192
    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
  {
    v39 = (int)CachedResidentAvailable - 192 + 1LL;
  }
  if ( v39 )
LABEL_65:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 7168), v39);
LABEL_66:
  if ( (ULONG_PTR *)v38 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EE38, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_68:
  v44 = v86;
  if ( (*(_BYTE *)(v86 + 184) & 7) == 0 )
    MiSetWsleProtection(v37, v33, 0LL);
  MiUpdateWorkingSetPrivateSize(v44, v33, -1LL, 0LL);
LABEL_108:
  if ( (*(_BYTE *)(v44 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v78 )
  {
    if ( a7 == -1 )
      v69 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v69 = v7 | 1;
    *((_QWORD *)&v94 + 1) = v69;
    v95[0] = &v93;
    v95[1] = 32LL;
    v70 = *(_DWORD *)(EtwpHostSiloState + 4224);
    while ( 1 )
    {
      v42 = !_BitScanForward(&v73, v70);
      if ( v42 )
        break;
      v70 &= v70 - 1;
      v71 = v73;
      v72 = 32LL * v73 + EtwpHostSiloState + 4260;
      if ( v72 )
      {
        if ( (*(_DWORD *)(v72 + 4) & 0x8000001) != 0 )
          EtwpLogKernelEvent(
            (__int64)v95,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2 * v71 + 4208),
            1u,
            0x27Au,
            0x11401B02u);
      }
    }
  }
  return v10;
}
