/*
 * XREFs of MiDeletePteList @ 0x1402C3BA0
 * Callers:
 *     MiDeletePteWsleCluster @ 0x1402405EC (MiDeletePteWsleCluster.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 * Callees:
 *     MiReduceShareCount @ 0x14022876C (MiReduceShareCount.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402297E4 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiReducePteUseCount @ 0x14023210C (MiReducePteUseCount.c)
 *     MiDecreaseUsedPtesCount @ 0x140232154 (MiDecreaseUsedPtesCount.c)
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MiDecrementCombinedPte @ 0x1402399A8 (MiDecrementCombinedPte.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiMakeProtoTransition @ 0x1402CBAF0 (MiMakeProtoTransition.c)
 *     MiGetUsedPtesHandle @ 0x1402D03D0 (MiGetUsedPtesHandle.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x1402E76C0 (MiGetPagingFileOffset.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     MiSetNonResidentPteHeat @ 0x14033C3A0 (MiSetNonResidentPteHeat.c)
 *     MiTransferSoftwarePte @ 0x140340078 (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x1405AD6C8 (MiBadShareCount.c)
 *     MiDecrementCloneBlockReference @ 0x1405BA498 (MiDecrementCloneBlockReference.c)
 */

__int64 MiDeletePteList(__int64 a1, __int64 a2, unsigned __int64 a3, ...)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned int v7; // ecx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  signed __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // r8
  signed __int8 v23; // cf
  __int64 v24; // r10
  __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // r15
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rbx
  __int64 v35; // r8
  bool v36; // zf
  __int64 v37; // rdx
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v40; // rax
  __int64 v41; // r10
  __int64 v42; // rdx
  unsigned __int64 v43; // r15
  bool v44; // r12
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v51; // rcx
  char v52; // al
  char v53; // al
  char v54; // cl
  unsigned int v55; // edx
  __int64 v56; // rdx
  _QWORD *CloneAddress; // rax
  ULONG_PTR v58; // rdx
  unsigned int v59; // [rsp+20h] [rbp-98h]
  ULONG_PTR BugCheckParameter4; // [rsp+24h] [rbp-94h]
  unsigned __int64 v61; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v62; // [rsp+38h] [rbp-80h]
  __int64 v63; // [rsp+40h] [rbp-78h] BYREF
  int v64; // [rsp+48h] [rbp-70h] BYREF
  int v65; // [rsp+4Ch] [rbp-6Ch] BYREF
  int v66; // [rsp+50h] [rbp-68h] BYREF
  __int64 v67; // [rsp+58h] [rbp-60h]
  __int64 ContainingPageTable; // [rsp+60h] [rbp-58h]
  __int64 v69; // [rsp+68h] [rbp-50h]
  unsigned __int64 v70; // [rsp+70h] [rbp-48h]
  __int64 v71; // [rsp+78h] [rbp-40h]
  __int64 v74; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v76; // [rsp+E0h] [rbp+28h]
  va_list va1; // [rsp+E8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v74 = va_arg(va1, _QWORD);
  v76 = va_arg(va1, _QWORD);
  v69 = -1LL;
  v3 = 0;
  BugCheckParameter4 = 0LL;
  v4 = a2;
  v5 = a1;
  v6 = v74;
  v7 = *(_DWORD *)(a1 + 12);
  v9 = 0LL;
  v59 = 0;
  v62 = v7;
  if ( (_DWORD)v76 )
  {
    MiFlushTbList(v5);
    v7 = v62;
    v5 = a1;
  }
  if ( *(_QWORD *)(v6 + 40) || *(_QWORD *)(v6 + 48) )
    return 0LL;
  v10 = 0LL;
  v11 = 0LL;
  LODWORD(v76) = 0;
  if ( !v7 )
    return v3;
  while ( 2 )
  {
    v12 = *(_QWORD *)(v5 + 8 * v10 + 24);
    v13 = (v12 & 0x3FF) + 1;
    v14 = v12 & 0xFFFFFFFFFFFFF000uLL;
    v71 = v13;
    v70 = v14;
    do
    {
      v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v16 & 1) != 0
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v51 = *((_QWORD *)&Flink->Flink + ((v15 >> 3) & 0x1FF));
          if ( (v51 & 0x20) != 0 )
            v16 |= 0x20uLL;
          if ( (v51 & 0x42) != 0 )
            v16 |= 0x42uLL;
        }
      }
      v61 = v16 & 0xFFFFFFFFFFFFFBFEuLL | 1;
      v18 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v61) >> 12) & 0xFFFFFFFFFFLL);
      v19 = *(_QWORD *)(v18 - 0x220000000000LL + 40);
      v20 = v18 - 0x220000000000LL;
      v21 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v19 >> 43) & 0x3FF));
      v67 = v21;
      if ( v19 < 0 )
      {
        v42 = *(_QWORD *)(v20 + 8);
        v43 = v42 | 0x8000000000000000uLL;
        v44 = (v19 & 0x10000000000LL) == 0 && v42 >= 0 && v42;
        v45 = 0LL;
        ContainingPageTable = MiGetContainingPageTable(v15);
        v65 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v65);
          while ( *(__int64 *)(v20 + 24) < 0 );
        }
        if ( (v61 & 0x42) != 0 )
          v45 = MiCaptureDirtyBitToPfn(v20);
        MiDecrementShareCount(v20, v46, v47, v48);
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v45 )
          MiReleasePageFileInfo(v67, v45, 1LL);
        if ( v44 )
        {
          v49 = MiDecrementCombinedPte(a2 + 1664, v43);
        }
        else
        {
          CloneAddress = MiLocateCloneAddress(a2, v43);
          v49 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v58);
        }
        if ( v49 == 3 )
        {
          ++*(_QWORD *)(v74 + 8);
        }
        else if ( v49 == 5 )
        {
          ++*(_QWORD *)(v74 + 24);
        }
        v4 = a2;
        v61 = a3;
      }
      else
      {
        v64 = 0;
        v22 = v19 & 0xFFFFFFFFFFLL;
        v23 = _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL);
        ContainingPageTable = v22;
        if ( v23 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v64);
            while ( *(__int64 *)(v20 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) );
          v21 = v67;
        }
        v24 = *(_QWORD *)(v20 + 16);
        v25 = *(_QWORD *)(v20 + 24) | 0x4000000000000000LL;
        *(_QWORD *)(v20 + 24) = v25;
        if ( (v24 & 2) != 0 && !MI_IS_PTE_IN_WS_SWAP_SET(v21, (_WORD *)(v20 + 16)) && *(_WORD *)(v20 + 32) == 1 && a3 )
        {
          v11 = v41;
          *(_QWORD *)(v20 + 16) = v41 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        if ( (*(_BYTE *)(v20 + 34) & 7) != 6 )
          MiBadShareCount(v18 - 0x220000000000LL, v17, v22, v25);
        v26 = (v25 & 0x3FFFFFFFFFFFFFFFLL) - 1;
        v27 = v25 ^ (v26 ^ v25) & 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v20 + 24) = v27;
        if ( (v25 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        {
          if ( *(_QWORD *)(v20 + 40) < v26 )
          {
            MiMakeProtoTransition(v18 - 0x220000000000LL, 1LL);
            v27 = *(_QWORD *)(v20 + 24);
          }
          --*(_WORD *)(v20 + 32);
          v28 = (v27 >> 62) & 1;
          if ( *(_WORD *)(v20 + 32) )
          {
            v52 = *(_BYTE *)(v20 + 34);
            if ( (_DWORD)v28 )
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
            *(_BYTE *)(v20 + 34) = v53;
            if ( (*(_DWORD *)(v20 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v20 + 16) )
              *(_BYTE *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL)) + 699LL) = 1;
            ++*(_QWORD *)(v74 + 8);
          }
          else if ( (_DWORD)v28 )
          {
            v29 = *(_BYTE *)(v20 + 35);
            if ( (v29 & 0x10) != 0 )
              *(_BYTE *)(v20 + 35) = v29 & 0xEF;
            v30 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
            v63 = *(_QWORD *)(v20 + 16);
            if ( (v63 & 0x400) == 0 )
            {
              if ( (v63 & 4) != 0 || (v63 & 2) != 0 )
              {
                v40 = MI_READ_PTE_LOCK_FREE(&v63);
                v63 = v40;
                if ( v40 )
                  MiReleasePageFileInfo(v30, v40, 0LL);
              }
              else
              {
                v63 = 0LL;
              }
            }
            MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * (v18 >> 4));
            v4 = a2;
          }
          else
          {
            MiSetNonResidentPteHeat(v20 + 16, 0LL);
            v54 = *(_BYTE *)(v20 + 34);
            if ( (v54 & 0x10) != 0 )
            {
              v55 = 8;
            }
            else
            {
              v55 = 4;
              *(_BYTE *)(v20 + 34) = v54 & 0xF8 | 2;
            }
            MiInsertPageInList(v18 - 0x220000000000LL, v55);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v61 = a3;
        if ( v11 )
        {
          v56 = *(_QWORD *)(v67 + 8LL * ((unsigned __int16)v11 >> 12) + 16736);
          if ( qword_140C50780 && (v11 & 0x10) == 0 )
            v11 &= ~qword_140C50780;
          v61 = MiTransferSoftwarePte(a3, v56, HIDWORD(v11), 2LL);
          v11 = 0LL;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      }
      v31 = v61;
      if ( !(unsigned int)MiPteInShadowRange(v15) )
        goto LABEL_27;
      if ( !(unsigned int)MiPteHasShadow() )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v31 & 1) != 0 )
        {
          v31 |= 0x8000000000000000uLL;
        }
