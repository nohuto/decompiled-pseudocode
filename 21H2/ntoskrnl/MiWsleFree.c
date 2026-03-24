/*
 * XREFs of MiWsleFree @ 0x140327ED0
 * Callers:
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiGetUltraMapping @ 0x140234700 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140269EA8 (MiRewriteTrimPteAsDemandZero.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     MiGetPagePrivilege @ 0x1403286F0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F4934 (MiBadShareCount.c)
 */

__int64 MiWsleFree(__int64 a1, unsigned __int64 a2, char a3, ...)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  char v9; // r12
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  int v15; // ebp
  volatile signed __int32 *v16; // rsi
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // eax
  __int64 ValidPte; // rax
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v23; // rbx
  unsigned __int64 *MmInternal; // rdi
  unsigned __int64 UltraMapping; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r11
  __int64 *v28; // r8
  _QWORD *v29; // rbx
  _QWORD *v30; // rdi
  char v31; // bl
  unsigned __int64 v32; // rdi
  __int64 v33; // rbp
  unsigned __int64 *v34; // r15
  unsigned __int64 v35; // rbx
  __int64 v36; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v38; // rax
  struct _LIST_ENTRY *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 ContainingPageTable; // rax
  char v47; // cl
  __int64 v48; // r15
  __int64 v49; // r11
  char v50; // cl
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  char v54; // al
  int v56; // [rsp+20h] [rbp-68h] BYREF
  int v57; // [rsp+24h] [rbp-64h] BYREF
  int v58; // [rsp+28h] [rbp-60h] BYREF
  __int64 v59; // [rsp+30h] [rbp-58h]
  _QWORD v60[10]; // [rsp+38h] [rbp-50h] BYREF
  int v62; // [rsp+98h] [rbp+10h]
  unsigned __int16 v64; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v65; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  va_list va1; // [rsp+B0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v65 = va_arg(va1, _QWORD);
  v3 = v65;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64 *)va) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v9 = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  else
    v9 = (*(_BYTE *)v8 >> 1) & 7;
  v10 = MI_PFN_IS_PROTO(v8);
  v62 = v10;
  if ( (a3 & 4) != 0 )
    goto LABEL_15;
  if ( v10 )
  {
    v11 = 0x1000000000LL;
    if ( (*(_QWORD *)(v8 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0
      || (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
    {
      goto LABEL_15;
    }
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
      goto LABEL_15;
    if ( (MiGetPagePrivilege(v8) & 0xFFFFFFFD) != 0 )
      goto LABEL_15;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v8) )
    {
      v11 = 0xFFFFF68000000000uLL;
      v14 = (__int64)(v7 << 25) >> 16;
      if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_15;
    }
  }
  if ( *(_WORD *)(v8 + 32) != 1 || (*(_BYTE *)(v8 + 34) & 0xC0) != 0x40 || (v15 = 1, (*(_BYTE *)(v8 + 35) & 0x40) != 0) )
LABEL_15:
    v15 = 0;
  v16 = (volatile signed __int32 *)(v8 + 24);
  v56 = 0;
  while ( _interlockedbittestandset64(v16, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v56, v11, v12, v13);
    while ( *(__int64 *)v16 < 0 );
  }
  v17 = 0x2AAAAAAAAAAAAAABLL;
  if ( v15 )
  {
    if ( (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v8 + 32) != 1 )
      goto LABEL_52;
    v18 = 4;
    v19 = (__int64)(v8 + 0x58000000000LL) / 48;
    v20 = *(unsigned __int8 *)(48 * v19 - 0x58000000000LL + 34) >> 6;
    if ( !v20 || v20 == 3 )
    {
      v18 = 12;
    }
    else if ( v20 == 2 )
    {
      v18 = 28;
    }
    ValidPte = MiMakeValidPte(0LL, v19, v18 | 0xA0000000);
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = ValidPte;
    MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
    if ( MmInternal )
    {
      UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0);
      v26 = 0xFFFFF68000000000uLL;
      v27 = UltraMapping;
      v28 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MmInternal[1543] = (unsigned __int64)v28;
      if ( UltraMapping )
      {
LABEL_36:
        if ( (unsigned __int64)v28 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v28 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E008) && (v23 & 1) != 0 )
              v23 |= 0x8000000000000000uLL;
            *v28 = v23;
            MiWritePteShadow((__int64)v28, v23, (__int64)v28);
LABEL_47:
            v29 = (_QWORD *)v27;
            v30 = (_QWORD *)(v27 + 4088);
            do
            {
              if ( *v29 | *v30 )
                break;
              ++v29;
              --v30;
            }
            while ( v29 <= v30 );
            LOBYTE(v26) = 17;
            MiUnmapPageInHyperSpaceWorker(v27, v26, 0x80000000LL);
            if ( v29 > v30 )
            {
              MiRewriteTrimPteAsDemandZero(a1, (_QWORD *)v8);
              goto LABEL_53;
            }
LABEL_52:
            v15 = 0;
            goto LABEL_53;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v23 & 1) != 0 )
          {
            v23 |= 0x8000000000000000uLL;
          }
        }
        *v28 = v23;
        goto LABEL_47;
      }
    }
    else
    {
      v26 = 0xFFFFF68000000000uLL;
    }
    v27 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
        + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v28 = (__int64 *)(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    goto LABEL_36;
  }
