/*
 * XREFs of MiWsleFree @ 0x140332C20
 * Callers:
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140257E48 (MiRewriteTrimPteAsDemandZero.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
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
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // eax
  __int64 ValidPte; // rax
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v22; // rbx
  unsigned __int64 *MmInternal; // rdi
  unsigned __int64 UltraMapping; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r11
  __int64 *v27; // r8
  _QWORD *v28; // rbx
  _QWORD *v29; // rdi
  char v30; // bl
  unsigned __int64 v31; // rdi
  __int64 v32; // rbp
  unsigned __int64 *v33; // r15
  unsigned __int64 v34; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  struct _LIST_ENTRY *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 ContainingPageTable; // rax
  char v46; // cl
  __int64 v47; // r15
  __int64 v48; // r11
  char v49; // cl
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  char v53; // al
  int v55; // [rsp+20h] [rbp-68h] BYREF
  int v56; // [rsp+24h] [rbp-64h] BYREF
  int v57; // [rsp+28h] [rbp-60h] BYREF
  __int64 v58; // [rsp+30h] [rbp-58h]
  _QWORD v59[10]; // [rsp+38h] [rbp-50h] BYREF
  int v61; // [rsp+98h] [rbp+10h]
  unsigned __int16 v63; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v64; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  va_list va1; // [rsp+B0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v64 = va_arg(va1, _QWORD);
  v3 = v64;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64 *)va) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v9 = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  else
    v9 = (*(_BYTE *)v8 >> 1) & 7;
  v10 = MI_PFN_IS_PROTO(v8);
  v61 = v10;
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
  v55 = 0;
  while ( _interlockedbittestandset64(v16, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v55, v11, v12, v13);
    while ( *(__int64 *)v16 < 0 );
  }
  if ( v15 )
  {
    if ( (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v8 + 32) != 1 )
      goto LABEL_52;
    v17 = 4;
    v18 = (__int64)(v8 + 0x58000000000LL) / 48;
    v19 = *(unsigned __int8 *)(48 * v18 - 0x58000000000LL + 34) >> 6;
    if ( !v19 || v19 == 3 )
    {
      v17 = 12;
    }
    else if ( v19 == 2 )
    {
      v17 = 28;
    }
    ValidPte = MiMakeValidPte(0LL, v18, v17 | 0xA0000000);
    CurrentPrcb = KeGetCurrentPrcb();
    v22 = ValidPte;
    MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
    if ( MmInternal )
    {
      UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0);
      v25 = 0xFFFFF68000000000uLL;
      v26 = UltraMapping;
      v27 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MmInternal[1543] = (unsigned __int64)v27;
      if ( UltraMapping )
      {
LABEL_36:
        if ( (unsigned __int64)v27 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v27 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (v22 & 1) != 0 )
              v22 |= 0x8000000000000000uLL;
            *v27 = v22;
            MiWritePteShadow((__int64)v27, v22);
LABEL_47:
            v28 = (_QWORD *)v26;
            v29 = (_QWORD *)(v26 + 4088);
            do
            {
              if ( *v28 | *v29 )
                break;
              ++v28;
              --v29;
            }
            while ( v28 <= v29 );
            LOBYTE(v25) = 17;
            MiUnmapPageInHyperSpaceWorker(v26, v25, 0x80000000LL);
            if ( v28 > v29 )
            {
              MiRewriteTrimPteAsDemandZero(a1, (_QWORD *)v8);
              goto LABEL_53;
            }
LABEL_52:
            v15 = 0;
            goto LABEL_53;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v22 & 1) != 0 )
          {
            v22 |= 0x8000000000000000uLL;
          }
        }
        *v27 = v22;
        goto LABEL_47;
      }
    }
    else
    {
      v25 = 0xFFFFF68000000000uLL;
    }
    v26 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
        + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v27 = (__int64 *)(((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    goto LABEL_36;
  }
LABEL_53:
  v30 = v64;
  v31 = 0LL;
  v58 = 0LL;
  if ( v15 || (v64 & 4) != 0 )
  {
    ContainingPageTable = MiGetContainingPageTable(v7);
    v46 = *(_BYTE *)(v8 + 34);
    v47 = ContainingPageTable;
    *(_QWORD *)(v8 + 40) &= v48;
    *(_BYTE *)(v8 + 34) = v46 & 0xC7;
    v49 = *(_BYTE *)(v8 + 35);
    *(_QWORD *)v16 &= 0xC000000000000000uLL;
    *(_BYTE *)(v8 + 35) = v49 & 0xDF;
    *(_WORD *)(v8 + 32) = 0;
    v31 = MiCapturePageFileInfoInline((unsigned __int64 *)(v8 + 16), 0, 0);
    if ( v31 )
      v32 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
    else
      v32 = v58;
    MiInsertPageInFreeOrZeroedList((__int64)(v8 + 0x58000000000LL) / 48, ((v30 & 4) != 0) + 1);
    _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
    v57 = 0;
    v16 = (volatile signed __int32 *)(48 * v47 - 0x58000000000LL + 24);
    while ( _interlockedbittestandset64(v16, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v57, v50, v51, v52);
      while ( *(__int64 *)v16 < 0 );
    }
    MiDecrementShareCount(48 * v47 - 0x58000000000LL);
  }
  else
  {
    if ( (v64 & 0x42) != 0 )
    {
      v31 = MiCaptureDirtyBitToPfn(v8);
      if ( v31 )
        v32 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
      else
        v32 = 0LL;
    }
    else
    {
      v32 = 0LL;
    }
    if ( v61 )
    {
      v33 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v34 = *v33;
      if ( (unsigned int)MiPteInShadowRange(v33)
        && (unsigned int)MiPteHasShadow()
        && (v34 & 1) != 0
        && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v36 = *((_QWORD *)&Flink->Flink + ((((v7 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
          v37 = v34 | 0x20;
          if ( (v36 & 0x20) == 0 )
            v37 = v34;
          v34 = v37;
          if ( (v36 & 0x42) != 0 )
            v34 = v37 | 0x42;
        }
      }
      v59[0] = v34;
      if ( (unsigned int)MiPteInShadowRange(v59)
        && (unsigned int)MiPteHasShadow()
        && (v34 & 1) != 0
        && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
      {
        v38 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v38 )
        {
          v39 = *((_QWORD *)&v38->Flink + (((unsigned __int64)v59 >> 3) & 0x1FF));
          v40 = v34 | 0x20;
          if ( (v39 & 0x20) == 0 )
            v40 = v34;
          v34 = v40;
          if ( (v39 & 0x42) != 0 )
            v34 = v40 | 0x42;
        }
      }
      v41 = (v34 >> 12) & 0xFFFFFFFFFLL;
    }
    else
    {
      v41 = -1LL;
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
    v42 = (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)v16 ^= (*(_QWORD *)v16 ^ v42) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v42 )
      MiPfnShareCountIsZero(v8, 0LL);
    if ( v41 != -1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
      v43 = 48 * v41 - 0x58000000000LL;
      v56 = 0;
      v16 = (volatile signed __int32 *)(v43 + 24);
      while ( _interlockedbittestandset64(v16, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v56, v42, v12, v13);
        while ( *(__int64 *)v16 < 0 );
      }
      if ( (*(_BYTE *)(v43 + 34) & 7) != 6 )
        MiBadShareCount(v43);
      v44 = (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)v16 ^= (*(_QWORD *)v16 ^ v44) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v44 )
        MiPfnShareCountIsZero(v43, 0LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v31 )
    MiReleasePageFileInfo(v32, v31, 1);
  v53 = 1;
  LOBYTE(v63) = v9;
  if ( !v61 )
    v53 = 3;
  HIBYTE(v63) = v53;
  return v63;
}
