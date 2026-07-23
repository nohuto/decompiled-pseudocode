/*
 * XREFs of MiPfnRangeIsZero @ 0x1403B9D58
 * Callers:
 *     MiFreedUnusedPfnPagesWorker @ 0x1403B98C8 (MiFreedUnusedPfnPagesWorker.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiFreeLargeZeroPages @ 0x1403080A4 (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiReplacePfnWithGapMapping @ 0x1403BA0BC (MiReplacePfnWithGapMapping.c)
 *     MiPreparePfnDatabasePageForFree @ 0x1403BA194 (MiPreparePfnDatabasePageForFree.c)
 *     MiClearSystemAccessBits @ 0x1403BA2AC (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA398 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplicatePfnDatabaseMappings @ 0x14052F16C (MiReplicatePfnDatabaseMappings.c)
 */

void __fastcall MiPfnRangeIsZero(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 LeafVa; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  int v7; // eax
  int v8; // ebp
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v18; // zf
  signed __int32 v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+20h] [rbp-78h]
  _OWORD v27[7]; // [rsp+28h] [rbp-70h] BYREF
  int v28; // [rsp+A0h] [rbp+8h]
  BOOL v29; // [rsp+A8h] [rbp+10h]
  __int64 v30; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+20h]

  v2 = a2;
  LeafVa = a1;
  v27[0] = 0LL;
  if ( a2 > MmPfnDatabase + (MxPfnAllocation << 12) )
    v2 = MmPfnDatabase + (MxPfnAllocation << 12);
  v27[1] = 0LL;
  if ( a1 >= v2 )
    return;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  do
  {
    v7 = MI_IS_PHYSICAL_ADDRESS(LeafVa);
    v8 = v7;
    v9 = 1LL;
    v10 = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v31 = 1LL;
    LODWORD(v11) = 3;
    if ( v7 > 0 )
    {
      v22 = (unsigned int)v7;
      do
      {
        LODWORD(v11) = v11 - 1;
        v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v22;
      }
      while ( v22 );
      if ( (_DWORD)v11 != 3 )
      {
        v11 = (unsigned int)(v11 - 1);
        v9 = MiLargePageSizes[v11];
        v31 = v9;
      }
    }
    if ( (((v9 << 12) - 1) & LeafVa) == 0 && v2 - LeafVa >= v9 << 12 )
    {
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
      {
        v20 = 512 - ((v10 >> 3) & 0x1FF);
        v21 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v7 > 0 )
        {
          v23 = (unsigned int)v7;
          do
          {
            v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v23;
          }
          while ( v23 );
        }
        if ( ((v21 ^ v10) & 0xFFFFFFFFF000LL) == 0 )
          v20 = (__int64)(v21 - v10) >> 3;
        MiClearSystemAccessBits(v10, v20, (unsigned int)v7);
      }
      v28 = v8;
      if ( v8 < 4 )
      {
        v29 = MiPteInShadowRange((unsigned __int64)&v30);
        while ( 1 )
        {
          v12 = MI_READ_PTE_LOCK_FREE(v10);
          v30 = v12;
          v13 = v12;
          if ( v8 != v28 && (v12 & 0x20) != 0 )
            MiClearSystemAccessBits(v10, 1LL, 0LL);
          MiPreparePfnDatabasePageForFree(v10, (unsigned int)v8, (unsigned int)v11);
          v4 += v31;
          if ( v29
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v13 & 1) != 0
            && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v25 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v30 >> 3) & 0x1FF));
              if ( (v25 & 0x20) != 0 )
                v13 |= 0x20uLL;
              if ( (v25 & 0x42) != 0 )
                v13 |= 0x42uLL;
            }
            else
            {
              v13 = v30;
            }
          }
          v14 = (_QWORD *)(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          *v14 = *((_QWORD *)v27 + (unsigned int)v11);
          *((_QWORD *)v27 + (unsigned int)v11) = v14;
          if ( v8 == 3 )
          {
            v26 = v10;
            v6 = v10;
            if ( !v5 )
              v5 = v10;
          }
          else
          {
            v6 = v26;
          }
          MiReplacePfnWithGapMapping(v10, (unsigned int)v8);
          if ( (*(_QWORD *)(48 * MiGetContainingPageTable(v10 & 0xFFFFFFFFFFFFF000uLL) - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
            break;
          v31 = 1LL;
          LODWORD(v11) = 3;
          v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( ++v8 >= 4 )
            goto LABEL_17;
        }
        v10 += 8LL;
      }
LABEL_17:
      v15 = v10;
      goto LABEL_18;
    }
    if ( !(unsigned int)MiDemoteValidLargePageOneLevel(LeafVa) )
    {
      v15 = v10 + 8;
LABEL_18:
      LeafVa = MiGetLeafVa(v15);
    }
  }
  while ( LeafVa < v2 );
  if ( v5 )
    MiReplicatePfnDatabaseMappings(v5, v6);
  _InterlockedExchangeAdd64(&qword_140C4F018, -(__int64)v4);
  MiFreeLargeZeroPages((int)&MiSystemPartition, (char *)v27, 0);
  MiReturnCommit((__int64)&MiSystemPartition, v4);
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable != -1 )
  {
    if ( v4 + CachedResidentAvailable <= 0x100 )
    {
      do
      {
        if ( v4 >= 0x80000 )
          break;
        v19 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable + v4,
                CachedResidentAvailable);
        v18 = (_DWORD)CachedResidentAvailable == v19;
        LODWORD(CachedResidentAvailable) = v19;
        if ( v18 )
          return;
      }
      while ( v19 != -1 && v4 + v19 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v4 += (int)CachedResidentAvailable - 192;
    }
  }
  if ( v4 )
    _InterlockedExchangeAdd64(&qword_140C529C0, v4);
}
