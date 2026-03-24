/*
 * XREFs of MiDeletePteList @ 0x140231820
 * Callers:
 *     MiDeletePteWsleCluster @ 0x1402C0C2C (MiDeletePteWsleCluster.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     MiSetNonResidentPteHeat @ 0x14023E7B0 (MiSetNonResidentPteHeat.c)
 *     MiLocateCloneAddress @ 0x14023EF08 (MiLocateCloneAddress.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiReduceShareCount @ 0x1402968DC (MiReduceShareCount.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402ACB24 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiDecrementCombinedPte @ 0x140366EC4 (MiDecrementCombinedPte.c)
 *     MiReducePteUseCount @ 0x1403F45E0 (MiReducePteUseCount.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F4934 (MiBadShareCount.c)
 *     MiDecrementCloneBlockReference @ 0x140559E88 (MiDecrementCloneBlockReference.c)
 *     MiMakeProtoTransition @ 0x14055C768 (MiMakeProtoTransition.c)
 */

__int64 __fastcall MiDeletePteList(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, int a5)
{
  unsigned int v5; // eax
  __int64 v8; // r13
  unsigned int v9; // r14d
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // r10
  __int64 v13; // rax
  __int64 Flink; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  struct _LIST_ENTRY *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // r10
  int v29; // r11d
  unsigned __int64 v30; // r15
  bool v31; // r12
  __int64 ContainingPageTable; // rax
  __int64 v33; // r11
  __int64 v34; // rbx
  signed __int8 v35; // cf
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int64 v39; // r9
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v41; // rdx
  unsigned __int64 v42; // rdx
  __int64 v43; // rdx
  char v44; // al
  char v45; // al
  char v46; // al
  __int64 v47; // r15
  __int64 v48; // rax
  char v49; // cl
  __int64 v50; // rdx
  unsigned __int64 v51; // rdi
  __int64 v52; // r10
  unsigned __int64 v53; // rax
  __int64 updated; // rax
  _QWORD *v55; // r14
  unsigned int v56; // r15d
  __int64 v57; // rbx
  unsigned int v58; // r8d
  bool v59; // zf
  __int64 v60; // rdx
  unsigned int v62; // [rsp+20h] [rbp-61h]
  unsigned __int64 v63; // [rsp+28h] [rbp-59h] BYREF
  unsigned int v64; // [rsp+30h] [rbp-51h]
  unsigned int v65; // [rsp+34h] [rbp-4Dh]
  unsigned int v66; // [rsp+38h] [rbp-49h]
  unsigned __int64 v67; // [rsp+40h] [rbp-41h] BYREF
  int v68; // [rsp+48h] [rbp-39h] BYREF
  int v69; // [rsp+4Ch] [rbp-35h] BYREF
  int v70; // [rsp+50h] [rbp-31h] BYREF
  int v71; // [rsp+54h] [rbp-2Dh] BYREF
  __int64 v72; // [rsp+58h] [rbp-29h] BYREF
  __int64 v73; // [rsp+60h] [rbp-21h]
  unsigned __int64 v74; // [rsp+68h] [rbp-19h]
  __int64 v75; // [rsp+70h] [rbp-11h]
  __int64 v76; // [rsp+78h] [rbp-9h]
  unsigned __int64 v77; // [rsp+80h] [rbp-1h]
  __int64 v78; // [rsp+88h] [rbp+7h]
  __int64 v79; // [rsp+90h] [rbp+Fh]
  __int64 v80; // [rsp+E0h] [rbp+5Fh]
  unsigned int v83; // [rsp+100h] [rbp+7Fh]

  v80 = a1;
  v5 = *(_DWORD *)(a1 + 12);
  v8 = 0LL;
  v64 = 0;
  v9 = 0;
  v65 = 0;
  v62 = 0;
  v76 = -1LL;
  v66 = v5;
  if ( a5 )
  {
    MiFlushTbList();
    a1 = v80;
    v5 = v66;
  }
  if ( a4[4] || a4[5] )
    return 0LL;
  v10 = 0LL;
  v83 = 0;
  if ( !v5 )
    return v9;
  v11 = 0LL;
  v79 = 0LL;
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    v13 = *(_QWORD *)(a1 + 8 * v11 + 24);
    Flink = (v13 & 0x3FF) + 1;
    v15 = v13 & 0xFFFFFFFFFFFFF000uLL;
    v78 = Flink;
    v77 = v15;
    do
    {
      v16 = (v15 >> 9) & 0x7FFFFFFFF8LL;
      v17 = *(_QWORD *)(v16 - 0x98000000000LL);
      v18 = v16 - 0x98000000000LL;
      v74 = v16 - 0x98000000000LL;
      if ( (unsigned __int64)(v16 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
        && v18 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v16, Flink, v17, v18)
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v19 = *(_QWORD *)(Flink + 8 * ((v18 >> 3) & 0x1FF));
          Flink = v17 | 0x20;
          if ( (v19 & 0x20) == 0 )
            Flink = v17;
          v17 = Flink;
          if ( (v19 & 0x42) != 0 )
            v17 = Flink | 0x42;
        }
      }
      v20 = v17 & 0xFFFFFFFFFFFFFBFEuLL | 1;
      v63 = v20;
      if ( (unsigned __int64)&v63 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v63 <= v12
        && (unsigned int)MiPteHasShadow(&v63, Flink, v20, v18)
        && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        v21 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v21 )
        {
          v22 = *((_QWORD *)&v21->Flink + (((unsigned __int64)&v63 >> 3) & 0x1FF));
          if ( (v22 & 0x20) != 0 )
            v20 |= 0x20uLL;
          if ( (v22 & 0x42) != 0 )
            v20 |= 0x42uLL;
        }
        else
        {
          v20 = v63;
        }
      }
      v23 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL);
      v24 = v23 - 0x58000000000LL;
      v25 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v23 - 0x58000000000LL + 40) >> 39) & 0x3FFLL));
      v73 = v25;
      if ( (unsigned int)MI_PFN_IS_PROTO(v23 - 0x58000000000LL) )
      {
        v30 = *(_QWORD *)(v24 + 8) | 0x8000000000000000uLL;
        v31 = (v26 & 0x1000000000LL) == 0 && *(__int64 *)(v24 + 8) > 0;
        ContainingPageTable = MiGetContainingPageTable(v27);
        v68 = v33;
        v34 = v33;
        v35 = _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL);
        v75 = ContainingPageTable;
        if ( v35 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v68);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
        }
        if ( (v63 & 0x42) != 0 )
          v34 = MiCaptureDirtyBitToPfn(v24);
        MiDecrementShareCount(v24);
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v34 )
          MiReleasePageFileInfo(v73, v34, 1LL);
        if ( v31 )
        {
          v36 = MiDecrementCombinedPte(a2 + 1664, v30);
        }
        else
        {
          CloneAddress = MiLocateCloneAddress(a2, v30);
          v36 = MiDecrementCloneBlockReference(CloneAddress, v41);
        }
        if ( v36 == 3 )
        {
          v63 = a3;
          ++a4[1];
        }
        else
        {
          if ( v36 == 5 )
            ++a4[2];
          v63 = a3;
        }
      }
      else
      {
        v69 = v29;
        v35 = _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL);
        v75 = v28 & v26;
        if ( v35 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v69);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
        }
        v39 = *(_QWORD *)(v24 + 16);
        *(_QWORD *)(v24 + 24) |= 0x4000000000000000uLL;
        if ( (v39 & 2) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v25, v24 + 16) && *(_WORD *)(v24 + 32) == 1 && a3 )
        {
          v10 = v39;
          v39 &= ~2uLL;
          *(_QWORD *)(v24 + 16) = v39;
        }
        if ( (*(_BYTE *)(v24 + 34) & 7) != 6 )
          MiBadShareCount(v24);
        v38 = 0x3FFFFFFFFFFFFFFFLL;
        v37 = (*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
        *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ v37) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v37 )
        {
          if ( (unsigned int)MI_PFN_IS_PROTO(v24) )
          {
            MiMakeProtoTransition();
            v42 = *(_QWORD *)(v24 + 24);
          }
          --*(_WORD *)(v24 + 32);
          v43 = (v42 >> 62) & 1;
          if ( *(_WORD *)(v24 + 32) )
          {
            v44 = *(_BYTE *)(v24 + 34);
            if ( (_DWORD)v43 )
            {
              v45 = v44 | 7;
            }
            else if ( (v44 & 0x10) != 0 )
            {
              v45 = v44 & 0xF8 | 3;
            }
            else
            {
              v45 = v44 & 0xF8 | 2;
            }
            *(_BYTE *)(v24 + 34) = v45;
            if ( (*(_DWORD *)(v24 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v24 + 16) )
            {
              v37 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v24 + 40) >> 39) & 0x3FFLL));
              *(_BYTE *)(v37 + 675) = 1;
            }
            ++a4[1];
          }
          else if ( (_DWORD)v43 )
          {
            v46 = *(_BYTE *)(v24 + 35);
            if ( (v46 & 0x10) != 0 )
              *(_BYTE *)(v24 + 35) = v46 & 0xEF;
            v47 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v24 + 40) >> 39) & 0x3FFLL));
            v72 = *(_QWORD *)(v24 + 16);
            if ( (v72 & 0x400) == 0 )
            {
              v48 = (v72 & 4) != 0 || (v72 & 2) != 0 ? MI_READ_PTE_LOCK_FREE(&v72) : 0LL;
              v72 = v48;
              if ( v48 )
                MiReleasePageFileInfo(v47, v48, 0LL);
            }
            MiInsertPageInFreeOrZeroedList(v23 / 48);
          }
          else
          {
            MiSetNonResidentPteHeat(v24 + 16, 0LL);
            v49 = *(_BYTE *)(v24 + 34);
            if ( (v49 & 0x10) != 0 )
            {
              v50 = 8LL;
            }
            else
            {
              v50 = 4LL;
              *(_BYTE *)(v24 + 34) = v49 & 0xF8 | 2;
            }
            MiInsertPageInList(v24, v50);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v63 = a3;
        if ( v10 )
        {
          if ( qword_140C4DF40 && (v10 & 0x10) == 0 )
            v10 &= ~qword_140C4DF40;
          v51 = HIDWORD(v10);
          v67 = a3;
          MiSetNonResidentPteHeat(&v67, 0LL);
          v53 = v67;
          if ( (a3 & 0x400) == 0 )
          {
            v53 = v67 & 0xFFFFFFFFFFFFFFF9uLL;
            v67 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
          if ( v52 )
          {
            if ( v53 )
              updated = MiUpdatePageFileHighInPte(v53, v51, *(unsigned __int16 *)(v52 + 204));
            else
              updated = MiSwizzleInvalidPte(v51 << 32);
            v53 = updated ^ (unsigned __int16)(updated ^ ((_WORD)v38 << 12)) & 0xF000 | 2;
            v67 = v53;
          }
          v63 = v53;
          v10 = 0LL;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      }
      Flink = v63;
      v55 = (_QWORD *)v74;
      if ( v74 < 0xFFFFF6FB7DBED000uLL || v74 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_110;
      if ( !(unsigned int)MiPteHasShadow(v37, v63, v38, v39) )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (Flink & 1) != 0 )
        {
          Flink |= 0x8000000000000000uLL;
        }
LABEL_110:
        *v55 = Flink;
        goto LABEL_111;
      }
      if ( !HIBYTE(word_140C4E008) && (Flink & 1) != 0 )
        Flink |= 0x8000000000000000uLL;
      *v55 = Flink;
      MiWritePteShadow(v55, Flink);
LABEL_111:
      v56 = v64;
      if ( !v63 )
        v56 = ++v64;
      v57 = v75;
      if ( v75 != v76 )
      {
        if ( v8 )
        {
          v70 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v70);
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
          MiReduceShareCount(v8, v62);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v62 = 0;
          if ( v56 )
          {
            v65 = MiReducePteUseCount(v55, v56);
            v56 = 0;
            v64 = 0;
          }
        }
        v8 = 48 * v57 - 0x58000000000LL;
        v76 = v57;
      }
      v58 = v62 + 1;
      v15 = v77 + 4096;
      ++v62;
      v59 = v78-- == 1;
      v77 += 4096LL;
      v12 = 0xFFFFF6FB7DBED7F8uLL;
    }
    while ( !v59 );
    v11 = v79 + 1;
    ++v83;
    a1 = v80;
    ++v79;
  }
  while ( v83 < v66 );
  if ( !v58 )
    return v65;
  v71 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v71);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
    v58 = v62;
  }
  if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
    MiBadShareCount(v8);
  v60 = (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v58;
  *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ v60) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v60 )
    MiPfnShareCountIsZero(v8);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v56 )
    return (unsigned int)MiReducePteUseCount(v55, v56);
  else
    return v65;
}
