/*
 * XREFs of MiWsleFlush @ 0x1403274F0
 * Callers:
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiReservePageFileSpace @ 0x14023D190 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x14023DD20 (MI_IS_RESET_PTE.c)
 *     MiLocateCloneAddress @ 0x14023EF08 (MiLocateCloneAddress.c)
 *     MiGetWsleProtection @ 0x140241400 (MiGetWsleProtection.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14025B15C (MiCaptureWriteWatchDirtyBit.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiLockedPageTableHasActiveLargeEntries @ 0x1402C309C (MiLockedPageTableHasActiveLargeEntries.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402D5F60 (MiGetWorkingSetSwapSupport.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x140303154 (MiReleasePageFileSpace.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14030C84C (MiUnlockNestedPageTableWritePte.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
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
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r9
  __int64 v38; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v40; // rcx
  char *AnyMultiplexedVm; // rax
  __int64 v43; // r11
  __int64 v44; // rdi
  unsigned __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned __int64 v48; // rdx
  struct _LIST_ENTRY *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  volatile __int64 v53; // rdx
  char v54; // r11
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r10
  __int64 v58; // rdx
  unsigned __int64 v59; // r8
  struct _LIST_ENTRY *v60; // rax
  __int64 v61; // rax
  __int64 v62; // r8
  unsigned __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // [rsp+20h] [rbp-58h] BYREF
  __int64 v67; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v68; // [rsp+30h] [rbp-48h]
  unsigned __int64 v71; // [rsp+88h] [rbp+10h]

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
  v67 = v9;
  if ( (unsigned __int64)&v67 >= v8 && (unsigned __int64)&v67 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( !(unsigned int)MiPteHasShadow() || (v9 & 1) == 0 || (v9 & 0x20) != 0 && (v9 & 0x42) != 0 )
      goto LABEL_24;
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v67 >> 3) & 0x1FF));
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
  v66 = 0;
  v18 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v66, v16, v8, v4);
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
    LODWORD(v68) = v7;
    if ( (unsigned int)MiPteInShadowRange(v7, 0xFFFFF6FFFFFFFFFFuLL)
      && (unsigned int)MiPteHasShadow()
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v28 )
      {
        v29 = v27 | 0x20;
        v30 = *((_QWORD *)&v28->Flink + ((v68 >> 3) & 0x1FF));
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
      v67 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
    }
    else
    {
      v35 = MiSwizzleInvalidPte(((*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) << 16) | 0x400);
      v34 = v35;
      v67 = v35;
      v38 = v35;
      if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 && (v9 & 0xA00) == 0 && v9 < 0 )
      {
        v34 = v35 | 8;
        v67 = v35 | 8;
        v38 = v35 | 8;
      }
      if ( (*(_QWORD *)(v17 + 40) & 0x1000000000LL) != 0 || v36 <= 0 )
      {
        if ( (a3 & 2) != 0 )
        {
          if ( *(_QWORD *)(a1 - 400) )
          {
            CloneAddress = MiLocateCloneAddress(a1 - 1664, v37);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v40 + 1680) + 360LL) > CloneAddress[12] )
              {
                v34 |= 8uLL;
                v67 = v34;
              }
            }
          }
        }
      }
      else
      {
        v67 = v38 | 0x800;
      }
    }
    goto LABEL_109;
  }
  if ( a2 >= v25 && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v24 = 1;
    MiLockPageTableInternal(v26, v7, 0LL);
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
      v71 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v44 = MI_READ_PTE_LOCK_FREE(v71) | 2;
      v20 |= 4uLL;
      v67 = v44;
      v45 = v44;
      v6 = 1;
      if ( (unsigned int)MiPteInShadowRange(v7, v46) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v48 = v44;
          if ( !HIBYTE(word_140C4E008) && (v44 & 1) != 0 )
            v48 = v44 | 0x8000000000000000uLL;
          *(_QWORD *)v7 = v48;
          MiWritePteShadow(v7, v48, v47);
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
      MiInsertTbFlushEntry(a4, v71, 1LL, 0LL);
      MiFlushTbList(a4);
      goto LABEL_136;
    }
  }
  else
  {
    v43 = a1;
  }
  if ( (unsigned __int64)&v67 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v67 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v49 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v49 )
    {
      v50 = *((_QWORD *)&v49->Flink + (((unsigned __int64)&v67 >> 3) & 0x1FF));
      v51 = v9 | 0x20;
      if ( (v50 & 0x20) == 0 )
        v51 = v9;
      v9 = v51;
      if ( (v50 & 0x42) != 0 )
        v9 = v51 | 0x42;
    }
  }
  v34 = v9 & 0xFFFFFFFFF000LL | (32 * ((*(_DWORD *)(v17 + 16) >> 5) & 0x1F | 0x40LL));
  if ( qword_140C4DF40 )
  {
    if ( (qword_140C4DF40 & v34) != 0 )
      v34 |= 0x10uLL;
    else
      v34 |= qword_140C4DF40;
  }
  v67 = v34;
  if ( v24 )
  {
    MiUnlockNestedPageTableWritePte(v43, (volatile __int64 *)v7, v34, 0);
    v52 = a2 & 0xFFFFFFFFFFFFF000uLL;
LABEL_135:
    MiInsertTbFlushEntry(a4, v52, 1LL, 0LL);
    goto LABEL_136;
  }
  v32 = a2;
LABEL_109:
  v53 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
    LOBYTE(v53) = v53 | 0x20;
  if ( (MiFlags & 0x800) != 0 )
  {
    LOBYTE(v53) = 32;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v53 & 0x20) != 0 )
  {
    v55 = v67;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) && (v55 & 1) != 0 )
          v55 |= v57;
        *(_QWORD *)v7 = v55;
        MiWritePteShadow(v7, v55, v56);
        goto LABEL_134;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v55 & 1) != 0 )
      {
        v55 |= v57;
      }
    }
    *(_QWORD *)v7 = v55;
LABEL_134:
    v52 = v32 & 0xFFFFFFFFFFFFF000uLL;
    goto LABEL_135;
  }
  v54 = _InterlockedExchange64((volatile __int64 *)v7, v67);
  if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v7, v67, v34);
  if ( (v54 & 0x20) != 0 )
    goto LABEL_134;
LABEL_136:
  if ( v18 )
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 == 1 || (unsigned int)MI_PFN_IS_PROTO(v17) )
    return v20;
  v58 = *(_QWORD *)(v17 + 16);
  if ( (unsigned __int64)(v17 + 16) >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)(v17 + 16) <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow() )
  {
    if ( (v58 & 1) == 0 )
      goto LABEL_152;
    if ( (v58 & 0x20) == 0 || (v58 & 0x42) == 0 )
    {
      v60 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v60 )
      {
        v61 = *((_QWORD *)&v60->Flink + ((v59 >> 3) & 0x1FF));
        v62 = v58 | 0x20;
        if ( (v61 & 0x20) == 0 )
          v62 = v58;
        v58 = v62;
        if ( (v61 & 0x42) != 0 )
          v58 = v62 | 0x42;
      }
    }
  }
  if ( (v58 & 1) == 0 )
  {
LABEL_152:
    if ( (!v58 || !qword_140C4DF40 || (v58 & qword_140C4DF40) != 0)
      && *(_DWORD *)(*(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v17 + 40) >> 39) & 0x3FFLL)) + 1036LL)
      && (v58 & 2) == 0
      && !MiGetWorkingSetSwapSupport(a1)
      && (!MI_IS_RESET_PTE(v63) || (*(_BYTE *)(v17 + 34) & 0x10) != 0 || (*(_BYTE *)v7 & 0x42) != 0)
      && v7 <= 0xFFFFF6BFFFFFFF78uLL
      && v7 >= 0xFFFFF68000000000uLL )
    {
      MiReservePageFileSpace(v65, v7, v64);
    }
  }
  return v20;
}
