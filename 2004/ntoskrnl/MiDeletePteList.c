/*
 * XREFs of MiDeletePteList @ 0x14023A990
 * Callers:
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiDeletePteWsleCluster @ 0x14034E960 (MiDeletePteWsleCluster.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiSetNonResidentPteHeat @ 0x1402B78F0 (MiSetNonResidentPteHeat.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiGetPagingFileOffset @ 0x140315B24 (MiGetPagingFileOffset.c)
 *     MiReduceShareCount @ 0x14032E19C (MiReduceShareCount.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x14033A8E4 (MiLocateCloneAddress.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14033B0D4 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiDecrementCombinedPte @ 0x140364C34 (MiDecrementCombinedPte.c)
 *     MiReducePteUseCount @ 0x1403EE930 (MiReducePteUseCount.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403EEC84 (MiBadShareCount.c)
 *     MiDecrementCloneBlockReference @ 0x1405549E8 (MiDecrementCloneBlockReference.c)
 *     MiMakeProtoTransition @ 0x1405572C8 (MiMakeProtoTransition.c)
 */

__int64 __fastcall MiDeletePteList(__int64 a1, _KPROCESS *a2, unsigned __int64 a3, _QWORD *a4, int a5)
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
  ULONG_PTR v24; // r14
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // r10
  int v29; // r11d
  unsigned __int64 v30; // r15
  bool v31; // r12
  __int64 ContainingPageTable; // rax
  __int64 v33; // rdx
  __int64 v34; // r11
  __int64 v35; // rbx
  signed __int8 v36; // cf
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // r9
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  __int64 v45; // rdx
  char v46; // al
  char v47; // al
  char v48; // al
  __int64 v49; // r15
  __int64 v50; // rax
  char v51; // cl
  unsigned int v52; // edx
  unsigned __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // r10
  unsigned __int64 v56; // rax
  __int64 updated; // rax
  _QWORD *v58; // r14
  unsigned int v59; // r15d
  __int64 v60; // rbx
  unsigned int v61; // r8d
  bool v62; // zf
  __int64 v63; // rdx
  unsigned int v65; // [rsp+20h] [rbp-61h]
  unsigned __int64 v66; // [rsp+28h] [rbp-59h] BYREF
  unsigned int v67; // [rsp+30h] [rbp-51h]
  unsigned int v68; // [rsp+34h] [rbp-4Dh]
  unsigned int v69; // [rsp+38h] [rbp-49h]
  unsigned __int64 v70; // [rsp+40h] [rbp-41h] BYREF
  int v71; // [rsp+48h] [rbp-39h] BYREF
  int v72; // [rsp+4Ch] [rbp-35h] BYREF
  int v73; // [rsp+50h] [rbp-31h] BYREF
  int v74; // [rsp+54h] [rbp-2Dh] BYREF
  __int64 v75; // [rsp+58h] [rbp-29h] BYREF
  __int64 v76; // [rsp+60h] [rbp-21h]
  unsigned __int64 v77; // [rsp+68h] [rbp-19h]
  __int64 v78; // [rsp+70h] [rbp-11h]
  __int64 v79; // [rsp+78h] [rbp-9h]
  unsigned __int64 v80; // [rsp+80h] [rbp-1h]
  __int64 v81; // [rsp+88h] [rbp+7h]
  __int64 v82; // [rsp+90h] [rbp+Fh]
  __int64 v83; // [rsp+E0h] [rbp+5Fh]
  unsigned int v86; // [rsp+100h] [rbp+7Fh]

  v83 = a1;
  v5 = *(_DWORD *)(a1 + 12);
  v8 = 0LL;
  v67 = 0;
  v9 = 0;
  v68 = 0;
  v65 = 0;
  v79 = -1LL;
  v69 = v5;
  if ( a5 )
  {
    MiFlushTbList(a1, a2);
    a1 = v83;
    v5 = v69;
  }
  if ( a4[4] || a4[5] )
    return 0LL;
  v10 = 0LL;
  v86 = 0;
  if ( !v5 )
    return v9;
  v11 = 0LL;
  v82 = 0LL;
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    v13 = *(_QWORD *)(a1 + 8 * v11 + 24);
    Flink = (v13 & 0x3FF) + 1;
    v15 = v13 & 0xFFFFFFFFFFFFF000uLL;
    v81 = Flink;
    v80 = v15;
    do
    {
      v16 = (v15 >> 9) & 0x7FFFFFFFF8LL;
      v17 = *(_QWORD *)(v16 - 0x98000000000LL);
      v18 = v16 - 0x98000000000LL;
      v77 = v16 - 0x98000000000LL;
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
      v66 = v20;
      if ( (unsigned __int64)&v66 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v66 <= v12
        && (unsigned int)MiPteHasShadow(&v66, Flink, v20, v18)
        && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        v21 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v21 )
        {
          v22 = *((_QWORD *)&v21->Flink + (((unsigned __int64)&v66 >> 3) & 0x1FF));
          if ( (v22 & 0x20) != 0 )
            v20 |= 0x20uLL;
          if ( (v22 & 0x42) != 0 )
            v20 |= 0x42uLL;
        }
        else
        {
          v20 = v66;
        }
      }
      v23 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL);
      v24 = v23 - 0x58000000000LL;
      v25 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v23 - 0x58000000000LL + 40) >> 39) & 0x3FFLL));
      v76 = v25;
      if ( (unsigned int)MI_PFN_IS_PROTO(v23 - 0x58000000000LL) )
      {
        v30 = *(_QWORD *)(v24 + 8) | 0x8000000000000000uLL;
        v31 = (v26 & 0x1000000000LL) == 0 && *(__int64 *)(v24 + 8) > 0;
        ContainingPageTable = MiGetContainingPageTable(v27);
        v71 = v34;
        v35 = v34;
        v36 = _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL);
        v78 = ContainingPageTable;
        if ( v36 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v71, v33);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
        }
        if ( (v66 & 0x42) != 0 )
          v35 = MiCaptureDirtyBitToPfn(v24);
        MiDecrementShareCount(v24);
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v35 )
          MiReleasePageFileInfo(v76, v35, 1LL);
        if ( v31 )
        {
          v37 = MiDecrementCombinedPte(&a2[1].ActiveProcessorsPadding[6], v30);
        }
        else
        {
          CloneAddress = MiLocateCloneAddress(a2, v30);
          v37 = MiDecrementCloneBlockReference(CloneAddress, v42);
        }
        if ( v37 == 3 )
        {
          v66 = a3;
          ++a4[1];
        }
        else
        {
          if ( v37 == 5 )
            ++a4[2];
          v66 = a3;
        }
      }
      else
      {
        v43 = v28 & v26;
        v72 = v29;
        v36 = _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL);
        v78 = v43;
        if ( v36 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v72, v43);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
        }
        v40 = *(_QWORD *)(v24 + 16);
        *(_QWORD *)(v24 + 24) |= 0x4000000000000000uLL;
        if ( (v40 & 2) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v25, v24 + 16) && *(_WORD *)(v24 + 32) == 1 && a3 )
        {
          v10 = v40;
          v40 &= ~2uLL;
          *(_QWORD *)(v24 + 16) = v40;
        }
        if ( (*(_BYTE *)(v24 + 34) & 7) != 6 )
          MiBadShareCount(v24);
        v39 = 0x3FFFFFFFFFFFFFFFLL;
        v38 = (*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
        *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ v38) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v38 )
        {
          if ( (unsigned int)MI_PFN_IS_PROTO(v24) )
          {
            MiMakeProtoTransition();
            v44 = *(_QWORD *)(v24 + 24);
          }
          --*(_WORD *)(v24 + 32);
          v45 = (v44 >> 62) & 1;
          if ( *(_WORD *)(v24 + 32) )
          {
            v46 = *(_BYTE *)(v24 + 34);
            if ( (_DWORD)v45 )
            {
              v47 = v46 | 7;
            }
            else if ( (v46 & 0x10) != 0 )
            {
              v47 = v46 & 0xF8 | 3;
            }
            else
            {
              v47 = v46 & 0xF8 | 2;
            }
            *(_BYTE *)(v24 + 34) = v47;
            if ( (*(_DWORD *)(v24 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v24 + 16) )
            {
              v38 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v24 + 40) >> 39) & 0x3FFLL));
              *(_BYTE *)(v38 + 675) = 1;
            }
            ++a4[1];
          }
          else if ( (_DWORD)v45 )
          {
            v48 = *(_BYTE *)(v24 + 35);
            if ( (v48 & 0x10) != 0 )
              *(_BYTE *)(v24 + 35) = v48 & 0xEF;
            v49 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v24 + 40) >> 39) & 0x3FFLL));
            v75 = *(_QWORD *)(v24 + 16);
            if ( (v75 & 0x400) == 0 )
            {
              v50 = (v75 & 4) != 0 || (v75 & 2) != 0 ? MI_READ_PTE_LOCK_FREE((unsigned __int64)&v75) : 0LL;
              v75 = v50;
              if ( v50 )
                MiReleasePageFileInfo(v49, v50, 0LL);
            }
            MiInsertPageInFreeOrZeroedList(v23 / 48);
          }
          else
          {
            MiSetNonResidentPteHeat(v24 + 16, 0LL);
            v51 = *(_BYTE *)(v24 + 34);
            if ( (v51 & 0x10) != 0 )
            {
              v52 = 8;
            }
            else
            {
              v52 = 4;
              *(_BYTE *)(v24 + 34) = v51 & 0xF8 | 2;
            }
            MiInsertPageInList(v24, v52);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v66 = a3;
        if ( v10 )
        {
          if ( qword_140C4DD40 && (v10 & 0x10) == 0 )
            v10 &= ~qword_140C4DD40;
          v53 = HIDWORD(v10);
          v70 = a3;
          MiSetNonResidentPteHeat(&v70, 0LL);
          v56 = v70;
          if ( (a3 & 0x400) == 0 )
          {
            v56 = v70 & 0xFFFFFFFFFFFFFFF9uLL;
            v70 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
          if ( v55 )
          {
            if ( v56 )
              updated = MiUpdatePageFileHighInPte(v56, v53);
            else
              updated = MiSwizzleInvalidPte(v53 << 32, v54, *(unsigned __int16 *)(v55 + 204), v40);
            v56 = updated ^ (unsigned __int16)(updated ^ ((_WORD)v39 << 12)) & 0xF000 | 2;
            v70 = v56;
          }
          v66 = v56;
          v10 = 0LL;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)&a2[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
      }
      Flink = v66;
      v58 = (_QWORD *)v77;
      if ( v77 < 0xFFFFF6FB7DBED000uLL || v77 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_110;
      if ( !(unsigned int)MiPteHasShadow(v38, v66, v39, v40) )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (Flink & 1) != 0 )
        {
          Flink |= 0x8000000000000000uLL;
        }
LABEL_110:
        *v58 = Flink;
        goto LABEL_111;
      }
      if ( !HIBYTE(word_140C4DE08) && (Flink & 1) != 0 )
        Flink |= 0x8000000000000000uLL;
      *v58 = Flink;
      MiWritePteShadow(v58, Flink);
LABEL_111:
      v59 = v67;
      if ( !v66 )
        v59 = ++v67;
      v60 = v78;
      if ( v78 != v79 )
      {
        if ( v8 )
        {
          v73 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v73, Flink);
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
          MiReduceShareCount(v8, v65);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v65 = 0;
          if ( v59 )
          {
            v68 = MiReducePteUseCount(v58, v59);
            v59 = 0;
            v67 = 0;
          }
        }
        v8 = 48 * v60 - 0x58000000000LL;
        v79 = v60;
      }
      v61 = v65 + 1;
      v15 = v80 + 4096;
      ++v65;
      v62 = v81-- == 1;
      v80 += 4096LL;
      v12 = 0xFFFFF6FB7DBED7F8uLL;
    }
    while ( !v62 );
    v11 = v82 + 1;
    ++v86;
    a1 = v83;
    ++v82;
  }
  while ( v86 < v69 );
  if ( !v61 )
    return v68;
  v74 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v74, Flink);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
    v61 = v65;
  }
  if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
    MiBadShareCount(v8);
  v63 = (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v61;
  *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ v63) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v63 )
    MiPfnShareCountIsZero(v8, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v59 )
    return (unsigned int)MiReducePteUseCount(v58, v59);
  else
    return v68;
}
