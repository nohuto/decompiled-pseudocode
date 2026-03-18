/*
 * XREFs of MiWsleFree @ 0x140220E30
 * Callers:
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140350B54 (MiRewriteTrimPteAsDemandZero.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403ED924 (MiBadShareCount.c)
 */

__int64 MiWsleFree(__int64 a1, unsigned __int64 a2, char a3, ...)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r14
  char v11; // r12
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  int v16; // ebp
  volatile signed __int32 *v17; // rsi
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rdx
  int v21; // eax
  __int64 ValidPte; // rax
  unsigned __int64 v23; // rcx
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v25; // rbx
  _QWORD *MmInternal; // rdi
  unsigned __int64 UltraMapping; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r11
  __int64 *v30; // r8
  _QWORD *v31; // rbx
  _QWORD *v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rbp
  unsigned __int64 *v35; // r15
  unsigned __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v40; // rax
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
  char v55; // al
  int v57; // [rsp+20h] [rbp-68h] BYREF
  int v58; // [rsp+24h] [rbp-64h] BYREF
  int v59; // [rsp+28h] [rbp-60h] BYREF
  __int64 v60; // [rsp+30h] [rbp-58h]
  _QWORD v61[10]; // [rsp+38h] [rbp-50h] BYREF
  int v63; // [rsp+98h] [rbp+10h]
  unsigned __int16 v65; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v66; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  va_list va1; // [rsp+B0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v66 = va_arg(va1, _QWORD);
  v3 = v66;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64 *)va) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v11 = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  else
    v11 = (*(_BYTE *)v10 >> 1) & 7;
  v12 = MI_PFN_IS_PROTO(v10, v8, v9);
  v63 = v12;
  if ( (a3 & 4) != 0 )
    goto LABEL_15;
  if ( v12 )
  {
    if ( (*(_QWORD *)(v10 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v10 + 8) > 0
      || (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
    {
      goto LABEL_15;
    }
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
      goto LABEL_15;
    if ( (MiGetPagePrivilege(v10) & 0xFFFFFFFD) != 0 )
      goto LABEL_15;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v10, v13, v14) )
    {
      v15 = (__int64)(v7 << 25) >> 16;
      if ( v15 >= 0xFFFFF68000000000uLL && v15 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_15;
    }
  }
  if ( *(_WORD *)(v10 + 32) != 1
    || (*(_BYTE *)(v10 + 34) & 0xC0) != 0x40
    || (v16 = 1, (*(_BYTE *)(v10 + 35) & 0x40) != 0) )
  {
LABEL_15:
    v16 = 0;
  }
  v17 = (volatile signed __int32 *)(v10 + 24);
  v57 = 0;
  while ( _interlockedbittestandset64(v17, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v57);
    while ( *(__int64 *)v17 < 0 );
  }
  v18 = 0x2AAAAAAAAAAAAAABLL;
  if ( v16 )
  {
    if ( (*(_QWORD *)v17 & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v10 + 32) != 1 )
      goto LABEL_52;
    v19 = 4;
    v20 = (__int64)(v10 + 0x58000000000LL) / 48;
    v21 = *(unsigned __int8 *)(48 * v20 - 0x58000000000LL + 34) >> 6;
    if ( !v21 || v21 == 3 )
    {
      v19 = 12;
    }
    else if ( v21 == 2 )
    {
      v19 = 28;
    }
    ValidPte = MiMakeValidPte(0LL, v20, v19 | 0xA0000000);
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = ValidPte;
    MmInternal = CurrentPrcb->MmInternal;
    if ( MmInternal )
    {
      UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL);
      v28 = 0xFFFFF68000000000uLL;
      v29 = UltraMapping;
      v23 = 0xFFFFF68000000000uLL;
      v30 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MmInternal[1543] = v30;
      if ( UltraMapping )
      {
LABEL_36:
        if ( (unsigned __int64)v30 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v30 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v23, 0xFFFFF68000000000uLL) )
          {
            if ( !HIBYTE(word_140C4DF48) && (v25 & 1) != 0 )
              v25 |= 0x8000000000000000uLL;
            *v30 = v25;
            MiWritePteShadow(v30, v25);
LABEL_47:
            v31 = (_QWORD *)v29;
            v32 = (_QWORD *)(v29 + 4088);
            do
            {
              if ( *v31 | *v32 )
                break;
              ++v31;
              --v32;
            }
            while ( v31 <= v32 );
            LOBYTE(v28) = 17;
            MiUnmapPageInHyperSpaceWorker(v29, v28, 0x80000000LL);
            if ( v31 > v32 )
            {
              MiRewriteTrimPteAsDemandZero(a1, v10);
              goto LABEL_53;
            }
LABEL_52:
            v16 = 0;
            goto LABEL_53;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v25 & 1) != 0 )
          {
            v25 |= 0x8000000000000000uLL;
          }
        }
        *v30 = v25;
        goto LABEL_47;
      }
    }
    else
    {
      v28 = 0xFFFFF68000000000uLL;
    }
    v29 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
        + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v30 = (__int64 *)(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    goto LABEL_36;
  }
