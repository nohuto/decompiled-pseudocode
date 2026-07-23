/*
 * XREFs of MiConvertPrivateToProto @ 0x14036A200
 * Callers:
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 * Callees:
 *     MiRebuildPageTableLeafAges @ 0x140202200 (MiRebuildPageTableLeafAges.c)
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14022AE80 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWriteValidPteNewPage @ 0x140234AD8 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPfnEntryEx @ 0x14025B9D0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x14025ED44 (MiUpdatePfnPriority.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140313DD0 (MI_WSLE_LOG_ACCESS.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140341A70 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiRemoveWsle @ 0x140343D30 (MiRemoveWsle.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x140353FA0 (MiIdentifyPfn.c)
 *     EtwpLogKernelEvent @ 0x14035AD50 (EtwpLogKernelEvent.c)
 *     MiComparePages @ 0x14036ABE0 (MiComparePages.c)
 *     MiResolveProtoCombine @ 0x14036ACE4 (MiResolveProtoCombine.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14036B0B8 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14036B164 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiFillCombinePage @ 0x14036B1BC (MiFillCombinePage.c)
 *     MiSetWsleProtection @ 0x14036B3D0 (MiSetWsleProtection.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055D17C (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055D38C (MiReturnCrossPartitionCombineCharges.c)
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
  char v22; // dl
  __m128i *v23; // r14
  __int64 v24; // r9
  unsigned __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rbx
  int HasShadow; // eax
  __int64 v32; // r11
  int v33; // eax
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r13
  unsigned __int64 v40; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v43; // zf
  signed __int32 v44; // eax
  __int64 v45; // r14
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v50; // r13
  unsigned __int64 v51; // rbx
  __int64 v52; // rbx
  __int64 v53; // rcx
  char WsleContents; // al
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  char v58; // di
  BOOL v59; // r14d
  __int8 v60; // cl
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rbx
  unsigned __int64 v67; // r15
  unsigned int v68; // ebx
  __int64 v69; // r8
  __int64 v70; // rcx
  unsigned int v71; // ecx
  char v72; // [rsp+30h] [rbp-B1h]
  unsigned __int8 v73; // [rsp+31h] [rbp-B0h]
  char v74; // [rsp+32h] [rbp-AFh]
  int v76; // [rsp+40h] [rbp-A1h]
  __int64 v77; // [rsp+48h] [rbp-99h] BYREF
  __int64 v78; // [rsp+50h] [rbp-91h]
  unsigned __int64 v79; // [rsp+58h] [rbp-89h]
  int v80; // [rsp+60h] [rbp-81h] BYREF
  int v81; // [rsp+64h] [rbp-7Dh] BYREF
  int v82; // [rsp+68h] [rbp-79h] BYREF
  int v83; // [rsp+6Ch] [rbp-75h] BYREF
  __int64 v84; // [rsp+70h] [rbp-71h]
  __int64 v85; // [rsp+78h] [rbp-69h]
  __int64 v86; // [rsp+80h] [rbp-61h]
  __int64 v87; // [rsp+88h] [rbp-59h]
  __int64 v88; // [rsp+98h] [rbp-49h]
  __int64 ContainingPageTable; // [rsp+A0h] [rbp-41h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-39h]
  __int128 v91; // [rsp+B0h] [rbp-31h] BYREF
  __int128 v92; // [rsp+C0h] [rbp-21h]
  _QWORD v93[2]; // [rsp+D0h] [rbp-11h] BYREF

  v7 = a3 + 48;
  v84 = a1;
  v91 = 0LL;
  v92 = 0LL;
  v86 = a6;
  v87 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v76 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v77 = MI_READ_PTE_LOCK_FREE(a2);
  v10 = (__m128i *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v77) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL);
  v11 = *(unsigned __int16 *)(a1 + 174);
  v12 = *a5;
  v78 = *a5;
  v13 = (__int64)(a2 << 25) >> 16;
  v79 = v13;
  v73 = 0;
  v14 = *(_QWORD *)(qword_140C4E688 + 8 * v11);
  v85 = v14;
  v72 = 1;
  if ( a7 == -1 )
  {
    v72 = 1;
    if ( v12 != v14 )
    {
      v73 = 1;
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v12, 1LL) )
        return 0LL;
      v72 = 0;
    }
    v46 = MiLockProtoPoolPage(v7, 0LL);
    if ( v46 )
    {
      v47 = MiLockLeafPage((unsigned __int64 *)v7, 0LL);
      v48 = v47;
      if ( v47 )
      {
        if ( (*(_BYTE *)(v47 + 35) & 0x40) == 0 && !MiIsPageOnBadList(v47) )
        {
          v50 = v78;
          if ( v78 == *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v48 + 40) >> 39) & 0x3FFLL))
            && ((*(_BYTE *)(v48 + 34) & 7) == 6 || (*(_BYTE *)(v48 + 34) & 0x20) == 0) )
          {
            v51 = MiMapPageInHyperSpaceWorker((v48 + 0x58000000000LL) / 48, 0LL, 0x80000000);
            v74 = MiComparePages(v51, v13);
            MiUnmapPageInHyperSpaceWorker(v51, 0x11u, 0x80000000);
            if ( v74 == 1 )
            {
              MiGetPfnPriority((__int64)v10);
              MiUpdatePfnPriority(v48);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockProtoPoolPage(v46, 0x11u);
            if ( v74 )
            {
              if ( dword_140C4E868 )
                MI_WSLE_LOG_ACCESS(v84, (_BYTE *)a2);
              v52 = MiSwizzleInvalidPte((v7 << 16) | 0x400) | 0x800;
              WsleContents = MiGetWsleContents(v53, v79);
              v82 = 0;
              v58 = WsleContents;
              while ( _interlockedbittestandset64(&v10[1].m128i_i32[2], 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v82, v55, v56, v57);
                while ( v10[1].m128i_i64[1] < 0 );
              }
              if ( (v10[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) == 1 && v10[2].m128i_i16[0] == 1 )
              {
                v59 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED((volatile __int64 *)a2, v52);
                if ( v76 )
                  MiIdentifyPfn(v10, (unsigned __int64 *)&v91);
                v60 = v10[2].m128i_i8[2];
                v10[1].m128i_i64[1] |= 0x4000000000000000uLL;
                v61 = v10[2].m128i_i64[1] & 0xFFFFFFFFFLL;
                v10[2].m128i_i8[2] = v60 | 7;
                _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                if ( v59 )
                  MiInsertTbFlushEntry(v86, v79, 1LL, 0);
                v45 = v84;
                MiRemoveWsle(v84, v79, 1LL, v58, 10, 1);
                MiRebuildPageTableLeafAges(v62, v79);
                v66 = 48 * v61 - 0x58000000000LL;
                v83 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v83, v63, v64, v65);
                  while ( *(__int64 *)(v66 + 24) < 0 );
                }
                MiDecrementShareCount(v66);
                _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( !v72 && _InterlockedIncrement64((volatile signed __int64 *)(v87 + 56)) != 1 )
                  MiReturnCrossPartitionCombineCharges(v50, 1LL);
                MiResolveProtoCombine(a2, v45, v7);
                goto LABEL_108;
              }
              _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            }
            v12 = v50;
            goto LABEL_79;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      MiUnlockProtoPoolPage(v46, 0x11u);
    }
    v12 = v78;
LABEL_79:
    if ( !v72 )
      MiReturnCrossPartitionCombineCharges(v12, v73);
    return 0LL;
  }
  v15 = 48 * a7 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(a7, v15, v10, (__int64)(a2 << 25) >> 16) )
    return 0LL;
  v88 = v7 & 0x7FFFFFFFFFFFFFFFLL;
  v16 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(v7);
  v20 = 48 * ContainingPageTable - 0x58000000000LL;
  if ( v12 != v85 )
  {
    if ( (unsigned int)MiGetCrossPartitionCombineCharges(v12, 0LL) )
    {
      v72 = 0;
      goto LABEL_6;
    }
    return 0LL;
  }
LABEL_6:
  v80 = 0;
  while ( _interlockedbittestandset64(&v10[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v80, v17, v18, v19);
    while ( v10[1].m128i_i64[1] < 0 );
  }
  v21 = 1;
  if ( (v10[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) != 1 || v10[2].m128i_i16[0] != 1 )
  {
    _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_79;
  }
  if ( v76 )
  {
    MiIdentifyPfn(v10, (unsigned __int64 *)&v91);
    v21 = 1;
  }
  if ( (v77 & 0x42) != 0 )
    v77 &= 0xFFFFFFFFFFFFFFBDuLL;
  if ( (v10[2].m128i_i8[2] & 0x10) == 0 && !IS_PTE_NOT_DEMAND_ZERO(v10[1].m128i_i64[0]) )
    v10[2].m128i_i8[2] = v22 | 0x10;
  v23 = v10 + 1;
  v24 = v10[1].m128i_i64[0];
  if ( (((unsigned __int8)v24 >> 1) & (unsigned __int8)v21) != 0 )
  {
    if ( v72 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v85, (__m128i *)v10[1].m128i_i16) )
    {
      v16 = v25;
    }
    else
    {
      v16 = MiCapturePageFileInfoInline((unsigned __int64 *)&v10[1], v21, v21);
      v10[2].m128i_i8[2] |= 0x10u;
    }
    v23->m128i_i64[0] &= ~2uLL;
  }
  else if ( !v72 && (((unsigned __int8)v24 >> 2) & (unsigned __int8)v21) != 0 )
  {
    v16 = MiCapturePageFileInfoInline((unsigned __int64 *)&v10[1], v21, v21);
    v10[2].m128i_i8[2] |= 0x10u;
  }
  MiLockNestedPageAtDpcInline(v15);
  MiFinalizePageAttribute(v15, v10[2].m128i_u8[2] >> 6, 1u);
  MiCopyPfnEntryEx(v15, (__int64)v10);
  if ( (unsigned int)MiGetPfnPriority(v26) < 5 )
    *(_BYTE *)(v15 + 35) = *(_BYTE *)(v15 + 35) & 0xF8 | 5;
  v27 = ContainingPageTable;
  *(_QWORD *)(v15 + 8) = v88;
  *(_QWORD *)(v15 + 40) = *(_QWORD *)(v15 + 40) & 0xFFFFFFF000000000uLL | v27 & 0xFFFFFFFFFLL | 0x8000000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY(v15 + 16);
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v72 )
  {
    if ( (v23->m128i_i64[0] & 4) != 0 )
    {
      v23->m128i_i64[0] &= ~4uLL;
      if ( v16 )
        v16 &= ~4uLL;
    }
  }
  v28 = v77 ^ (v77 ^ (a7 << 12)) & 0xFFFFFFFFF000LL;
  v77 = v28;
  v29 = v28;
  if ( (v28 & 0x800) != 0 )
  {
    v28 = v28 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
    v77 = v28;
    v29 = v28;
  }
  MiWriteValidPteNewPage((__int64 *)a2, v28, 0);
  if ( !v72 )
    *(_QWORD *)(v87 + 56) = 1LL;
  *(_QWORD *)v7 = 0LL;
  v30 = v29;
  if ( MiPteInShadowRange(v7) )
  {
    HasShadow = MiPteHasShadow();
    v32 = 1LL;
    if ( HasShadow )
    {
      v33 = 1;
      if ( !HIBYTE(word_140C4E048) && (v29 & 1) != 0 )
        v30 = v29 | 0x8000000000000000uLL;
      goto LABEL_47;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v29 & 1) != 0 )
      v30 = v29 | 0x8000000000000000uLL;
  }
  else
  {
    v32 = 1LL;
  }
  v33 = 0;
LABEL_47:
  *(_QWORD *)v7 = v30;
  if ( v33 )
    MiWritePteShadow(v7, v30);
  v10[1].m128i_i64[1] |= 0x4000000000000000uLL;
  v10[2].m128i_i8[2] |= 7u;
  _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v34 = v79;
  MiInsertTbFlushEntry(v86, v79, v32, 0);
  if ( v16 )
    MiReleasePageFileInfo(
      *(_QWORD *)(qword_140C4E688 + 8 * (((unsigned __int64)v10[2].m128i_i64[1] >> 39) & 0x3FF)),
      v16,
      1);
  v81 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v81, v35, v36, v37);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  v38 = *(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v20 + 24) = v38;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v72 != 1 )
    goto LABEL_68;
  v39 = v78;
  MiReturnCommit(v78, 1LL);
  v40 = 1LL;
  if ( (ULONG_PTR *)v39 != &MiSystemPartition )
    goto LABEL_65;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_65;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
  {
    do
    {
      v38 = (unsigned int)(CachedResidentAvailable + 1);
      v44 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
              v38,
              CachedResidentAvailable);
      v43 = (_DWORD)CachedResidentAvailable == v44;
      LODWORD(CachedResidentAvailable) = v44;
      if ( v43 )
        goto LABEL_66;
    }
    while ( v44 != -1 && (unsigned __int64)(v44 + 1LL) <= 0x100 );
  }
  v38 = 192LL;
  if ( (int)CachedResidentAvailable > 192
    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
  {
    v40 = (int)CachedResidentAvailable - 192 + 1LL;
  }
  if ( v40 )
LABEL_65:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 7168), v40);
LABEL_66:
  if ( (ULONG_PTR *)v39 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EFF8, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_68:
  v45 = v84;
  if ( (*(_BYTE *)(v84 + 184) & 7) == 0 )
    MiSetWsleProtection(v38, v34, 0LL);
  MiUpdateWorkingSetPrivateSize(v45, v34, -1LL, 0LL);
LABEL_108:
  if ( (*(_BYTE *)(v45 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v76 )
  {
    if ( a7 == -1 )
      v67 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v67 = v7 | 1;
    *((_QWORD *)&v92 + 1) = v67;
    v93[0] = &v91;
    v93[1] = 32LL;
    v68 = *(_DWORD *)(EtwpHostSiloState + 4224);
    while ( 1 )
    {
      v43 = !_BitScanForward(&v71, v68);
      if ( v43 )
        break;
      v68 &= v68 - 1;
      v69 = v71;
      v70 = 32LL * v71 + EtwpHostSiloState + 4260;
      if ( v70 )
      {
        if ( (*(_DWORD *)(v70 + 4) & 0x8000001) != 0 )
          EtwpLogKernelEvent(
            (__int64)v93,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2 * v69 + 4208),
            1u,
            0x27Au,
            0x11401B02u);
      }
    }
  }
  return v10;
}
