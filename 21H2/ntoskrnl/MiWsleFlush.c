/*
 * XREFs of MiWsleFlush @ 0x140332240
 * Callers:
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockedPageTableHasActiveLargeEntries @ 0x1402415BC (MiLockedPageTableHasActiveLargeEntries.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14027C6CC (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402872B0 (MiGetWorkingSetSwapSupport.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiReservePageFileSpace @ 0x1402E19E0 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x1402E2570 (MI_IS_RESET_PTE.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiGetWsleProtection @ 0x1402E5C50 (MiGetWsleProtection.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14031759C (MiUnlockNestedPageTableWritePte.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
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
  unsigned __int64 v25; // r8
  __int64 v26; // r11
  unsigned __int64 v27; // rdi
  struct _LIST_ENTRY *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int8 v31; // dl
  unsigned __int64 v32; // rdi
  int WsleProtection; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // r9
  __int64 v37; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  char *AnyMultiplexedVm; // rax
  __int64 v43; // r11
  __int64 v44; // rdi
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rdx
  struct _LIST_ENTRY *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  unsigned __int64 v51; // rdx
  volatile __int64 v52; // rdx
  char v53; // r11
  __int64 v54; // rdx
  __int64 v55; // r10
  __int64 v56; // rdx
  unsigned __int64 v57; // r8
  struct _LIST_ENTRY *v58; // rax
  __int64 v59; // rax
  __int64 v60; // r8
  unsigned __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // [rsp+20h] [rbp-58h] BYREF
  __int64 v65; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v66; // [rsp+30h] [rbp-48h]
  unsigned __int64 v69; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0xFFFFF6FB7DBED000uLL;
  v9 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
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
  v65 = v9;
  if ( (unsigned __int64)&v65 >= v8 && (unsigned __int64)&v65 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( !(unsigned int)MiPteHasShadow() || (v9 & 1) == 0 || (v9 & 0x20) != 0 && (v9 & 0x42) != 0 )
      goto LABEL_24;
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v65 >> 3) & 0x1FF));
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
  v64 = 0;
  v18 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v64, v16, v8, v4);
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
  if ( (unsigned int)MI_PFN_IS_PROTO(v17) )
  {
    v27 = *(_QWORD *)v7;
    LODWORD(v66) = v7;
    if ( (unsigned int)MiPteInShadowRange(v7)
      && (unsigned int)MiPteHasShadow()
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v28 )
      {
        v29 = v27 | 0x20;
        v30 = *((_QWORD *)&v28->Flink + ((v66 >> 3) & 0x1FF));
        if ( (v30 & 0x20) == 0 )
          v29 = v27;
        v27 = v29;
        if ( (v30 & 0x42) != 0 )
          v27 = v29 | 0x42;
      }
    }
    v31 = HIBYTE(v27) & 0xF | (16 * ((v27 >> 60) & 7));
    v32 = a2;
    WsleProtection = MiGetWsleProtection(a2, v31);
    if ( WsleProtection )
    {
      v65 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
    }
    else
    {
      v34 = MiSwizzleInvalidPte(((*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) << 16) | 0x400);
      v65 = v34;
      v37 = v34;
      if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 && (v9 & 0xA00) == 0 && v9 < 0 )
      {
        v65 = v34 | 8;
        v37 = v34 | 8;
      }
      if ( (*(_QWORD *)(v17 + 40) & 0x1000000000LL) != 0 || v35 <= 0 )
      {
        if ( (a3 & 2) != 0 )
        {
          if ( *(_QWORD *)(a1 - 400) )
          {
            CloneAddress = MiLocateCloneAddress(a1 - 1664, v36);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v39 + 1680) + 360LL) > CloneAddress[12] )
                v65 = v40 | 8;
            }
          }
        }
      }
      else
      {
        v65 = v37 | 0x800;
      }
    }
    goto LABEL_109;
  }
  if ( a2 >= v25 && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v24 = 1;
    MiLockPageTableInternal(v26, v7, 0);
    if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiLockedPageTableHasActiveLargeEntries(a2) )
    {
      MiUnlockPageTableInternal(a1, v7);
      goto LABEL_74;
    }
  }
  if ( ((*(_QWORD *)(v17 + 40) >> 60) & 7) == 4 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    v43 = a1;
    if ( (char *)a1 == AnyMultiplexedVm )
    {
      MiReleasePageFileSpace((__int64)&MiSystemPartition, *(_QWORD *)(v17 + 16), 1);
      v69 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v44 = MI_READ_PTE_LOCK_FREE(v69) | 2;
      v20 |= 4uLL;
      v65 = v44;
      v45 = v44;
      v6 = 1;
      if ( (unsigned int)MiPteInShadowRange(v7) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v46 = v44;
          if ( !HIBYTE(word_140C4E048) && (v44 & 1) != 0 )
            v46 = v44 | 0x8000000000000000uLL;
          *(_QWORD *)v7 = v46;
          MiWritePteShadow(v7, v46);
          goto LABEL_89;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v44 & 1) != 0 )
        {
          v45 = v44 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v7 = v45;
LABEL_89:
      MiInsertTbFlushEntry(a4, v69, 1LL, 0LL);
      MiFlushTbList(a4);
      goto LABEL_136;
    }
  }
  else
  {
    v43 = a1;
  }
  if ( (unsigned __int64)&v65 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v65 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v47 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v47 )
    {
      v48 = *((_QWORD *)&v47->Flink + (((unsigned __int64)&v65 >> 3) & 0x1FF));
      v49 = v9 | 0x20;
      if ( (v48 & 0x20) == 0 )
        v49 = v9;
      v9 = v49;
      if ( (v48 & 0x42) != 0 )
        v9 = v49 | 0x42;
    }
  }
  v50 = v9 & 0xFFFFFFFFF000LL | (32 * ((*(_DWORD *)(v17 + 16) >> 5) & 0x1F | 0x40LL));
  if ( qword_140C4DF80 )
  {
    if ( (qword_140C4DF80 & v50) != 0 )
      v50 |= 0x10uLL;
    else
      v50 |= qword_140C4DF80;
  }
  v65 = v50;
  if ( v24 )
  {
    MiUnlockNestedPageTableWritePte(v43, (volatile __int64 *)v7, v50, 0);
    v51 = a2 & 0xFFFFFFFFFFFFF000uLL;
LABEL_135:
    MiInsertTbFlushEntry(a4, v51, 1LL, 0LL);
    goto LABEL_136;
  }
  v32 = a2;
LABEL_109:
  v52 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
    LOBYTE(v52) = v52 | 0x20;
  if ( (MiFlags & 0x800) != 0 )
  {
    LOBYTE(v52) = 32;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v52 & 0x20) != 0 )
  {
    v54 = v65;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (v54 & 1) != 0 )
          v54 |= v55;
        *(_QWORD *)v7 = v54;
        MiWritePteShadow(v7, v54);
        goto LABEL_134;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v54 & 1) != 0 )
      {
        v54 |= v55;
      }
    }
    *(_QWORD *)v7 = v54;
LABEL_134:
    v51 = v32 & 0xFFFFFFFFFFFFF000uLL;
    goto LABEL_135;
  }
  v53 = _InterlockedExchange64((volatile __int64 *)v7, v65);
  if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v7, v65);
  if ( (v53 & 0x20) != 0 )
    goto LABEL_134;
LABEL_136:
  if ( v18 )
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 == 1 || (unsigned int)MI_PFN_IS_PROTO(v17) )
    return v20;
  v56 = *(_QWORD *)(v17 + 16);
  if ( (unsigned __int64)(v17 + 16) >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)(v17 + 16) <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow() )
  {
    if ( (v56 & 1) == 0 )
      goto LABEL_152;
    if ( (v56 & 0x20) == 0 || (v56 & 0x42) == 0 )
    {
      v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v58 )
      {
        v59 = *((_QWORD *)&v58->Flink + ((v57 >> 3) & 0x1FF));
        v60 = v56 | 0x20;
        if ( (v59 & 0x20) == 0 )
          v60 = v56;
        v56 = v60;
        if ( (v59 & 0x42) != 0 )
          v56 = v60 | 0x42;
      }
    }
  }
  if ( (v56 & 1) == 0 )
  {
LABEL_152:
    if ( (!v56 || !qword_140C4DF80 || (v56 & qword_140C4DF80) != 0)
      && *(_DWORD *)(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v17 + 40) >> 39) & 0x3FFLL)) + 1036LL)
      && (v56 & 2) == 0
      && !MiGetWorkingSetSwapSupport(a1, v56)
      && (!MI_IS_RESET_PTE(v61) || (*(_BYTE *)(v17 + 34) & 0x10) != 0 || (*(_BYTE *)v7 & 0x42) != 0)
      && v7 <= 0xFFFFF6BFFFFFFF78uLL
      && v7 >= 0xFFFFF68000000000uLL )
    {
      MiReservePageFileSpace(v63, v7, v62);
    }
  }
  return v20;
}
