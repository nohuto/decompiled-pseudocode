/*
 * XREFs of MiWsleFree @ 0x1402B3AB0
 * Callers:
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14023D870 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiGetPfnPriority @ 0x1402AAA70 (MiGetPfnPriority.c)
 *     MiGetPagePrivilege @ 0x1402B42D0 (MiGetPagePrivilege.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1402F4B78 (MiRewriteTrimPteAsDemandZero.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403EEC84 (MiBadShareCount.c)
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
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v21; // rcx
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int64 v23; // rbx
  unsigned __int64 *MmInternal; // rdi
  unsigned __int64 UltraMapping; // r11
  unsigned __int64 *v26; // r8
  _QWORD *v27; // rbx
  _QWORD *v28; // rdi
  char v29; // bl
  __int64 v30; // rdi
  __int64 v31; // rbp
  unsigned __int64 *v32; // r15
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct _LIST_ENTRY *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 ContainingPageTable; // rax
  char v51; // cl
  __int64 v52; // r15
  __int64 v53; // r11
  char v54; // cl
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  char v58; // al
  int v60; // [rsp+20h] [rbp-68h] BYREF
  int v61; // [rsp+24h] [rbp-64h] BYREF
  int v62; // [rsp+28h] [rbp-60h] BYREF
  __int64 v63; // [rsp+30h] [rbp-58h]
  _QWORD v64[10]; // [rsp+38h] [rbp-50h] BYREF
  int v66; // [rsp+98h] [rbp+10h]
  unsigned __int16 v68; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v69; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  va_list va1; // [rsp+B0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v69 = va_arg(va1, _QWORD);
  v3 = v69;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)va) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v9 = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  else
    v9 = (*(_BYTE *)v8 >> 1) & 7;
  v10 = MI_PFN_IS_PROTO(v8);
  v66 = v10;
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
  v60 = 0;
  while ( _interlockedbittestandset64(v16, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v60, v11, v12, v13);
    while ( *(__int64 *)v16 < 0 );
  }
  if ( v15 )
  {
    if ( (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v8 + 32) != 1 )
      goto LABEL_50;
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
    ValidPte = MiMakeValidPte(0LL, v18, v17 | 0xA0000000, 0xFFFFFA8000000000uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = ValidPte;
    MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
    if ( !MmInternal
      || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
          v21 = 0xFFFFF68000000000uLL,
          v26 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          MmInternal[1543] = (unsigned __int64)v26,
          !UltraMapping) )
    {
      UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                   + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
      v26 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    }
    if ( (unsigned __int64)v26 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v26 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v21, 0xFFFFF68000000000uLL, v26, 0x7FFFFFFFF8LL) )
      {
        if ( !HIBYTE(word_140C4DE08) && (v23 & 1) != 0 )
          v23 |= 0x8000000000000000uLL;
        *v26 = v23;
        MiWritePteShadow(v26, v23);
LABEL_45:
        v27 = (_QWORD *)UltraMapping;
        v28 = (_QWORD *)(UltraMapping + 4088);
        do
        {
          if ( *v27 | *v28 )
            break;
          ++v27;
          --v28;
        }
        while ( v27 <= v28 );
        MiUnmapPageInHyperSpaceWorker(UltraMapping, 0x11u, 0x80000000);
        if ( v27 > v28 )
        {
          MiRewriteTrimPteAsDemandZero(a1, v8);
          goto LABEL_51;
        }
LABEL_50:
        v15 = 0;
        goto LABEL_51;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v23 & 1) != 0 )
      {
        v23 |= 0x8000000000000000uLL;
      }
    }
    *v26 = v23;
    goto LABEL_45;
  }
LABEL_51:
  v29 = v69;
  v30 = 0LL;
  v63 = 0LL;
  if ( v15 || (v69 & 4) != 0 )
  {
    ContainingPageTable = MiGetContainingPageTable(v7);
    v51 = *(_BYTE *)(v8 + 34);
    v52 = ContainingPageTable;
    *(_QWORD *)(v8 + 40) &= v53;
    *(_BYTE *)(v8 + 34) = v51 & 0xC7;
    v54 = *(_BYTE *)(v8 + 35);
    *(_QWORD *)v16 &= 0xC000000000000000uLL;
    *(_BYTE *)(v8 + 35) = v54 & 0xDF;
    *(_WORD *)(v8 + 32) = 0;
    v30 = MiCapturePageFileInfoInline(v8 + 16, 0LL);
    if ( v30 )
      v31 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
    else
      v31 = v63;
    MiInsertPageInFreeOrZeroedList((__int64)(v8 + 0x58000000000LL) / 48, ((v29 & 4) != 0) + 1);
    _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
    v62 = 0;
    v16 = (volatile signed __int32 *)(48 * v52 - 0x58000000000LL + 24);
    while ( _interlockedbittestandset64(v16, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v62, v55, v56, v57);
      while ( *(__int64 *)v16 < 0 );
    }
    MiDecrementShareCount(48 * v52 - 0x58000000000LL);
  }
  else
  {
    if ( (v69 & 0x42) != 0 )
    {
      v30 = MiCaptureDirtyBitToPfn(v8);
      if ( v30 )
        v31 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
      else
        v31 = 0LL;
    }
    else
    {
      v31 = 0LL;
    }
    if ( v66 )
    {
      v32 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v33 = *v32;
      if ( MiPteInShadowRange((unsigned __int64)v32)
        && (unsigned int)MiPteHasShadow(v35, v34, v36, v37)
        && (v33 & 1) != 0
        && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v39 = *((_QWORD *)&Flink->Flink + ((((v7 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
          v40 = v33 | 0x20;
          if ( (v39 & 0x20) == 0 )
            v40 = v33;
          v33 = v40;
          if ( (v39 & 0x42) != 0 )
            v33 = v40 | 0x42;
        }
      }
      v64[0] = v33;
      if ( MiPteInShadowRange((unsigned __int64)v64)
        && (unsigned int)MiPteHasShadow(v42, v41, v12, v13)
        && (v33 & 1) != 0
        && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
      {
        v43 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v43 )
        {
          v44 = *((_QWORD *)&v43->Flink + (((unsigned __int64)v64 >> 3) & 0x1FF));
          v45 = v33 | 0x20;
          if ( (v44 & 0x20) == 0 )
            v45 = v33;
          v33 = v45;
          if ( (v44 & 0x42) != 0 )
            v33 = v45 | 0x42;
        }
      }
      v46 = (v33 >> 12) & 0xFFFFFFFFFLL;
    }
    else
    {
      v46 = -1LL;
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
    v47 = (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)v16 ^= (*(_QWORD *)v16 ^ v47) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v47 )
      MiPfnShareCountIsZero(v8, 0LL);
    if ( v46 != -1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
      v48 = 48 * v46 - 0x58000000000LL;
      v61 = 0;
      v16 = (volatile signed __int32 *)(v48 + 24);
      while ( _interlockedbittestandset64(v16, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v61, v47, v12, v13);
        while ( *(__int64 *)v16 < 0 );
      }
      if ( (*(_BYTE *)(v48 + 34) & 7) != 6 )
        MiBadShareCount(v48);
      v49 = (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)v16 ^= (*(_QWORD *)v16 ^ v49) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v49 )
        MiPfnShareCountIsZero(v48, 0LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v30 )
    MiReleasePageFileInfo(v31, v30, 1LL);
  v58 = 1;
  LOBYTE(v68) = v9;
  if ( !v66 )
    v58 = 3;
  HIBYTE(v68) = v58;
  return v68;
}
