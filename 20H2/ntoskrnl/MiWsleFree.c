/*
 * XREFs of MiWsleFree @ 0x1402AB620
 * Callers:
 *     MiFreeWsleList @ 0x1402AAA70 (MiFreeWsleList.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MiGetPagePrivilege @ 0x1402ABE40 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402C2F20 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346EE4 (MiRewriteTrimPteAsDemandZero.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F30EC (MiBadShareCount.c)
 */

__int64 MiWsleFree(__int64 a1, unsigned __int64 a2, char a3, ...)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  char v9; // r12
  int v10; // eax
  unsigned __int64 v11; // rcx
  int v12; // ebp
  volatile signed __int32 *v13; // rsi
  int v14; // r8d
  __int64 v15; // rdx
  int v16; // eax
  __int64 ValidPte; // rax
  unsigned __int64 v18; // rcx
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v20; // rbx
  _QWORD *MmInternal; // rdi
  unsigned __int64 UltraMapping; // r11
  __int64 *v23; // r8
  _QWORD *v24; // rbx
  _QWORD *v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rbp
  unsigned __int64 *v28; // r15
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _LIST_ENTRY *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 ContainingPageTable; // rax
  char v49; // cl
  __int64 v50; // r15
  __int64 v51; // r11
  char v52; // cl
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
      v11 = (__int64)(v7 << 25) >> 16;
      if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_15;
    }
  }
  if ( *(_WORD *)(v8 + 32) != 1 || (*(_BYTE *)(v8 + 34) & 0xC0) != 0x40 || (v12 = 1, (*(_BYTE *)(v8 + 35) & 0x40) != 0) )
LABEL_15:
    v12 = 0;
  v13 = (volatile signed __int32 *)(v8 + 24);
  v55 = 0;
  while ( _interlockedbittestandset64(v13, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v55);
    while ( *(__int64 *)v13 < 0 );
  }
  if ( v12 )
  {
    if ( (*(_QWORD *)v13 & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v8 + 32) != 1 )
      goto LABEL_50;
    v14 = 4;
    v15 = (__int64)(v8 + 0x58000000000LL) / 48;
    v16 = *(unsigned __int8 *)(48 * v15 - 0x58000000000LL + 34) >> 6;
    if ( !v16 || v16 == 3 )
    {
      v14 = 12;
    }
    else if ( v16 == 2 )
    {
      v14 = 28;
    }
    ValidPte = MiMakeValidPte(0LL, v15, v14 | 0xA0000000);
    CurrentPrcb = KeGetCurrentPrcb();
    v20 = ValidPte;
    MmInternal = CurrentPrcb->MmInternal;
    if ( !MmInternal
      || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
          v18 = 0xFFFFF68000000000uLL,
          v23 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          MmInternal[1543] = v23,
          !UltraMapping) )
    {
      UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                   + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
      v23 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    }
    if ( (unsigned __int64)v23 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v23 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v18, 0xFFFFF68000000000uLL, v23, 0x7FFFFFFFF8LL) )
      {
        if ( !HIBYTE(word_140C4DE88) && (v20 & 1) != 0 )
          v20 |= 0x8000000000000000uLL;
        *v23 = v20;
        MiWritePteShadow(v23, v20);
LABEL_45:
        v24 = (_QWORD *)UltraMapping;
        v25 = (_QWORD *)(UltraMapping + 4088);
        do
        {
          if ( *v24 | *v25 )
            break;
          ++v24;
          --v25;
        }
        while ( v24 <= v25 );
        MiUnmapPageInHyperSpaceWorker(UltraMapping, 0x11u, 0x80000000);
        if ( v24 > v25 )
        {
          MiRewriteTrimPteAsDemandZero(a1, v8);
          goto LABEL_51;
        }
LABEL_50:
        v12 = 0;
        goto LABEL_51;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v20 & 1) != 0 )
      {
        v20 |= 0x8000000000000000uLL;
      }
    }
    *v23 = v20;
    goto LABEL_45;
  }