LABEL_53:
  v33 = 0LL;
  v60 = 0LL;
  if ( v16 || (v66 & 4) != 0 )
  {
    ContainingPageTable = MiGetContainingPageTable(v7, v18);
    v51 = *(_BYTE *)(v10 + 34);
    v52 = ContainingPageTable;
    *(_QWORD *)(v10 + 40) &= v53;
    *(_BYTE *)(v10 + 34) = v51 & 0xC7;
    v54 = *(_BYTE *)(v10 + 35);
    *(_QWORD *)v17 &= 0xC000000000000000uLL;
    *(_BYTE *)(v10 + 35) = v54 & 0xDF;
    *(_WORD *)(v10 + 32) = 0;
    v33 = MiCapturePageFileInfoInline(v10 + 16, 0LL);
    if ( v33 )
      v34 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
    else
      v34 = v60;
    MiInsertPageInFreeOrZeroedList((__int64)(v10 + 0x58000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
    v59 = 0;
    v17 = (volatile signed __int32 *)(48 * v52 - 0x58000000000LL + 24);
    while ( _interlockedbittestandset64(v17, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v59);
      while ( *(__int64 *)v17 < 0 );
    }
    MiDecrementShareCount(48 * v52 - 0x58000000000LL);
  }
  else
  {
    if ( (v66 & 0x42) != 0 )
    {
      v33 = MiCaptureDirtyBitToPfn(v10);
      if ( v33 )
        v34 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
      else
        v34 = 0LL;
    }
    else
    {
      v34 = 0LL;
    }
    if ( v63 )
    {
      v35 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v36 = *v35;
      if ( (unsigned int)MiPteInShadowRange(v35, v18)
        && (unsigned int)MiPteHasShadow(v38, v37)
        && (v36 & 1) != 0
        && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
      {
        v37 = (v7 >> 9) & 0xFFFFFFF8;
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v40 = *((_QWORD *)&Flink->Flink + ((((v7 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
          v37 = v36 | 0x20;
          if ( (v40 & 0x20) == 0 )
            v37 = v36;
          v36 = v37;
          if ( (v40 & 0x42) != 0 )
            v36 = v37 | 0x42;
        }
      }
      v61[0] = v36;
      if ( (unsigned int)MiPteInShadowRange(v61, v37)
        && (unsigned int)MiPteHasShadow(v42, v41)
        && (v36 & 1) != 0
        && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
      {
        v43 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v43 )
        {
          v44 = *((_QWORD *)&v43->Flink + (((unsigned __int64)v61 >> 3) & 0x1FF));
          v45 = v36 | 0x20;
          if ( (v44 & 0x20) == 0 )
            v45 = v36;
          v36 = v45;
          if ( (v44 & 0x42) != 0 )
            v36 = v45 | 0x42;
        }
      }
      v46 = (v36 >> 12) & 0xFFFFFFFFFLL;
    }
    else
    {
      v46 = -1LL;
    }
    if ( (a3 & 1) != 0
      && (*(_QWORD *)v17 & 0x3FFFFFFFFFFFFFFFLL) == 1
      && *(_WORD *)(v10 + 32) == 1
      && (*(_BYTE *)(v10 + 34) & 0x10) == 0
      && (unsigned int)MiGetPfnPriority(v10) == 5 )
    {
      *(_BYTE *)(v10 + 35) = *(_BYTE *)(v10 + 35) & 0xF8 | 4;
    }
    if ( (*(_BYTE *)(v10 + 34) & 7) != 6 )
      MiBadShareCount(v10);
    v47 = (*(_QWORD *)v17 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)v17 ^= (*(_QWORD *)v17 ^ v47) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v47 )
      MiPfnShareCountIsZero(v10);
    if ( v46 != -1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
      v48 = 48 * v46 - 0x58000000000LL;
      v58 = 0;
      v17 = (volatile signed __int32 *)(v48 + 24);
      while ( _interlockedbittestandset64(v17, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v58);
        while ( *(__int64 *)v17 < 0 );
      }
      if ( (*(_BYTE *)(v48 + 34) & 7) != 6 )
        MiBadShareCount(v48);
      v49 = (*(_QWORD *)v17 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)v17 ^= (*(_QWORD *)v17 ^ v49) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v49 )
        MiPfnShareCountIsZero(v48);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v33 )
    MiReleasePageFileInfo(v34, v33, 1LL);
  v55 = 1;
  LOBYTE(v65) = v11;
  if ( !v63 )
    v55 = 3;
  HIBYTE(v65) = v55;
  return v65;
}
