/*
 * XREFs of MiDecrementCombinedPte @ 0x140364C34
 * Callers:
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiDeleteValidSystemPage @ 0x1402B6220 (MiDeleteValidSystemPage.c)
 *     MiDereferenceCombineBlock @ 0x140367CD0 (MiDereferenceCombineBlock.c)
 *     MiProcessCrcList @ 0x1407150D0 (MiProcessCrcList.c)
 *     MiDereferenceCombineCrc @ 0x140715DEC (MiDereferenceCombineCrc.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x140364BB8 (MiDeleteMergedPte.c)
 *     MiFreeCombineBlock @ 0x1403694A0 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x140557C34 (MiLogCombinedPteDelete.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x140557CAC (MiReturnCrossPartitionCombineCharges.c)
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
    && *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v4
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
