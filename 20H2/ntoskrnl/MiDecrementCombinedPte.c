/*
 * XREFs of MiDecrementCombinedPte @ 0x140366C14
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiDeleteValidSystemPage @ 0x1402AC570 (MiDeleteValidSystemPage.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1402BAF60 (MiDeleteVa.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiDereferenceCombineBlock @ 0x140369CB0 (MiDereferenceCombineBlock.c)
 *     MiProcessCrcList @ 0x140723090 (MiProcessCrcList.c)
 *     MiDereferenceCombineCrc @ 0x140723DAC (MiDereferenceCombineCrc.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x140366B98 (MiDeleteMergedPte.c)
 *     MiFreeCombineBlock @ 0x14036B480 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x14055B604 (MiLogCombinedPteDelete.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055B67C (MiReturnCrossPartitionCombineCharges.c)
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
    && *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v4
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
