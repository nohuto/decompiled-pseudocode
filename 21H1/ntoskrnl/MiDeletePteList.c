/*
 * XREFs of MiDeletePteList @ 0x1402939C0
 * Callers:
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiDeletePteWsleCluster @ 0x140310EB8 (MiDeletePteWsleCluster.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiSetNonResidentPteHeat @ 0x140224C70 (MiSetNonResidentPteHeat.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReduceShareCount @ 0x1402F23FC (MiReduceShareCount.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402FDD94 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MiDecrementCombinedPte @ 0x140364274 (MiDecrementCombinedPte.c)
 *     MiReducePteUseCount @ 0x1403ED870 (MiReducePteUseCount.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403ED924 (MiBadShareCount.c)
 *     MiDecrementCloneBlockReference @ 0x140554398 (MiDecrementCloneBlockReference.c)
 *     MiMakeProtoTransition @ 0x140556C78 (MiMakeProtoTransition.c)
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
  __int64 v23; // r8
  __int64 v24; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // r10
  int v32; // r11d
  unsigned __int64 v33; // r15
  bool v34; // r12
  __int64 ContainingPageTable; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r11
  __int64 v40; // rbx
  signed __int8 v41; // cf
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  __int64 v51; // rdx
  char v52; // al
  char v53; // al
  char v54; // al
  __int64 v55; // r15
  __int64 v56; // rax
  char v57; // cl
  unsigned int v58; // edx
  __int64 v59; // rdi
  __int64 v60; // r10
  __int64 v61; // rax
  __int64 updated; // rax
  _QWORD *v63; // r14
  unsigned int v64; // r15d
  __int64 v65; // rbx
  __int64 v66; // r8
  bool v67; // zf
  __int64 v68; // r9
  __int64 v69; // rdx
  unsigned int v71; // [rsp+20h] [rbp-61h]
  unsigned __int64 v72; // [rsp+28h] [rbp-59h] BYREF
  unsigned int v73; // [rsp+30h] [rbp-51h]
  unsigned int v74; // [rsp+34h] [rbp-4Dh]
  unsigned int v75; // [rsp+38h] [rbp-49h]
  __int64 v76; // [rsp+40h] [rbp-41h] BYREF
  int v77; // [rsp+48h] [rbp-39h] BYREF
  int v78; // [rsp+4Ch] [rbp-35h] BYREF
  int v79; // [rsp+50h] [rbp-31h] BYREF
  int v80; // [rsp+54h] [rbp-2Dh] BYREF
  __int64 v81; // [rsp+58h] [rbp-29h] BYREF
  __int64 v82; // [rsp+60h] [rbp-21h]
  unsigned __int64 v83; // [rsp+68h] [rbp-19h]
  __int64 v84; // [rsp+70h] [rbp-11h]
  __int64 v85; // [rsp+78h] [rbp-9h]
  unsigned __int64 v86; // [rsp+80h] [rbp-1h]
  __int64 v87; // [rsp+88h] [rbp+7h]
  __int64 v88; // [rsp+90h] [rbp+Fh]
  __int64 v89; // [rsp+E0h] [rbp+5Fh]
  unsigned int v92; // [rsp+100h] [rbp+7Fh]

  v89 = a1;
  v5 = *(_DWORD *)(a1 + 12);
  v8 = 0LL;
  v73 = 0;
  v9 = 0;
  v74 = 0;
  v71 = 0;
  v85 = -1LL;
  v75 = v5;
  if ( a5 )
  {
    MiFlushTbList(a1, a2);
    a1 = v89;
    v5 = v75;
  }
  if ( a4[4] || a4[5] )
    return 0LL;
  v10 = 0LL;
  v92 = 0;
  if ( !v5 )
    return v9;
  v11 = 0LL;
  v88 = 0LL;
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    v13 = *(_QWORD *)(a1 + 8 * v11 + 24);
    Flink = (v13 & 0x3FF) + 1;
    v15 = v13 & 0xFFFFFFFFFFFFF000uLL;
    v87 = Flink;
    v86 = v15;
    do
    {
      v16 = (v15 >> 9) & 0x7FFFFFFFF8LL;
      v17 = *(_QWORD *)(v16 - 0x98000000000LL);
      v83 = v16 - 0x98000000000LL;
      if ( (unsigned __int64)(v16 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)(v16 - 0x98000000000LL) <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v16, Flink)
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
      v72 = v20;
      if ( (unsigned __int64)&v72 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v72 <= v12
        && (unsigned int)MiPteHasShadow(&v72, Flink)
        && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        v21 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v21 )
        {
          v22 = *((_QWORD *)&v21->Flink + (((unsigned __int64)&v72 >> 3) & 0x1FF));
          if ( (v22 & 0x20) != 0 )
            v20 |= 0x20uLL;
          if ( (v22 & 0x42) != 0 )
            v20 |= 0x42uLL;
        }
        else
        {
          v20 = v72;
        }
      }
      v23 = (v20 >> 12) & 0xFFFFFFFFFLL;
      v24 = 48 * v23;
      v25 = *(_QWORD *)(48 * v23 - 0x58000000000LL + 40);
      v26 = 48 * v23 - 0x58000000000LL;
      v27 = *(_QWORD *)(qword_140C4E588 + 8 * ((v25 >> 39) & 0x3FF));
      v82 = v27;
      if ( (unsigned int)MI_PFN_IS_PROTO(v26, v25, v23) )
      {
        v33 = *(_QWORD *)(v26 + 8) | 0x8000000000000000uLL;
        v34 = (v28 & 0x1000000000LL) == 0 && *(__int64 *)(v26 + 8) > 0;
        ContainingPageTable = MiGetContainingPageTable(v30);
        v77 = v39;
        v40 = v39;
        v41 = _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL);
        v84 = ContainingPageTable;
        if ( v41 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v77, v36, v37, v38);
            while ( *(__int64 *)(v26 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
        }
        if ( (v72 & 0x42) != 0 )
          v40 = MiCaptureDirtyBitToPfn(v26);
        MiDecrementShareCount(v26);
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v40 )
          MiReleasePageFileInfo(v82, v40, 1LL);
        if ( v34 )
        {
          v42 = MiDecrementCombinedPte(&a2[1].ActiveProcessorsPadding[6], v33);
        }
        else
        {
          CloneAddress = MiLocateCloneAddress(a2, v33);
          v42 = MiDecrementCloneBlockReference(CloneAddress, v47);
        }
        if ( v42 == 3 )
        {
          v72 = a3;
          ++a4[1];
        }
        else
        {
          if ( v42 == 5 )
            ++a4[2];
          v72 = a3;
        }
      }
      else
      {
        v48 = v31 & v28;
        v78 = v32;
        v41 = _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL);
        v84 = v48;
        if ( v41 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v78, v48, v29, v30);
            while ( *(__int64 *)(v26 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
        }
        v45 = *(_QWORD *)(v26 + 16);
        *(_QWORD *)(v26 + 24) |= 0x4000000000000000uLL;
        if ( (v45 & 2) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v27, v26 + 16) && *(_WORD *)(v26 + 32) == 1 && a3 )
        {
          v10 = v45;
          v45 &= ~2uLL;
          *(_QWORD *)(v26 + 16) = v45;
        }
        if ( (*(_BYTE *)(v26 + 34) & 7) != 6 )
          MiBadShareCount(v26);
        v44 = 0x3FFFFFFFFFFFFFFFLL;
        v43 = (*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
        v49 = *(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) ^ v43) & 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v26 + 24) = v49;
        if ( !v43 )
        {
          if ( (unsigned int)MI_PFN_IS_PROTO(v26, v49, 0x3FFFFFFFFFFFFFFFLL) )
          {
            MiMakeProtoTransition();
            v50 = *(_QWORD *)(v26 + 24);
          }
          --*(_WORD *)(v26 + 32);
          v51 = (v50 >> 62) & 1;
          if ( *(_WORD *)(v26 + 32) )
          {
            v52 = *(_BYTE *)(v26 + 34);
            if ( (_DWORD)v51 )
            {
              v53 = v52 | 7;
            }
            else if ( (v52 & 0x10) != 0 )
            {
              v53 = v52 & 0xF8 | 3;
            }
            else
            {
              v53 = v52 & 0xF8 | 2;
            }
            *(_BYTE *)(v26 + 34) = v53;
            if ( (*(_DWORD *)(v26 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v26 + 16) )
            {
              v43 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL));
              *(_BYTE *)(v43 + 675) = 1;
            }
            ++a4[1];
          }
          else if ( (_DWORD)v51 )
          {
            v54 = *(_BYTE *)(v26 + 35);
            if ( (v54 & 0x10) != 0 )
              *(_BYTE *)(v26 + 35) = v54 & 0xEF;
            v55 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL));
            v81 = *(_QWORD *)(v26 + 16);
            if ( (v81 & 0x400) == 0 )
            {
              v56 = (v81 & 4) != 0 || (v81 & 2) != 0 ? MI_READ_PTE_LOCK_FREE((unsigned __int64)&v81) : 0LL;
              v81 = v56;
              if ( v56 )
                MiReleasePageFileInfo(v55, v56, 0LL);
            }
            MiInsertPageInFreeOrZeroedList(v24 / 48);
          }
          else
          {
            MiSetNonResidentPteHeat((unsigned __int64 *)(v26 + 16), 0);
            v57 = *(_BYTE *)(v26 + 34);
            if ( (v57 & 0x10) != 0 )
            {
              v58 = 8;
            }
            else
            {
              v58 = 4;
              *(_BYTE *)(v26 + 34) = v57 & 0xF8 | 2;
            }
            MiInsertPageInList(v26, v58);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v72 = a3;
        if ( v10 )
        {
          if ( qword_140C4DE80 && (v10 & 0x10) == 0 )
            v10 &= ~qword_140C4DE80;
          v59 = HIDWORD(v10);
          v76 = a3;
          MiSetNonResidentPteHeat((unsigned __int64 *)&v76, 0);
          v61 = v76;
          if ( (a3 & 0x400) == 0 )
          {
            v61 = v76 & 0xFFFFFFFFFFFFFFF9uLL;
            v76 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
          if ( v60 )
          {
            if ( v61 )
              updated = MiUpdatePageFileHighInPte(v61, v59);
            else
              updated = MiSwizzleInvalidPte(v59 << 32);
            v61 = updated ^ (unsigned __int16)(updated ^ ((_WORD)v44 << 12)) & 0xF000 | 2;
            v76 = v61;
          }
          v72 = v61;
          v10 = 0LL;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)&a2[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
      }
      Flink = v72;
      v63 = (_QWORD *)v83;
      if ( v83 < 0xFFFFF6FB7DBED000uLL || v83 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_110;
      if ( !(unsigned int)MiPteHasShadow(v43, v72) )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (Flink & 1) != 0 )
        {
          Flink |= 0x8000000000000000uLL;
        }
LABEL_110:
        *v63 = Flink;
        goto LABEL_111;
      }
      if ( !HIBYTE(word_140C4DF48) && (Flink & 1) != 0 )
        Flink |= 0x8000000000000000uLL;
      *v63 = Flink;
      MiWritePteShadow(v63, Flink);
LABEL_111:
      v64 = v73;
      if ( !v72 )
        v64 = ++v73;
      v65 = v84;
      if ( v84 != v85 )
      {
        if ( v8 )
        {
          v79 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v79, Flink, v44, v45);
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
          MiReduceShareCount(v8, v71);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v71 = 0;
          if ( v64 )
          {
            v74 = MiReducePteUseCount(v63, v64);
            v64 = 0;
            v73 = 0;
          }
        }
        v8 = 48 * v65 - 0x58000000000LL;
        v85 = v65;
      }
      v66 = v71 + 1;
      v15 = v86 + 4096;
      ++v71;
      v67 = v87-- == 1;
      v86 += 4096LL;
      v12 = 0xFFFFF6FB7DBED7F8uLL;
      v68 = 0xFFFFF68000000000uLL;
    }
    while ( !v67 );
    v11 = v88 + 1;
    ++v92;
    a1 = v89;
    ++v88;
  }
  while ( v92 < v75 );
  if ( !(_DWORD)v66 )
    return v74;
  v80 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v80, Flink, v66, v68);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
    v66 = v71;
  }
  if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
    MiBadShareCount(v8);
  v69 = (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) - (unsigned int)v66;
  *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ v69) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v69 )
    MiPfnShareCountIsZero(v8, 0LL, v66);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v64 )
    return (unsigned int)MiReducePteUseCount(v63, v64);
  else
    return v74;
}
