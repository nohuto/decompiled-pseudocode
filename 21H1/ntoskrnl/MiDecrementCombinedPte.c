/*
 * XREFs of MiDecrementCombinedPte @ 0x140364274
 * Callers:
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiDeleteValidSystemPage @ 0x1402235A0 (MiDeleteValidSystemPage.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiDereferenceCombineBlock @ 0x140367310 (MiDereferenceCombineBlock.c)
 *     MiProcessCrcList @ 0x140712D40 (MiProcessCrcList.c)
 *     MiDereferenceCombineCrc @ 0x140713A5C (MiDereferenceCombineCrc.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x1403641F8 (MiDeleteMergedPte.c)
 *     MiFreeCombineBlock @ 0x140368AE0 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x1405575E4 (MiLogCombinedPteDelete.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055765C (MiReturnCrossPartitionCombineCharges.c)
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
    && *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v4
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