LABEL_53:
  v31 = v65;
  v32 = 0LL;
  v59 = 0LL;
  if ( v15 || (v65 & 4) != 0 )
  {
    ContainingPageTable = MiGetContainingPageTable(v7);
    v47 = *(_BYTE *)(v8 + 34);
    v48 = ContainingPageTable;
    *(_QWORD *)(v8 + 40) &= v49;
    *(_BYTE *)(v8 + 34) = v47 & 0xC7;
    v50 = *(_BYTE *)(v8 + 35);
    *(_QWORD *)v16 &= 0xC000000000000000uLL;
    *(_BYTE *)(v8 + 35) = v50 & 0xDF;
    *(_WORD *)(v8 + 32) = 0;
    v32 = MiCapturePageFileInfoInline((unsigned __int64 *)(v8 + 16), 0, 0);
    if ( v32 )
      v33 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
    else
      v33 = v59;
    MiInsertPageInFreeOrZeroedList((__int64)(v8 + 0x58000000000LL) / 48, ((v31 & 4) != 0) + 1);
    _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
    v58 = 0;
    v16 = (volatile signed __int32 *)(48 * v48 - 0x58000000000LL + 24);
    while ( _interlockedbittestandset64(v16, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v58, v51, v52, v53);
      while ( *(__int64 *)v16 < 0 );
    }
    MiDecrementShareCount(48 * v48 - 0x58000000000LL);
  }
  else
  {
    if ( (v65 & 0x42) != 0 )
    {
      v32 = MiCaptureDirtyBitToPfn(v8);
      if ( v32 )
        v33 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
      else
        v33 = 0LL;
    }
    else
    {
      v33 = 0LL;
    }
    if ( v62 )
    {
      v34 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v35 = *v34;
      if ( (unsigned int)MiPteInShadowRange(v34, v17)
        && (unsigned int)MiPteHasShadow()
        && (v35 & 1) != 0
        && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
      {
        v36 = (v7 >> 9) & 0xFFFFFFF8;
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v38 = *((_QWORD *)&Flink->Flink + ((((v7 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
          v36 = v35 | 0x20;
          if ( (v38 & 0x20) == 0 )
            v36 = v35;
          v35 = v36;
          if ( (v38 & 0x42) != 0 )
            v35 = v36 | 0x42;
        }
      }
      v60[0] = v35;
      if ( (unsigned int)MiPteInShadowRange(v60, v36)
        && (unsigned int)MiPteHasShadow()
        && (v35 & 1) != 0
        && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
      {
        v39 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v39 )
        {
          v40 = *((_QWORD *)&v39->Flink + (((unsigned __int64)v60 >> 3) & 0x1FF));
          v41 = v35 | 0x20;
          if ( (v40 & 0x20) == 0 )
            v41 = v35;
          v35 = v41;
          if ( (v40 & 0x42) != 0 )
            v35 = v41 | 0x42;
        }
      }
      v42 = (v35 >> 12) & 0xFFFFFFFFFLL;
    }
    else
    {
      v42 = -1LL;
    }
    if ( (a3 & 1) != 0
      && (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) == 1
      && *(_WORD *)(v8 + 32) == 1
      && (*(_BYTE *)(v8 + 34) & 0x10) == 0
      && (unsigned int)MiGetPfnPriority(v8) == 5 )
    {
      *(_BYTE *)(v8 + 35) = *(_BYTE *)(v8 + 35) & 0xF8 | 4;
    }
    if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
      MiBadShareCount(v8);
    v43 = (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)v16 ^= (*(_QWORD *)v16 ^ v43) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v43 )
      MiPfnShareCountIsZero(v8, 0LL);
    if ( v42 != -1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
      v44 = 48 * v42 - 0x58000000000LL;
      v57 = 0;
      v16 = (volatile signed __int32 *)(v44 + 24);
      while ( _interlockedbittestandset64(v16, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v57, v43, v12, v13);
        while ( *(__int64 *)v16 < 0 );
      }
      if ( (*(_BYTE *)(v44 + 34) & 7) != 6 )
        MiBadShareCount(v44);
      v45 = (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)v16 ^= (*(_QWORD *)v16 ^ v45) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v45 )
        MiPfnShareCountIsZero(v44, 0LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v32 )
    MiReleasePageFileInfo(v33, v32, 1);
  v54 = 1;
  LOBYTE(v64) = v9;
  if ( !v62 )
    v54 = 3;
  HIBYTE(v64) = v54;
  return v64;
}
