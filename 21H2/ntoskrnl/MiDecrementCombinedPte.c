/*
 * XREFs of MiDecrementCombinedPte @ 0x140367074
 * Callers:
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x140333B70 (MiDeleteValidSystemPage.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiDereferenceCombineBlock @ 0x14036A110 (MiDereferenceCombineBlock.c)
 *     MiProcessCrcList @ 0x140726FD0 (MiProcessCrcList.c)
 *     MiDereferenceCombineCrc @ 0x140727CEC (MiDereferenceCombineCrc.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x140366FF8 (MiDeleteMergedPte.c)
 *     MiFreeCombineBlock @ 0x14036B8E0 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x14055D314 (MiLogCombinedPteDelete.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055D38C (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiDecrementCombinedPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rsi
  unsigned int v5; // edi

  v3 = *(_QWORD *)(((a2 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v4 = *(_QWORD *)v3;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 392), 0xFFFFFFFF);
  v5 = 0;
  if ( a1
    && *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v4
    && !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) )
  {
    MiReturnCrossPartitionCombineCharges(v4, 1LL);
  }
  if ( _InterlockedDecrement64((volatile signed __int64 *)(a2 - 16)) )
    return 2LL;
  if ( *(_QWORD *)(a2 - 24) )
  {
    v5 = MiDeleteMergedPte(v4, a2);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(a2);
  }
  MiFreeCombineBlock(a2 - 48);
  return v5;
}