LABEL_51:
  v26 = 0LL;
  v58 = 0LL;
  if ( v12 || (v64 & 4) != 0 )
  {
    ContainingPageTable = MiGetContainingPageTable(v7);
    v49 = *(_BYTE *)(v8 + 34);
    v50 = ContainingPageTable;
    *(_QWORD *)(v8 + 40) &= v51;
    *(_BYTE *)(v8 + 34) = v49 & 0xC7;
    v52 = *(_BYTE *)(v8 + 35);
    *(_QWORD *)v13 &= 0xC000000000000000uLL;
    *(_BYTE *)(v8 + 35) = v52 & 0xDF;
    *(_WORD *)(v8 + 32) = 0;
    v26 = MiCapturePageFileInfoInline(v8 + 16, 0LL);
    if ( v26 )
      v27 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
    else
      v27 = v58;
    MiInsertPageInFreeOrZeroedList((__int64)(v8 + 0x58000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
    v57 = 0;
    v13 = (volatile signed __int32 *)(48 * v50 - 0x58000000000LL + 24);
    while ( _interlockedbittestandset64(v13, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v57);
      while ( *(__int64 *)v13 < 0 );
    }
    MiDecrementShareCount(48 * v50 - 0x58000000000LL);
  }
  else
  {
    if ( (v64 & 0x42) != 0 )
    {
      v26 = MiCaptureDirtyBitToPfn(v8);
      if ( v26 )
        v27 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
      else
        v27 = 0LL;
    }
    else
    {
      v27 = 0LL;
    }
    if ( v61 )
    {
      v28 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v29 = *v28;
      if ( MiPteInShadowRange((unsigned __int64)v28)
        && (unsigned int)MiPteHasShadow(v31, v30, v32, v33)
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v35 = *((_QWORD *)&Flink->Flink + ((((v7 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
          v36 = v29 | 0x20;
          if ( (v35 & 0x20) == 0 )
            v36 = v29;
          v29 = v36;
          if ( (v35 & 0x42) != 0 )
            v29 = v36 | 0x42;
        }
      }
      v59[0] = v29;
      if ( MiPteInShadowRange((unsigned __int64)v59)
        && (unsigned int)MiPteHasShadow(v38, v37, v39, v40)
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v41 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v41 )
        {
          v42 = *((_QWORD *)&v41->Flink + (((unsigned __int64)v59 >> 3) & 0x1FF));
          v43 = v29 | 0x20;
          if ( (v42 & 0x20) == 0 )
            v43 = v29;
          v29 = v43;
          if ( (v42 & 0x42) != 0 )
            v29 = v43 | 0x42;
        }
      }
      v44 = (v29 >> 12) & 0xFFFFFFFFFLL;
    }
    else
    {
      v44 = -1LL;
    }
    if ( (a3 & 1) != 0
      && (*(_QWORD *)v13 & 0x3FFFFFFFFFFFFFFFLL) == 1
      && *(_WORD *)(v8 + 32) == 1
      && (*(_BYTE *)(v8 + 34) & 0x10) == 0
      && (unsigned int)MiGetPfnPriority(v8) == 5 )
    {
      *(_BYTE *)(v8 + 35) = *(_BYTE *)(v8 + 35) & 0xF8 | 4;
    }
    if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
      MiBadShareCount(v8);
    v45 = (*(_QWORD *)v13 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)v13 ^= (*(_QWORD *)v13 ^ v45) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v45 )
      MiPfnShareCountIsZero(v8, 0LL);
    if ( v44 != -1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
      v46 = 48 * v44 - 0x58000000000LL;
      v56 = 0;
      v13 = (volatile signed __int32 *)(v46 + 24);
      while ( _interlockedbittestandset64(v13, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v56);
        while ( *(__int64 *)v13 < 0 );
      }
      if ( (*(_BYTE *)(v46 + 34) & 7) != 6 )
        MiBadShareCount(v46);
      v47 = (*(_QWORD *)v13 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)v13 ^= (*(_QWORD *)v13 ^ v47) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v47 )
        MiPfnShareCountIsZero(v46, 0LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v26 )
    MiReleasePageFileInfo(v27, v26, 1LL);
  v53 = 1;
  LOBYTE(v63) = v9;
  if ( !v61 )
    v53 = 3;
  HIBYTE(v63) = v53;
  return v63;
}
