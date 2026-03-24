/*
 * XREFs of MiConvertPrivateToProto @ 0x14036A050
 * Callers:
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14023C0AC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140269CD0 (MiLockLeafPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPfnEntryEx @ 0x14026DA30 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14026E434 (MiFinalizePageAttribute.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x140270DA4 (MiUpdatePfnPriority.c)
 *     MiRebuildPageTableLeafAges @ 0x140285060 (MiRebuildPageTableLeafAges.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402ACB24 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWriteValidPteNewPage @ 0x1402B68F8 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiIsPageOnBadList @ 0x14030356C (MiIsPageOnBadList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140309080 (MI_WSLE_LOG_ACCESS.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140336D20 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiRemoveWsle @ 0x140338FE0 (MiRemoveWsle.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x140349250 (MiIdentifyPfn.c)
 *     EtwpLogKernelEvent @ 0x140350000 (EtwpLogKernelEvent.c)
 *     MiComparePages @ 0x14036AA30 (MiComparePages.c)
 *     MiResolveProtoCombine @ 0x14036AB34 (MiResolveProtoCombine.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14036AF08 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14036AFB4 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiFillCombinePage @ 0x14036B00C (MiFillCombinePage.c)
 *     MiSetWsleProtection @ 0x14036B220 (MiSetWsleProtection.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055CF3C (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055D14C (MiReturnCrossPartitionCombineCharges.c)
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
  __int64 v51; // r13
  unsigned __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // rcx
  char WsleContents; // al
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  char v60; // di
  __int64 v61; // r9
  BOOL v62; // r14d
  __int8 v63; // cl
  __int64 v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rbx
  unsigned __int64 v70; // r15
  unsigned int v71; // ebx
  __int64 v72; // r8
  __int64 v73; // rcx
  unsigned int v74; // ecx
  char v75; // [rsp+30h] [rbp-B1h]
  unsigned __int8 v76; // [rsp+31h] [rbp-B0h]
  char v77; // [rsp+32h] [rbp-AFh]
  int v79; // [rsp+40h] [rbp-A1h]
  __int64 v80; // [rsp+48h] [rbp-99h] BYREF
  __int64 v81; // [rsp+50h] [rbp-91h]
  unsigned __int64 v82; // [rsp+58h] [rbp-89h]
  int v83; // [rsp+60h] [rbp-81h] BYREF
  int v84; // [rsp+64h] [rbp-7Dh] BYREF
  int v85; // [rsp+68h] [rbp-79h] BYREF
  int v86; // [rsp+6Ch] [rbp-75h] BYREF
  __int64 v87; // [rsp+70h] [rbp-71h]
  __int64 v88; // [rsp+78h] [rbp-69h]
  __int64 v89; // [rsp+80h] [rbp-61h]
  __int64 v90; // [rsp+88h] [rbp-59h]
  __int64 v91; // [rsp+98h] [rbp-49h]
  __int64 ContainingPageTable; // [rsp+A0h] [rbp-41h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-39h]
  __int128 v94; // [rsp+B0h] [rbp-31h] BYREF
  __int128 v95; // [rsp+C0h] [rbp-21h]
  _QWORD v96[2]; // [rsp+D0h] [rbp-11h] BYREF

  v7 = a3 + 48;
  v87 = a1;
  v94 = 0LL;
  v95 = 0LL;
  v89 = a6;
  v90 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v79 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v80 = MI_READ_PTE_LOCK_FREE(a2);
  v10 = (__m128i *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v80) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL);
  v11 = *(unsigned __int16 *)(a1 + 174);
  v12 = *a5;
  v81 = *a5;
  v13 = (__int64)(a2 << 25) >> 16;
  v82 = v13;
  v76 = 0;
  v14 = *(_QWORD *)(qword_140C4E648 + 8 * v11);
  v88 = v14;
  v75 = 1;
  if ( a7 == -1 )
  {
    v75 = 1;
    if ( v12 != v14 )
    {
      v76 = 1;
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v12, 1LL) )
        return 0LL;
      v75 = 0;
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
          v51 = v81;
          if ( v81 == *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v49 + 40) >> 39) & 0x3FFLL))
            && ((*(_BYTE *)(v49 + 34) & 7) == 6 || (*(_BYTE *)(v49 + 34) & 0x20) == 0) )
          {
            v52 = MiMapPageInHyperSpaceWorker((v49 + 0x58000000000LL) / 48, 0LL, 0x80000000);
            v77 = MiComparePages(v52, v13);
            LOBYTE(v53) = 17;
            MiUnmapPageInHyperSpaceWorker(v52, v53, 0x80000000);
            if ( v77 == 1 )
            {
              MiGetPfnPriority((__int64)v10);
              MiUpdatePfnPriority(v49);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockProtoPoolPage(v47, 0x11u);
            if ( v77 )
            {
              if ( dword_140C4E828 )
                MI_WSLE_LOG_ACCESS(v87, (_BYTE *)a2);
              v54 = MiSwizzleInvalidPte((v7 << 16) | 0x400) | 0x800;
              WsleContents = MiGetWsleContents(v55, v82);
              v85 = 0;
              v60 = WsleContents;
              while ( _interlockedbittestandset64(&v10[1].m128i_i32[2], 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v85, v57, v58, v59);
                while ( v10[1].m128i_i64[1] < 0 );
              }
              if ( (v10[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) == 1 && v10[2].m128i_i16[0] == 1 )
              {
                v62 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED((volatile __int64 *)a2, v54);
                if ( v79 )
                  MiIdentifyPfn(v10, (unsigned __int64 *)&v94);
                v63 = v10[2].m128i_i8[2];
                v10[1].m128i_i64[1] |= 0x4000000000000000uLL;
                v64 = v10[2].m128i_i64[1] & 0xFFFFFFFFFLL;
                v10[2].m128i_i8[2] = v63 | 7;
                _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                if ( v62 )
                  MiInsertTbFlushEntry(v89, v82, 1LL, 0);
                v44 = v87;
                LOBYTE(v61) = v60;
                MiRemoveWsle(v87, v82, 1LL, v61, 10, 1);
                MiRebuildPageTableLeafAges(v65, v82);
                v69 = 48 * v64 - 0x58000000000LL;
                v86 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v86, v66, v67, v68);
                  while ( *(__int64 *)(v69 + 24) < 0 );
                }
                MiDecrementShareCount(v69);
                _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( !v75 && _InterlockedIncrement64((volatile signed __int64 *)(v90 + 56)) != 1 )
                  MiReturnCrossPartitionCombineCharges(v51, 1LL);
                MiResolveProtoCombine(a2, v44, v7);
                goto LABEL_108;
              }
              _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            }
            v12 = v51;
            goto LABEL_79;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      MiUnlockProtoPoolPage(v47, 0x11u);
    }
    v12 = v81;
LABEL_79:
    if ( !v75 )
      MiReturnCrossPartitionCombineCharges(v12, v76);
    return 0LL;
  }
  v15 = 48 * a7 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(a7, v15, v10, (__int64)(a2 << 25) >> 16) )
    return 0LL;
  v91 = v7 & 0x7FFFFFFFFFFFFFFFLL;
  v16 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(v7);
  v20 = 48 * ContainingPageTable - 0x58000000000LL;
  if ( v12 != v88 )
  {
    if ( (unsigned int)MiGetCrossPartitionCombineCharges(v12, 0LL) )
    {
      v75 = 0;
      goto LABEL_6;
    }
    return 0LL;
  }
LABEL_6:
  v83 = 0;
  while ( _interlockedbittestandset64(&v10[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v83, v17, v18, v19);
    while ( v10[1].m128i_i64[1] < 0 );
  }
  v21 = 1;
  if ( (v10[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) != 1 || v10[2].m128i_i16[0] != 1 )
  {
    _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_79;
  }
  if ( v79 )
  {
    MiIdentifyPfn(v10, (unsigned __int64 *)&v94);
    v21 = 1;
  }
  if ( (v80 & 0x42) != 0 )
    v80 &= 0xFFFFFFFFFFFFFFBDuLL;
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
    if ( v75 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v88, (__m128i *)v10[1].m128i_i16) )
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
  else if ( !v75 )
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
  *(_QWORD *)(v15 + 8) = v91;
  *(_QWORD *)(v15 + 40) = *(_QWORD *)(v15 + 40) & 0xFFFFFFF000000000uLL | v25 & 0xFFFFFFFFFLL | 0x8000000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY(v15 + 16);
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v75 )
  {
    if ( (v22->m128i_i64[0] & 4) != 0 )
    {
      v22->m128i_i64[0] &= ~4uLL;
      if ( v16 )
        v16 &= ~4uLL;
    }
  }
  v26 = v80 ^ (v80 ^ (a7 << 12)) & 0xFFFFFFFFF000LL;
  v80 = v26;
  v27 = v26;
  if ( (v26 & 0x800) != 0 )
  {
    v26 = v26 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
    v80 = v26;
    v27 = v26;
  }
  MiWriteValidPteNewPage((__int64 *)a2, v26, 0);
  if ( !v75 )
    *(_QWORD *)(v90 + 56) = 1LL;
  *(_QWORD *)v7 = 0LL;
  v28 = v27;
  if ( MiPteInShadowRange(v7) )
  {
    HasShadow = MiPteHasShadow();
    v31 = 1LL;
    if ( HasShadow )
    {
      v32 = 1;
      if ( !HIBYTE(word_140C4E008) && (v27 & 1) != 0 )
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
  v33 = v82;
  MiInsertTbFlushEntry(v89, v82, v31, 0);
  if ( v16 )
    MiReleasePageFileInfo(
      *(_QWORD *)(qword_140C4E648 + 8 * (((unsigned __int64)v10[2].m128i_i64[1] >> 39) & 0x3FF)),
      v16,
      1);
  v84 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v84, v34, v35, v36);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  v37 = *(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v20 + 24) = v37;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v75 != 1 )
    goto LABEL_68;
  v38 = v81;
  MiReturnCommit(v81, 1LL);
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
    _InterlockedExchangeAdd64(&qword_140C4EFB8, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_68:
  v44 = v87;
  if ( (*(_BYTE *)(v87 + 184) & 7) == 0 )
    MiSetWsleProtection(v37, v33, 0LL);
  MiUpdateWorkingSetPrivateSize(v44, v33, -1LL, 0LL);
LABEL_108:
  if ( (*(_BYTE *)(v44 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v79 )
  {
    if ( a7 == -1 )
      v70 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v70 = v7 | 1;
    *((_QWORD *)&v95 + 1) = v70;
    v96[0] = &v94;
    v96[1] = 32LL;
    v71 = *(_DWORD *)(EtwpHostSiloState + 4224);
    while ( 1 )
    {
      v42 = !_BitScanForward(&v74, v71);
      if ( v42 )
        break;
      v71 &= v71 - 1;
      v72 = v74;
      v73 = 32LL * v74 + EtwpHostSiloState + 4260;
      if ( v73 )
      {
        if ( (*(_DWORD *)(v73 + 4) & 0x8000001) != 0 )
          EtwpLogKernelEvent(
            (__int64)v96,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2 * v72 + 4208),
            1u,
            0x27Au,
            0x11401B02u);
      }
    }
  }
  return v10;
}
