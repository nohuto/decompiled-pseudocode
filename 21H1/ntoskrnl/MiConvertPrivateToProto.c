/*
 * XREFs of MiConvertPrivateToProto @ 0x140367400
 * Callers:
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14022956C (IS_PTE_NOT_DEMAND_ZERO.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiIdentifyPfn @ 0x14025F2A0 (MiIdentifyPfn.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiRemoveWsle @ 0x14029D120 (MiRemoveWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402A0190 (MI_WSLE_LOG_ACCESS.c)
 *     MiUpdatePfnPriority @ 0x1402A91E0 (MiUpdatePfnPriority.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiRebuildPageTableLeafAges @ 0x1402DE360 (MiRebuildPageTableLeafAges.c)
 *     MiWriteValidPteNewPage @ 0x1402F19B0 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402F3DC0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402FDD94 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MiIsPageOnBadList @ 0x14034906C (MiIsPageOnBadList.c)
 *     MiCopyPfnEntryEx @ 0x14034B9B0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14034BF54 (MiFinalizePageAttribute.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MiComparePages @ 0x140367DE0 (MiComparePages.c)
 *     MiResolveProtoCombine @ 0x140367EE4 (MiResolveProtoCombine.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1403682B8 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x140368364 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiFillCombinePage @ 0x1403683BC (MiFillCombinePage.c)
 *     MiSetWsleProtection @ 0x1403685D0 (MiSetWsleProtection.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055744C (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055765C (MiReturnCrossPartitionCombineCharges.c)
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
  int HasShadow; // eax
  __int64 v30; // r11
  int v31; // eax
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r13
  unsigned __int64 v38; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v41; // zf
  signed __int32 v42; // eax
  __int64 v43; // r14
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdi
  __int64 v53; // r13
  unsigned __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbx
  __int64 v60; // rcx
  char WsleContents; // al
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  char v65; // di
  BOOL v66; // r14d
  __int8 v67; // cl
  __int64 v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rbx
  unsigned __int64 v74; // r15
  unsigned int v75; // ebx
  __int64 v76; // r8
  __int64 v77; // rcx
  unsigned int v78; // ecx
  char v79; // [rsp+30h] [rbp-B1h]
  unsigned __int8 v80; // [rsp+31h] [rbp-B0h]
  char v81; // [rsp+32h] [rbp-AFh]
  int v83; // [rsp+40h] [rbp-A1h]
  __int64 v84; // [rsp+48h] [rbp-99h] BYREF
  __int64 v85; // [rsp+50h] [rbp-91h]
  unsigned __int64 v86; // [rsp+58h] [rbp-89h]
  int v87; // [rsp+60h] [rbp-81h] BYREF
  int v88; // [rsp+64h] [rbp-7Dh] BYREF
  int v89; // [rsp+68h] [rbp-79h] BYREF
  int v90; // [rsp+6Ch] [rbp-75h] BYREF
  __int64 v91; // [rsp+70h] [rbp-71h]
  __int64 v92; // [rsp+78h] [rbp-69h]
  __int64 v93; // [rsp+80h] [rbp-61h]
  __int64 v94; // [rsp+88h] [rbp-59h]
  __int64 v95; // [rsp+98h] [rbp-49h]
  __int64 ContainingPageTable; // [rsp+A0h] [rbp-41h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-39h]
  __int128 v98; // [rsp+B0h] [rbp-31h] BYREF
  __int128 v99; // [rsp+C0h] [rbp-21h]
  _QWORD v100[2]; // [rsp+D0h] [rbp-11h] BYREF

  v7 = a3 + 48;
  v91 = a1;
  v98 = 0LL;
  v99 = 0LL;
  v93 = a6;
  v94 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v83 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v84 = MI_READ_PTE_LOCK_FREE(a2);
  v10 = (__m128i *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v84) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL);
  v11 = *(unsigned __int16 *)(a1 + 174);
  v12 = *a5;
  v85 = *a5;
  v13 = (__int64)(a2 << 25) >> 16;
  v86 = v13;
  v80 = 0;
  v14 = *(_QWORD *)(qword_140C4E588 + 8 * v11);
  v92 = v14;
  v79 = 1;
  if ( a7 == -1 )
  {
    v79 = 1;
    if ( v12 != v14 )
    {
      v80 = 1;
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v12, 1LL) )
        return 0LL;
      v79 = 0;
    }
    v46 = MiLockProtoPoolPage(v7, 0LL);
    if ( v46 )
    {
      v47 = MiLockLeafPage((__int64 *)v7, 0, v44, v45);
      v51 = v47;
      if ( v47 )
      {
        if ( (*(_BYTE *)(v47 + 35) & 0x40) == 0 && !MiIsPageOnBadList(v47) )
        {
          v53 = v85;
          if ( v85 == *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v51 + 40) >> 39) & 0x3FFLL))
            && ((*(_BYTE *)(v51 + 34) & 7) == 6 || (*(_BYTE *)(v51 + 34) & 0x20) == 0) )
          {
            v54 = MiMapPageInHyperSpaceWorker((v51 + 0x58000000000LL) / 48, 0LL, 0x80000000, v50);
            v81 = MiComparePages(v54, v13);
            LOBYTE(v55) = 17;
            MiUnmapPageInHyperSpaceWorker(v54, v55, 0x80000000);
            if ( v81 == 1 )
            {
              MiGetPfnPriority((__int64)v10);
              MiUpdatePfnPriority(v51);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            LOBYTE(v56) = 17;
            MiUnlockProtoPoolPage(v46, v56, v57, v58);
            if ( v81 )
            {
              if ( dword_140C4E768 )
                MI_WSLE_LOG_ACCESS(v91, a2);
              v59 = MiSwizzleInvalidPte((v7 << 16) | 0x400) | 0x800;
              WsleContents = MiGetWsleContents(v60, v86);
              v89 = 0;
              v65 = WsleContents;
              while ( _interlockedbittestandset64(&v10[1].m128i_i32[2], 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v89, v62, v63, v64);
                while ( v10[1].m128i_i64[1] < 0 );
              }
              if ( (v10[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) == 1 && v10[2].m128i_i16[0] == 1 )
              {
                v66 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED((__int64 *)a2, v59);
                if ( v83 )
                  MiIdentifyPfn(v10, (unsigned __int64 *)&v98);
                v67 = v10[2].m128i_i8[2];
                v10[1].m128i_i64[1] |= 0x4000000000000000uLL;
                v68 = v10[2].m128i_i64[1] & 0xFFFFFFFFFLL;
                v10[2].m128i_i8[2] = v67 | 7;
                _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                if ( v66 )
                  MiInsertTbFlushEntry(v93, v86, 1LL, 0);
                v43 = v91;
                MiRemoveWsle(v91, v86, 1LL, v65, 10, 1);
                MiRebuildPageTableLeafAges(v69, v86);
                v73 = 48 * v68 - 0x58000000000LL;
                v90 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v73 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v90, v70, v71, v72);
                  while ( *(__int64 *)(v73 + 24) < 0 );
                }
                MiDecrementShareCount(v73);
                _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( !v79 && _InterlockedIncrement64((volatile signed __int64 *)(v94 + 56)) != 1 )
                  MiReturnCrossPartitionCombineCharges(v53, 1LL);
                MiResolveProtoCombine(a2, v43, v7);
                goto LABEL_108;
              }
              _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            }
            v12 = v53;
            goto LABEL_79;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      LOBYTE(v48) = 17;
      MiUnlockProtoPoolPage(v46, v48, v49, v50);
    }
    v12 = v85;
LABEL_79:
    if ( !v79 )
      MiReturnCrossPartitionCombineCharges(v12, v80);
    return 0LL;
  }
  v15 = 48 * a7 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(a7, v15, v10, (__int64)(a2 << 25) >> 16) )
    return 0LL;
  v95 = v7 & 0x7FFFFFFFFFFFFFFFLL;
  v16 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(v7);
  v20 = 48 * ContainingPageTable - 0x58000000000LL;
  if ( v12 != v92 )
  {
    if ( (unsigned int)MiGetCrossPartitionCombineCharges(v12, 0LL) )
    {
      v79 = 0;
      goto LABEL_6;
    }
    return 0LL;
  }
LABEL_6:
  v87 = 0;
  while ( _interlockedbittestandset64(&v10[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v87, v17, v18, v19);
    while ( v10[1].m128i_i64[1] < 0 );
  }
  v21 = 1;
  if ( (v10[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) != 1 || v10[2].m128i_i16[0] != 1 )
  {
    _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_79;
  }
  if ( v83 )
  {
    MiIdentifyPfn(v10, (unsigned __int64 *)&v98);
    v21 = 1;
  }
  if ( (v84 & 0x42) != 0 )
    v84 &= 0xFFFFFFFFFFFFFFBDuLL;
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
    if ( v79 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v92, (__m128i *)v10[1].m128i_i16) )
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
  else if ( !v79 )
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
  *(_QWORD *)(v15 + 8) = v95;
  *(_QWORD *)(v15 + 40) = *(_QWORD *)(v15 + 40) & 0xFFFFFFF000000000uLL | v25 & 0xFFFFFFFFFLL | 0x8000000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY(v15 + 16);
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v79 )
  {
    if ( (v22->m128i_i64[0] & 4) != 0 )
    {
      v22->m128i_i64[0] &= ~4uLL;
      if ( v16 )
        v16 &= ~4uLL;
    }
  }
  v26 = v84 ^ (v84 ^ (a7 << 12)) & 0xFFFFFFFFF000LL;
  v84 = v26;
  v27 = v26;
  if ( (v26 & 0x800) != 0 )
  {
    v26 = v26 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
    v84 = v26;
    v27 = v26;
  }
  MiWriteValidPteNewPage((__int64 *)a2, v26, 0);
  if ( !v79 )
    *(_QWORD *)(v94 + 56) = 1LL;
  *(_QWORD *)v7 = 0LL;
  v28 = v27;
  if ( MiPteInShadowRange(v7) )
  {
    HasShadow = MiPteHasShadow();
    v30 = 1LL;
    if ( HasShadow )
    {
      v31 = 1;
      if ( !HIBYTE(word_140C4DF48) && (v27 & 1) != 0 )
        v28 = v27 | 0x8000000000000000uLL;
      goto LABEL_47;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v27 & 1) != 0 )
      v28 = v27 | 0x8000000000000000uLL;
  }
  else
  {
    v30 = 1LL;
  }
  v31 = 0;
LABEL_47:
  *(_QWORD *)v7 = v28;
  if ( v31 )
    MiWritePteShadow(v7, v28);
  v10[1].m128i_i64[1] |= 0x4000000000000000uLL;
  v10[2].m128i_i8[2] |= 7u;
  _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v32 = v86;
  MiInsertTbFlushEntry(v93, v86, v30, 0);
  if ( v16 )
    MiReleasePageFileInfo(
      *(_QWORD *)(qword_140C4E588 + 8 * (((unsigned __int64)v10[2].m128i_i64[1] >> 39) & 0x3FF)),
      v16,
      1);
  v88 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v88, v33, v34, v35);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  v36 = *(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v20 + 24) = v36;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v79 != 1 )
    goto LABEL_68;
  v37 = v85;
  MiReturnCommit(v85, 1LL);
  v38 = 1LL;
  if ( (ULONG_PTR *)v37 != &MiSystemPartition )
    goto LABEL_65;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_65;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
  {
    do
    {
      v36 = (unsigned int)(CachedResidentAvailable + 1);
      v42 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
              v36,
              CachedResidentAvailable);
      v41 = (_DWORD)CachedResidentAvailable == v42;
      LODWORD(CachedResidentAvailable) = v42;
      if ( v41 )
        goto LABEL_66;
    }
    while ( v42 != -1 && (unsigned __int64)(v42 + 1LL) <= 0x100 );
  }
  v36 = 192LL;
  if ( (int)CachedResidentAvailable > 192
    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
  {
    v38 = (int)CachedResidentAvailable - 192 + 1LL;
  }
  if ( v38 )
LABEL_65:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 7168), v38);
LABEL_66:
  if ( (ULONG_PTR *)v37 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EEF8, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_68:
  v43 = v91;
  if ( (*(_BYTE *)(v91 + 184) & 7) == 0 )
    MiSetWsleProtection(v36, v32, 0LL);
  MiUpdateWorkingSetPrivateSize(v43, v32, -1LL, 0LL);
LABEL_108:
  if ( (*(_BYTE *)(v43 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v83 )
  {
    if ( a7 == -1 )
      v74 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v74 = v7 | 1;
    *((_QWORD *)&v99 + 1) = v74;
    v100[0] = &v98;
    v100[1] = 32LL;
    v75 = *(_DWORD *)(EtwpHostSiloState + 4224);
    while ( 1 )
    {
      v41 = !_BitScanForward(&v78, v75);
      if ( v41 )
        break;
      v75 &= v75 - 1;
      v76 = v78;
      v77 = 32LL * v78 + EtwpHostSiloState + 4260;
      if ( v77 )
      {
        if ( (*(_DWORD *)(v77 + 4) & 0x8000001) != 0 )
          EtwpLogKernelEvent(
            (__int64)v100,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2 * v76 + 4208),
            1u,
            0x27Au,
            0x11401B02u);
      }
    }
  }
  return v10;
}