LABEL_27:
        *(_QWORD *)v15 = v31;
        goto LABEL_28;
      }
      if ( !HIBYTE(word_140C51864) && (v31 & 1) != 0 )
        v31 |= 0x8000000000000000uLL;
      *(_QWORD *)v15 = v31;
      MiWritePteShadow(v15, v31);
LABEL_28:
      if ( !v61 )
        LODWORD(BugCheckParameter4) = BugCheckParameter4 + 1;
      v34 = ContainingPageTable;
      if ( ContainingPageTable != v69 )
      {
        if ( v9 )
        {
          v66 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v66);
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          MiReduceShareCount(v9, v59);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v59 = 0;
          if ( (_DWORD)BugCheckParameter4 )
          {
            HIDWORD(BugCheckParameter4) = MiReducePteUseCount(v15, BugCheckParameter4);
            LODWORD(BugCheckParameter4) = 0;
          }
        }
        v9 = 48 * v34 - 0x220000000000LL;
        v69 = v34;
      }
      v35 = v59 + 1;
      v14 = v70 + 4096;
      ++v59;
      v36 = v71-- == 1;
      v70 += 4096LL;
    }
    while ( !v36 );
    v10 = (unsigned int)(v76 + 1);
    LODWORD(v76) = v10;
    if ( (unsigned int)v10 < v62 )
    {
      v5 = a1;
      continue;
    }
    break;
  }
  if ( !(_DWORD)v35 )
    return HIDWORD(BugCheckParameter4);
  LODWORD(v74) = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx((__int64 *)va);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    v35 = v59;
  }
  if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
    MiBadShareCount(v9, v32, v35, v33);
  v37 = (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) - (unsigned int)v35;
  *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ v37) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v37 )
    MiPfnShareCountIsZero(v9, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)BugCheckParameter4 )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v15 << 25) >> 16);
    return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)BugCheckParameter4) == 0;
  }
  else
  {
    return HIDWORD(BugCheckParameter4);
  }
}
