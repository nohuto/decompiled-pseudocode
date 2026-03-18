/*
 * XREFs of MiPfnRangeIsZero @ 0x1403C8EF8
 * Callers:
 *     MiFreedUnusedPfnPagesWorker @ 0x1403C8AA8 (MiFreedUnusedPfnPagesWorker.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x14026E05C (MiFreeLargeZeroPages.c)
 *     MiInitializeLargePfnList @ 0x14026E1F4 (MiInitializeLargePfnList.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiReplacePfnWithGapMapping @ 0x1403C92F4 (MiReplacePfnWithGapMapping.c)
 *     MiPreparePfnDatabasePageForFree @ 0x1403C9394 (MiPreparePfnDatabasePageForFree.c)
 *     MiClearSystemAccessBits @ 0x1403C9494 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReplicatePfnDatabaseMappings @ 0x1405839A4 (MiReplicatePfnDatabaseMappings.c)
 */

void __fastcall MiPfnRangeIsZero(unsigned __int64 LeafVa, unsigned __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r15
  int v6; // eax
  int v7; // esi
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v23; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v25; // zf
  signed __int32 v26; // eax
  int v27; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v28; // [rsp+28h] [rbp-D0h]
  __int64 v29; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v30[3]; // [rsp+38h] [rbp-C0h] BYREF
  _QWORD v31[12]; // [rsp+50h] [rbp-A8h] BYREF

  memset(v31, 0, sizeof(v31));
  v29 = 0LL;
  if ( a2 > MmPfnDatabase + (MxPfnAllocation << 12) )
    a2 = MmPfnDatabase + (MxPfnAllocation << 12);
  if ( LeafVa >= a2 )
    return;
  MiInitializeLargePfnList(v31);
  v4 = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  do
  {
    v6 = MI_IS_PHYSICAL_ADDRESS(LeafVa);
    v7 = v6;
    v8 = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = 1LL;
    LODWORD(v10) = 3;
    if ( v6 > 0 )
    {
      v11 = (unsigned int)v6;
      do
      {
        LODWORD(v10) = v10 - 1;
        v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v11;
      }
      while ( v11 );
      if ( (_DWORD)v10 != 3 )
      {
        v10 = (unsigned int)(v10 - 1);
        v9 = MiLargePageSizes[v10];
      }
    }
    if ( (((v9 << 12) - 1) & LeafVa) != 0 || a2 - LeafVa < v9 << 12 )
    {
      if ( (unsigned int)MiDemoteValidLargePageOneLevel(LeafVa) )
        continue;
      v20 = v8 + 8;
    }
    else
    {
      if ( (*(_BYTE *)v8 & 0x20) != 0 && ((unsigned __int8)(1 << v6) & (unsigned __int8)byte_140C506CE) != 0 )
      {
        v12 = 512 - ((v8 >> 3) & 0x1FF);
        v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v6 > 0 )
        {
          v14 = (unsigned int)v6;
          do
          {
            v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v14;
          }
          while ( v14 );
        }
        if ( ((v13 ^ v8) & 0xFFFFFFFFF000LL) == 0 )
          v12 = (__int64)(v13 - v8) >> 3;
        MiClearSystemAccessBits(v8, v12, (unsigned int)v6);
      }
      v27 = v7;
      while ( v7 < 4 )
      {
        v15 = v5;
        v16 = MI_READ_PTE_LOCK_FREE(v8);
        v30[0] = v16;
        if ( v7 != v27 && (v16 & 0x20) != 0 && ((unsigned __int8)(1 << v7) & (unsigned __int8)byte_140C506CE) != 0 )
          MiClearSystemAccessBits(v8, 1LL, 0LL);
        MiPreparePfnDatabasePageForFree(v8, (unsigned int)v7, (unsigned int)v10);
        v4 += v9;
        v17 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v30) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL);
        v18 = &v31[3 * (unsigned int)v10];
        v19 = (_QWORD *)v18[1];
        if ( (_QWORD *)*v19 != v18 )
          __fastfail(3u);
        *v17 = v18;
        v17[1] = v19;
        *v19 = v17;
        v18[1] = v17;
        if ( v7 == 3 )
        {
          v28 = v8;
          v5 = v8;
          if ( v15 )
            v5 = v15;
        }
        MiReplacePfnWithGapMapping(v8, (unsigned int)v7);
        if ( (*(_QWORD *)(48 * MiGetContainingPageTable(v8 & 0xFFFFFFFFFFFFF000uLL) - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v8 += 8LL;
          break;
        }
        LODWORD(v10) = 3;
        v9 = 1LL;
        v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        ++v7;
      }
      v20 = v8;
    }
    LeafVa = MiGetLeafVa(v20);
  }
  while ( LeafVa < a2 );
  if ( v5 )
    MiReplicatePfnDatabaseMappings(v5, v28);
  MiFreeLargeZeroPages((int)&MiSystemPartition, (__int64)v31, 0, &v29);
  v21 = v4 - v29;
  MiReturnCommit((__int64)&MiSystemPartition, v21);
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = v21;
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable != -1 )
  {
    if ( v21 + CachedResidentAvailable <= 0x100 )
    {
      do
      {
        if ( v21 >= 0x80000 )
          break;
        v26 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable + v21,
                CachedResidentAvailable);
        v25 = (_DWORD)CachedResidentAvailable == v26;
        LODWORD(CachedResidentAvailable) = v26;
        if ( v25 )
          goto LABEL_52;
      }
      while ( v26 != -1 && v21 + v26 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v23 = v21 + (int)CachedResidentAvailable - 192;
    }
  }
  if ( v23 )
    _InterlockedExchangeAdd64(&qword_140C591C0, v23);
LABEL_52:
  _InterlockedExchangeAdd64(&qword_140C53558, -(__int64)v21);
}
