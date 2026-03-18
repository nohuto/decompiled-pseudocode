/*
 * XREFs of MiWsleFlush @ 0x140220450
 * Callers:
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiGetWsleProtection @ 0x1402233F0 (MiGetWsleProtection.c)
 *     MiReservePageFileSpace @ 0x140227910 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x1402284A0 (MI_IS_RESET_PTE.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A44AC (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x1402AB620 (MiReleasePageFileSpace.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402CCB68 (MiGetWorkingSetSwapSupport.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402F2CE8 (MiUnlockNestedPageTableWritePte.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiLockedPageTableHasActiveLargeEntries @ 0x1403133EC (MiLockedPageTableHasActiveLargeEntries.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

unsigned __int64 __fastcall MiWsleFlush(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r11
  int v5; // r14d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r8
  __int64 v8; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  struct _LIST_ENTRY *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // r13
  char v18; // al
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 v21; // r9
  __int64 v22; // r11
  int v23; // edi
  int v24; // eax
  unsigned __int64 v25; // r8
  __int64 v26; // r11
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct _LIST_ENTRY *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rdi
  int WsleProtection; // eax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 CloneAddress; // rax
  __int64 v43; // rcx
  __int64 AnyMultiplexedVm; // rax
  __int64 v46; // r9
  __int64 v47; // r11
  __int64 v48; // rdi
  unsigned __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  __int64 v54; // rdx
  struct _LIST_ENTRY *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  unsigned __int64 v58; // rdx
  char v59; // r11
  __int64 v60; // rdx
  __int64 v61; // r10
  __int64 v62; // rcx
  __int64 v63; // rdx
  unsigned __int64 v64; // r8
  struct _LIST_ENTRY *v65; // rax
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // r9
  int v70; // [rsp+20h] [rbp-58h] BYREF
  __int64 v71; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v72; // [rsp+30h] [rbp-48h]
  unsigned __int64 v75; // [rsp+88h] [rbp+10h]

  v4 = a1;
  v5 = 0;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0xFFFFF6FB7DBED000uLL;
  v8 = *(_QWORD *)v6;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL
    && v6 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, 0xFFFFF6FB7DBED7F8uLL)
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
      v11 = v8 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = v8;
      v8 = v11;
      if ( (v10 & 0x42) != 0 )
        v8 = v11 | 0x42;
    }
  }
  v71 = v8;
  if ( (unsigned __int64)&v71 >= v7 && (unsigned __int64)&v71 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( !(unsigned int)MiPteHasShadow(&v71, v8) || (v8 & 1) == 0 || (v8 & 0x20) != 0 && (v8 & 0x42) != 0 )
      goto LABEL_24;
    v13 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v13 )
    {
      v14 = *((_QWORD *)&v13->Flink + (((unsigned __int64)&v71 >> 3) & 0x1FF));
      v12 = v8 | 0x20;
      if ( (v14 & 0x20) == 0 )
        v12 = v8;
      if ( (v14 & 0x42) != 0 )
        v12 |= 0x42uLL;
      goto LABEL_24;
    }
  }
  v12 = v8;
LABEL_24:
  v15 = (v12 >> 12) & 0xFFFFFFFFFLL;
  v16 = 48 * v15 - 0x58000000000LL;
  if ( (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1
    && !(unsigned int)MI_PFN_IS_PROTO(48 * v15 - 0x58000000000LL, v15, v7) )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(v4 + 184) & 7) == 0 )
  {
    v17 = 0LL;
    goto LABEL_33;
  }
  if ( *(_WORD *)(v16 + 32) > 1u )
    return 0LL;
  v70 = 0;
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v70);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
    v4 = a1;
  }
LABEL_33:
  if ( (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && !(unsigned int)MI_PFN_IS_PROTO(v16, v15, v7)
    || (v18 = *(_BYTE *)(v4 + 184) & 7) != 0 && *(_WORD *)(v16 + 32) > 1u )
  {
LABEL_74:
    if ( v17 )
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v19 = 0x3FFFFFFF78LL;
  v20 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( !v18
    && !(unsigned int)MI_PFN_IS_PROTO(v16, 0x3FFFFFFF78LL, v7)
    && v6 <= v19 - 0x98000000000LL
    && v6 >= 0xFFFFF68000000000uLL
    && (v8 & 0x42) != 0
    && (*(_DWORD *)(v22 - 540) & 0x8000) != 0 )
  {
    MiCaptureWriteWatchDirtyBit(v22 - 1664, v21, 0LL);
  }
  v23 = 0;
  v24 = MI_PFN_IS_PROTO(v16, v19, 0xFFFFF68000000000uLL);
  v27 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( v24 )
  {
    v28 = *(_QWORD *)v6;
    LODWORD(v72) = v6;
    if ( (unsigned int)MiPteInShadowRange(v6, 0xFFFFF6FFFFFFFFFFuLL)
      && (unsigned int)MiPteHasShadow(v30, v29)
      && (v28 & 1) != 0
      && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
    {
      v31 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v31 )
      {
        v32 = v28 | 0x20;
        v33 = *((_QWORD *)&v31->Flink + ((v72 >> 3) & 0x1FF));
        if ( (v33 & 0x20) == 0 )
          v32 = v28;
        v28 = v32;
        if ( (v33 & 0x42) != 0 )
          v28 = v32 | 0x42;
      }
    }
    v34 = HIBYTE(v28) & 0xFu | (unsigned __int8)(16 * ((v28 >> 60) & 7));
    v35 = a2;
    WsleProtection = MiGetWsleProtection(a2, v34);
    if ( WsleProtection )
    {
      v71 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
    }
    else
    {
      v38 = MiSwizzleInvalidPte(((*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) << 16) | 0x400);
      v37 = v38;
      v71 = v38;
      v41 = v38;
      if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 && (v8 & 0xA00) == 0 && v8 < 0 )
      {
        v37 = v38 | 8;
        v71 = v38 | 8;
        v41 = v38 | 8;
      }
      if ( (*(_QWORD *)(v16 + 40) & 0x1000000000LL) != 0 || v39 <= 0 )
      {
        if ( (a3 & 2) != 0 )
        {
          if ( *(_QWORD *)(a1 - 400) )
          {
            CloneAddress = MiLocateCloneAddress(a1 - 1664, v40);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v43 + 1680) + 360LL) > *(_QWORD *)(CloneAddress + 96) )
              {
                v37 |= 8uLL;
                v71 = v37;
              }
            }
          }
        }
      }
      else
      {
        v71 = v41 | 0x800;
      }
    }
    goto LABEL_109;
  }
  if ( a2 >= v25 && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v23 = 1;
    MiLockPageTableInternal(v26, v6, 0LL);
    if ( (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiLockedPageTableHasActiveLargeEntries(a2) )
    {
      MiUnlockPageTableInternal(a1, v6);
      goto LABEL_74;
    }
  }
  if ( ((*(_QWORD *)(v16 + 40) >> 60) & 7) == 4 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
    v47 = a1;
    if ( a1 == AnyMultiplexedVm )
    {
      MiReleasePageFileSpace(&MiSystemPartition, *(_QWORD *)(v16 + 16), 1LL, v46);
      v75 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v48 = MI_READ_PTE_LOCK_FREE(v75) | 2;
      v20 |= 4uLL;
      v71 = v48;
      v49 = v48;
      v5 = 1;
      if ( (unsigned int)MiPteInShadowRange(v6, v50) )
      {
        if ( (unsigned int)MiPteHasShadow(v52, v51) )
        {
          v53 = v48;
          if ( !HIBYTE(word_140C4DF48) && (v48 & 1) != 0 )
            v53 = v48 | 0x8000000000000000uLL;
          *(_QWORD *)v6 = v53;
          MiWritePteShadow(v6, v53);
          goto LABEL_89;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v48 & 1) != 0 )
        {
          v49 = v48 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v49;
LABEL_89:
      MiInsertTbFlushEntry(a4, v75, 1LL, 0);
      MiFlushTbList(a4);
      goto LABEL_136;
    }
  }
  else
  {
    v47 = a1;
  }
  if ( (unsigned __int64)&v71 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v71 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v71, v27)
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v55 )
    {
      v56 = *((_QWORD *)&v55->Flink + (((unsigned __int64)&v71 >> 3) & 0x1FF));
      v57 = v8 | 0x20;
      if ( (v56 & 0x20) == 0 )
        v57 = v8;
      v8 = v57;
      if ( (v56 & 0x42) != 0 )
        v8 = v57 | 0x42;
    }
  }
  v37 = v8 & 0xFFFFFFFFF000LL | (32 * ((*(_DWORD *)(v16 + 16) >> 5) & 0x1F | 0x40LL));
  if ( qword_140C4DE80 )
  {
    if ( (qword_140C4DE80 & v37) != 0 )
      v37 |= 0x10uLL;
    else
      v37 |= qword_140C4DE80;
  }
  v71 = v37;
  if ( v23 )
  {
    MiUnlockNestedPageTableWritePte(v47, v6, v37, 0LL, v70);
    v58 = a2 & 0xFFFFFFFFFFFFF000uLL;
LABEL_135:
    MiInsertTbFlushEntry(a4, v58, 1LL, 0);
    goto LABEL_136;
  }
  v35 = a2;
LABEL_109:
  v54 = *(_QWORD *)v6;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL
    && v6 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v54) )
  {
    v54 |= 0x20uLL;
  }
  if ( (MiFlags & 0x800) != 0 )
  {
    v54 = 32LL;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v54 & 0x20) != 0 )
  {
    v60 = v71;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v71) )
      {
        if ( !HIBYTE(word_140C4DF48) && (v60 & 1) != 0 )
          v60 |= v61;
        *(_QWORD *)v6 = v60;
        MiWritePteShadow(v6, v60);
        goto LABEL_134;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v60 & 1) != 0 )
      {
        v60 |= v61;
      }
    }
    *(_QWORD *)v6 = v60;
LABEL_134:
    v58 = v35 & 0xFFFFFFFFFFFFF000uLL;
    goto LABEL_135;
  }
  v59 = _InterlockedExchange64((volatile __int64 *)v6, v71);
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v6, v71);
  if ( (v59 & 0x20) != 0 )
    goto LABEL_134;
LABEL_136:
  if ( v17 )
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v5 == 1 || (unsigned int)MI_PFN_IS_PROTO(v16, v54, v37) )
    return v20;
  v63 = *(_QWORD *)(v16 + 16);
  if ( (unsigned __int64)(v16 + 16) >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)(v16 + 16) <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v62, v63) )
  {
    if ( (v63 & 1) == 0 )
      goto LABEL_152;
    if ( (v63 & 0x20) == 0 || (v63 & 0x42) == 0 )
    {
      v65 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v65 )
      {
        v66 = *((_QWORD *)&v65->Flink + ((v64 >> 3) & 0x1FF));
        v67 = v63 | 0x20;
        if ( (v66 & 0x20) == 0 )
          v67 = v63;
        v63 = v67;
        if ( (v66 & 0x42) != 0 )
          v63 = v67 | 0x42;
      }
    }
  }
  if ( (v63 & 1) == 0 )
  {
LABEL_152:
    if ( (!v63 || !qword_140C4DE80 || (v63 & qword_140C4DE80) != 0)
      && *(_DWORD *)(*(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v16 + 40) >> 39) & 0x3FFLL)) + 1036LL)
      && (v63 & 2) == 0
      && !MiGetWorkingSetSwapSupport(a1)
      && (!(unsigned int)MI_IS_RESET_PTE(v68) || (*(_BYTE *)(v16 + 34) & 0x10) != 0 || (*(_BYTE *)v6 & 0x42) != 0)
      && v6 <= 0xFFFFF6BFFFFFFF78uLL
      && v6 >= 0xFFFFF68000000000uLL )
    {
      MiReservePageFileSpace(v69, v6);
    }
  }
  return v20;
}
