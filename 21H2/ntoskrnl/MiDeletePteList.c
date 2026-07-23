/*
 * XREFs of MiDeletePteList @ 0x1402D6070
 * Callers:
 *     MiDeletePteWsleCluster @ 0x14023F0C8 (MiDeletePteWsleCluster.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 * Callees:
 *     MiReduceShareCount @ 0x14021B1BC (MiReduceShareCount.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14022AE80 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiSetNonResidentPteHeat @ 0x1402E3000 (MiSetNonResidentPteHeat.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiDecrementCombinedPte @ 0x140367074 (MiDecrementCombinedPte.c)
 *     MiReducePteUseCount @ 0x1403F45E0 (MiReducePteUseCount.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F4934 (MiBadShareCount.c)
 *     MiDecrementCloneBlockReference @ 0x14055A0C8 (MiDecrementCloneBlockReference.c)
 *     MiMakeProtoTransition @ 0x14055C9A8 (MiMakeProtoTransition.c)
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
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r10
  int v31; // r11d
  unsigned __int64 v32; // r15
  bool v33; // r12
  __int64 ContainingPageTable; // rax
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rbx
  signed __int8 v37; // cf
  __int64 v38; // r8
  int v39; // eax
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v41; // rdx
  __int64 v42; // r9
  unsigned __int64 v43; // r9
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rdx
  char v47; // al
  char v48; // al
  char v49; // al
  __int64 v50; // r15
  unsigned __int64 v51; // rax
  char v52; // cl
  __int64 v53; // rdx
  unsigned __int64 v54; // rdi
  __int64 v55; // r10
  unsigned __int64 v56; // rax
  __int64 updated; // rax
  __int16 v58; // r8
  __int64 v59; // rdx
  _QWORD *v60; // r14
  unsigned int v61; // r15d
  __int64 v62; // rbx
  unsigned int v63; // r8d
  bool v64; // zf
  __int64 v65; // rdx
  unsigned int v67; // [rsp+20h] [rbp-61h]
  unsigned __int64 v68; // [rsp+28h] [rbp-59h] BYREF
  unsigned int v69; // [rsp+30h] [rbp-51h]
  unsigned int v70; // [rsp+34h] [rbp-4Dh]
  unsigned int v71; // [rsp+38h] [rbp-49h]
  unsigned __int64 v72; // [rsp+40h] [rbp-41h] BYREF
  int v73; // [rsp+48h] [rbp-39h] BYREF
  int v74; // [rsp+4Ch] [rbp-35h] BYREF
  int v75; // [rsp+50h] [rbp-31h] BYREF
  int v76; // [rsp+54h] [rbp-2Dh] BYREF
  unsigned __int64 v77; // [rsp+58h] [rbp-29h] BYREF
  __int64 v78; // [rsp+60h] [rbp-21h]
  unsigned __int64 v79; // [rsp+68h] [rbp-19h]
  __int64 v80; // [rsp+70h] [rbp-11h]
  __int64 v81; // [rsp+78h] [rbp-9h]
  unsigned __int64 v82; // [rsp+80h] [rbp-1h]
  __int64 v83; // [rsp+88h] [rbp+7h]
  __int64 v84; // [rsp+90h] [rbp+Fh]
  __int64 v85; // [rsp+E0h] [rbp+5Fh]
  unsigned int v88; // [rsp+100h] [rbp+7Fh]

  v85 = a1;
  v5 = *(_DWORD *)(a1 + 12);
  v8 = 0LL;
  v69 = 0;
  v9 = 0;
  v70 = 0;
  v67 = 0;
  v81 = -1LL;
  v71 = v5;
  if ( a5 )
  {
    MiFlushTbList(a1);
    a1 = v85;
    v5 = v71;
  }
  if ( a4[4] || a4[5] )
    return 0LL;
  v10 = 0LL;
  v88 = 0;
  if ( !v5 )
    return v9;
  v11 = 0LL;
  v84 = 0LL;
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    v13 = *(_QWORD *)(a1 + 8 * v11 + 24);
    v14 = (v13 & 0x3FF) + 1;
    v15 = v13 & 0xFFFFFFFFFFFFF000uLL;
    v83 = v14;
    v82 = v15;
    do
    {
      v16 = (v15 >> 9) & 0x7FFFFFFFF8LL;
      v17 = *(_QWORD *)(v16 - 0x98000000000LL);
      v79 = v16 - 0x98000000000LL;
      if ( (unsigned __int64)(v16 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)(v16 - 0x98000000000LL) <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v20 = *((_QWORD *)&Flink->Flink + ((v18 >> 3) & 0x1FF));
          v21 = v17 | 0x20;
          if ( (v20 & 0x20) == 0 )
            v21 = v17;
          v17 = v21;
          if ( (v20 & 0x42) != 0 )
            v17 = v21 | 0x42;
        }
      }
      v22 = v17 & 0xFFFFFFFFFFFFFBFEuLL | 1;
      v68 = v22;
      if ( (unsigned __int64)&v68 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v68 <= v12
        && (unsigned int)MiPteHasShadow()
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v23 )
        {
          v24 = *((_QWORD *)&v23->Flink + (((unsigned __int64)&v68 >> 3) & 0x1FF));
          if ( (v24 & 0x20) != 0 )
            v22 |= 0x20uLL;
          if ( (v24 & 0x42) != 0 )
            v22 |= 0x42uLL;
        }
        else
        {
          v22 = v68;
        }
      }
      v25 = 48 * ((v22 >> 12) & 0xFFFFFFFFFLL);
      v26 = v25 - 0x58000000000LL;
      v27 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v25 - 0x58000000000LL + 40) >> 39) & 0x3FFLL));
      v78 = v27;
      if ( (unsigned int)MI_PFN_IS_PROTO(v25 - 0x58000000000LL) )
      {
        v32 = *(_QWORD *)(v26 + 8) | 0x8000000000000000uLL;
        v33 = (v28 & 0x1000000000LL) == 0 && *(__int64 *)(v26 + 8) > 0;
        ContainingPageTable = MiGetContainingPageTable(v29);
        v73 = v35;
        v36 = v35;
        v37 = _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL);
        v80 = ContainingPageTable;
        if ( v37 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v73);
            while ( *(__int64 *)(v26 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
        }
        if ( (v68 & 0x42) != 0 )
          v36 = MiCaptureDirtyBitToPfn(v26);
        MiDecrementShareCount(v26);
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v36 )
          MiReleasePageFileInfo(v78, v36, 1);
        if ( v33 )
        {
          v39 = MiDecrementCombinedPte(a2 + 1664, v32);
        }
        else
        {
          CloneAddress = MiLocateCloneAddress(a2, v32, v38);
          v39 = MiDecrementCloneBlockReference(CloneAddress, v41);
        }
        if ( v39 == 3 )
        {
          v68 = a3;
          ++a4[1];
        }
        else
        {
          if ( v39 == 5 )
            ++a4[2];
          v68 = a3;
        }
      }
      else
      {
        v74 = v31;
        v37 = _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL);
        v80 = v30 & v28;
        if ( v37 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v74);
            while ( *(__int64 *)(v26 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
        }
        v42 = *(_QWORD *)(v26 + 16);
        *(_QWORD *)(v26 + 24) |= 0x4000000000000000uLL;
        if ( (v42 & 2) != 0
          && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v27, (_WORD *)(v26 + 16))
          && *(_WORD *)(v26 + 32) == 1
          && a3 )
        {
          v10 = v43;
          *(_QWORD *)(v26 + 16) = v43 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        if ( (*(_BYTE *)(v26 + 34) & 7) != 6 )
          MiBadShareCount(v26);
        v44 = (*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
        *(_QWORD *)(v26 + 24) ^= (*(_QWORD *)(v26 + 24) ^ v44) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v44 )
        {
          if ( (unsigned int)MI_PFN_IS_PROTO(v26) )
          {
            MiMakeProtoTransition();
            v45 = *(_QWORD *)(v26 + 24);
          }
          --*(_WORD *)(v26 + 32);
          v46 = (v45 >> 62) & 1;
          if ( *(_WORD *)(v26 + 32) )
          {
            v47 = *(_BYTE *)(v26 + 34);
            if ( (_DWORD)v46 )
            {
              v48 = v47 | 7;
            }
            else if ( (v47 & 0x10) != 0 )
            {
              v48 = v47 & 0xF8 | 3;
            }
            else
            {
              v48 = v47 & 0xF8 | 2;
            }
            *(_BYTE *)(v26 + 34) = v48;
            if ( (*(_DWORD *)(v26 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v26 + 16) )
              *(_BYTE *)(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL)) + 675LL) = 1;
            ++a4[1];
          }
          else if ( (_DWORD)v46 )
          {
            v49 = *(_BYTE *)(v26 + 35);
            if ( (v49 & 0x10) != 0 )
              *(_BYTE *)(v26 + 35) = v49 & 0xEF;
            v50 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL));
            v77 = *(_QWORD *)(v26 + 16);
            if ( (v77 & 0x400) == 0 )
            {
              v51 = (v77 & 4) != 0 || (v77 & 2) != 0 ? MI_READ_PTE_LOCK_FREE(&v77) : 0LL;
              v77 = v51;
              if ( v51 )
                MiReleasePageFileInfo(v50, v51, 0);
            }
            MiInsertPageInFreeOrZeroedList(v25 / 48);
          }
          else
          {
            MiSetNonResidentPteHeat(v26 + 16, 0LL);
            v52 = *(_BYTE *)(v26 + 34);
            if ( (v52 & 0x10) != 0 )
            {
              v53 = 8LL;
            }
            else
            {
              v53 = 4LL;
              *(_BYTE *)(v26 + 34) = v52 & 0xF8 | 2;
            }
            MiInsertPageInList(v26, v53);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v68 = a3;
        if ( v10 )
        {
          if ( qword_140C4DF80 && (v10 & 0x10) == 0 )
            v10 &= ~qword_140C4DF80;
          v54 = HIDWORD(v10);
          v72 = a3;
          MiSetNonResidentPteHeat(&v72, 0LL);
          v56 = v72;
          if ( (a3 & 0x400) == 0 )
          {
            v56 = v72 & 0xFFFFFFFFFFFFFFF9uLL;
            v72 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
          if ( v55 )
          {
            if ( v56 )
              updated = MiUpdatePageFileHighInPte(v56, v54);
            else
              updated = MiSwizzleInvalidPte(v54 << 32);
            v56 = updated ^ (unsigned __int16)(updated ^ (v58 << 12)) & 0xF000 | 2;
            v72 = v56;
          }
          v68 = v56;
          v10 = 0LL;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      }
      v59 = v68;
      v60 = (_QWORD *)v79;
      if ( v79 < 0xFFFFF6FB7DBED000uLL || v79 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_110;
      if ( !(unsigned int)MiPteHasShadow() )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v59 & 1) != 0 )
        {
          v59 |= 0x8000000000000000uLL;
        }
LABEL_110:
        *v60 = v59;
        goto LABEL_111;
      }
      if ( !HIBYTE(word_140C4E048) && (v59 & 1) != 0 )
        v59 |= 0x8000000000000000uLL;
      *v60 = v59;
      MiWritePteShadow((__int64)v60, v59);
LABEL_111:
      v61 = v69;
      if ( !v68 )
        v61 = ++v69;
      v62 = v80;
      if ( v80 != v81 )
      {
        if ( v8 )
        {
          v75 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v75);
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
          MiReduceShareCount(v8, v67);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v67 = 0;
          if ( v61 )
          {
            v70 = MiReducePteUseCount(v60, v61);
            v61 = 0;
            v69 = 0;
          }
        }
        v8 = 48 * v62 - 0x58000000000LL;
        v81 = v62;
      }
      v63 = v67 + 1;
      v15 = v82 + 4096;
      ++v67;
      v64 = v83-- == 1;
      v82 += 4096LL;
      v12 = 0xFFFFF6FB7DBED7F8uLL;
    }
    while ( !v64 );
    v11 = v84 + 1;
    ++v88;
    a1 = v85;
    ++v84;
  }
  while ( v88 < v71 );
  if ( !v63 )
    return v70;
  v76 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v76);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
    v63 = v67;
  }
  if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
    MiBadShareCount(v8);
  v65 = (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v63;
  *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ v65) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v65 )
    MiPfnShareCountIsZero(v8, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v61 )
    return (unsigned int)MiReducePteUseCount(v60, v61);
  else
    return v70;
}
