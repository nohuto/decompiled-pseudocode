/*
 * XREFs of MiWsleFlush @ 0x1402B30D0
 * Callers:
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14024B47C (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiGetWsleProtection @ 0x1402B6070 (MiGetWsleProtection.c)
 *     MiReservePageFileSpace @ 0x1402BA590 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x1402BB120 (MI_IS_RESET_PTE.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402F237C (MiGetWorkingSetSwapSupport.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14032EA88 (MiUnlockNestedPageTableWritePte.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x14033A8E4 (MiLocateCloneAddress.c)
 *     MiLockedPageTableHasActiveLargeEntries @ 0x14035129C (MiLockedPageTableHasActiveLargeEntries.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

unsigned __int64 __fastcall MiWsleFlush(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // r11
  int v6; // r14d
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  struct _LIST_ENTRY *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // r13
  char v19; // al
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r11
  int v24; // edi
  int v25; // eax
  unsigned __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r11
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _LIST_ENTRY *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rdi
  int WsleProtection; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 CloneAddress; // rax
  __int64 v49; // rcx
  char *AnyMultiplexedVm; // rax
  __int64 v52; // r11
  __int64 v53; // rdi
  unsigned __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rdx
  _KPROCESS *v60; // rdx
  struct _LIST_ENTRY *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  __int64 v65; // rdx
  char v66; // r11
  __int64 v67; // rdx
  __int64 v68; // r10
  __int64 v69; // rcx
  __int64 v70; // r9
  __int64 v71; // rdx
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // r8
  struct _LIST_ENTRY *v74; // rax
  __int64 v75; // rax
  __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // r9
  int v79; // [rsp+20h] [rbp-58h] BYREF
  __int64 v80; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v81; // [rsp+30h] [rbp-48h]
  unsigned __int64 v84; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0xFFFFF6FB7DBED000uLL;
  v9 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFF6FB7DBED000uLL, a2)
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
      v12 = v9 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = v9;
      v9 = v12;
      if ( (v11 & 0x42) != 0 )
        v9 = v12 | 0x42;
    }
  }
  v80 = v9;
  if ( (unsigned __int64)&v80 >= v8 && (unsigned __int64)&v80 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( !(unsigned int)MiPteHasShadow(&v80, v9, v8, v4) || (v9 & 1) == 0 || (v9 & 0x20) != 0 && (v9 & 0x42) != 0 )
      goto LABEL_24;
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v80 >> 3) & 0x1FF));
      v13 = v9 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v13 = v9;
      if ( (v15 & 0x42) != 0 )
        v13 |= 0x42uLL;
      goto LABEL_24;
    }
  }
  v13 = v9;
LABEL_24:
  v16 = (v13 >> 12) & 0xFFFFFFFFFLL;
  v17 = 48 * v16 - 0x58000000000LL;
  if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && !(unsigned int)MI_PFN_IS_PROTO(48 * v16 - 0x58000000000LL) )
    return 0LL;
  if ( (*(_BYTE *)(v5 + 184) & 7) == 0 )
  {
    v18 = 0LL;
    goto LABEL_33;
  }
  if ( *(_WORD *)(v17 + 32) > 1u )
    return 0LL;
  v79 = 0;
  v18 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v79, v16, v8, v4);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
    v5 = a1;
  }
LABEL_33:
  if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && !(unsigned int)MI_PFN_IS_PROTO(v17)
    || (v19 = *(_BYTE *)(v5 + 184) & 7) != 0 && *(_WORD *)(v17 + 32) > 1u )
  {
LABEL_74:
    if ( v18 )
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v20 = v9 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( !v19
    && !(unsigned int)MI_PFN_IS_PROTO(v17)
    && v7 <= v21 - 0x98000000000LL
    && v7 >= 0xFFFFF68000000000uLL
    && (v9 & 0x42) != 0
    && (*(_DWORD *)(v23 - 540) & 0x8000) != 0 )
  {
    MiCaptureWriteWatchDirtyBit(v23 - 1664, v22, 0LL);
  }
  v24 = 0;
  v25 = MI_PFN_IS_PROTO(v17);
  v29 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( v25 )
  {
    v30 = *(_QWORD *)v7;
    LODWORD(v81) = v7;
    if ( MiPteInShadowRange(v7)
      && (unsigned int)MiPteHasShadow(v32, v31, v33, v34)
      && (v30 & 1) != 0
      && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
    {
      v35 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v35 )
      {
        v36 = v30 | 0x20;
        v37 = *((_QWORD *)&v35->Flink + ((v81 >> 3) & 0x1FF));
        if ( (v37 & 0x20) == 0 )
          v36 = v30;
        v30 = v36;
        if ( (v37 & 0x42) != 0 )
          v30 = v36 | 0x42;
      }
    }
    v38 = HIBYTE(v30) & 0xFu | (unsigned __int8)(16 * ((v30 >> 60) & 7));
    v39 = a2;
    WsleProtection = MiGetWsleProtection(a2, v38);
    if ( WsleProtection )
    {
      v80 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL), v41, v42, v43);
    }
    else
    {
      v45 = MiSwizzleInvalidPte(
              ((*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) << 16) | 0x400,
              *(_QWORD *)(v17 + 8),
              v42,
              *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL);
      v44 = v45;
      v80 = v45;
      v47 = v45;
      if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 && (v9 & 0xA00) == 0 && v9 < 0 )
      {
        v44 = v45 | 8;
        v80 = v45 | 8;
        v47 = v45 | 8;
      }
      if ( (*(_QWORD *)(v17 + 40) & 0x1000000000LL) != 0 || v46 <= 0 )
      {
        if ( (a3 & 2) != 0 )
        {
          if ( *(_QWORD *)(a1 - 400) )
          {
            CloneAddress = MiLocateCloneAddress(a1 - 1664, v27);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v49 + 1680) + 360LL) > *(_QWORD *)(CloneAddress + 96) )
              {
                v44 |= 8uLL;
                v80 = v44;
              }
            }
          }
        }
      }
      else
      {
        v80 = v47 | 0x800;
      }
    }
    goto LABEL_109;
  }
  if ( a2 >= v26 && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v24 = 1;
    MiLockPageTableInternal(v28, v7, 0LL);
    if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiLockedPageTableHasActiveLargeEntries(a2) )
    {
      MiUnlockPageTableInternal(a1, v7);
      goto LABEL_74;
    }
  }
  if ( ((*(_QWORD *)(v17 + 40) >> 60) & 7) == 4 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    v52 = a1;
    if ( (char *)a1 == AnyMultiplexedVm )
    {
      MiReleasePageFileSpace((__int64)&MiSystemPartition, *(_QWORD *)(v17 + 16));
      v84 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v53 = MI_READ_PTE_LOCK_FREE(v84) | 2;
      v20 |= 4uLL;
      v80 = v53;
      v54 = v53;
      v6 = 1;
      if ( MiPteInShadowRange(v7) )
      {
        if ( (unsigned int)MiPteHasShadow(v56, v55, v57, v58) )
        {
          v59 = v53;
          if ( !HIBYTE(word_140C4DE08) && (v53 & 1) != 0 )
            v59 = v53 | 0x8000000000000000uLL;
          *(_QWORD *)v7 = v59;
          MiWritePteShadow(v7, v59);
          goto LABEL_89;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v53 & 1) != 0 )
        {
          v54 = v53 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v7 = v54;
LABEL_89:
      MiInsertTbFlushEntry(a4, v84, 1LL, 0);
      MiFlushTbList(a4, v60);
      goto LABEL_136;
    }
  }
  else
  {
    v52 = a1;
  }
  if ( (unsigned __int64)&v80 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v80 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v80, v29, v26, v27)
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v61 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v61 )
    {
      v62 = *((_QWORD *)&v61->Flink + (((unsigned __int64)&v80 >> 3) & 0x1FF));
      v63 = v9 | 0x20;
      if ( (v62 & 0x20) == 0 )
        v63 = v9;
      v9 = v63;
      if ( (v62 & 0x42) != 0 )
        v9 = v63 | 0x42;
    }
  }
  v44 = v9 & 0xFFFFFFFFF000LL | (32 * ((*(_DWORD *)(v17 + 16) >> 5) & 0x1F | 0x40LL));
  if ( qword_140C4DD40 )
  {
    if ( (qword_140C4DD40 & v44) != 0 )
      v44 |= 0x10uLL;
    else
      v44 |= qword_140C4DD40;
  }
  v80 = v44;
  if ( v24 )
  {
    MiUnlockNestedPageTableWritePte(v52, v7, v44, 0LL, v79, v80, v81);
    v64 = a2 & 0xFFFFFFFFFFFFF000uLL;
LABEL_135:
    MiInsertTbFlushEntry(a4, v64, 1LL, 0);
    goto LABEL_136;
  }
  v39 = a2;
LABEL_109:
  v65 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v65, v44, v27) )
  {
    LOBYTE(v65) = v65 | 0x20;
  }
  if ( (MiFlags & 0x800) != 0 )
  {
    LOBYTE(v65) = 32;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v65 & 0x20) != 0 )
  {
    v67 = v80;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v80, v44, v27) )
      {
        if ( !HIBYTE(word_140C4DE08) && (v67 & 1) != 0 )
          v67 |= v68;
        *(_QWORD *)v7 = v67;
        MiWritePteShadow(v7, v67);
        goto LABEL_134;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v67 & 1) != 0 )
      {
        v67 |= v68;
      }
    }
    *(_QWORD *)v7 = v67;
LABEL_134:
    v64 = v39 & 0xFFFFFFFFFFFFF000uLL;
    goto LABEL_135;
  }
  v66 = _InterlockedExchange64((volatile __int64 *)v7, v80);
  if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v7, v80);
  if ( (v66 & 0x20) != 0 )
    goto LABEL_134;
LABEL_136:
  if ( v18 )
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 == 1 || (unsigned int)MI_PFN_IS_PROTO(v17) )
    return v20;
  v71 = *(_QWORD *)(v17 + 16);
  v72 = v17 + 16;
  if ( (unsigned __int64)(v17 + 16) >= 0xFFFFF6FB7DBED000uLL
    && v72 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v69, v71, v72, v70) )
  {
    if ( (v71 & 1) == 0 )
      goto LABEL_152;
    if ( (v71 & 0x20) == 0 || (v71 & 0x42) == 0 )
    {
      v74 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v74 )
      {
        v75 = *((_QWORD *)&v74->Flink + ((v73 >> 3) & 0x1FF));
        v76 = v71 | 0x20;
        if ( (v75 & 0x20) == 0 )
          v76 = v71;
        v71 = v76;
        if ( (v75 & 0x42) != 0 )
          v71 = v76 | 0x42;
      }
    }
  }
  if ( (v71 & 1) == 0 )
  {
LABEL_152:
    if ( (!v71 || !qword_140C4DD40 || (v71 & qword_140C4DD40) != 0)
      && *(_DWORD *)(*(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v17 + 40) >> 39) & 0x3FFLL)) + 1036LL)
      && (v71 & 2) == 0
      && !MiGetWorkingSetSwapSupport(a1)
      && (!(unsigned int)MI_IS_RESET_PTE(v77) || (*(_BYTE *)(v17 + 34) & 0x10) != 0 || (*(_BYTE *)v7 & 0x42) != 0)
      && v7 <= 0xFFFFF6BFFFFFFF78uLL
      && v7 >= 0xFFFFF68000000000uLL )
    {
      MiReservePageFileSpace(v78, v7);
    }
  }
  return v20;
}
