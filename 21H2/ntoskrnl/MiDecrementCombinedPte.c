/*
 * XREFs of MiDecrementCombinedPte @ 0x1402399A8
 * Callers:
 *     MiDereferenceCombineBlock @ 0x140239978 (MiDereferenceCombineBlock.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiDeleteValidSystemPage @ 0x14033BEC0 (MiDeleteValidSystemPage.c)
 *     MiProcessCrcList @ 0x1406F2C30 (MiProcessCrcList.c)
 *     MiDereferenceCombineCrc @ 0x1406F33E4 (MiDereferenceCombineCrc.c)
 * Callees:
 *     MiFreeCombineBlock @ 0x140239A98 (MiFreeCombineBlock.c)
 *     MiDeleteMergedPte @ 0x140239C2C (MiDeleteMergedPte.c)
 *     MiLogCombinedPteDelete @ 0x1405B62A0 (MiLogCombinedPteDelete.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1405B6318 (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiDecrementCombinedPte(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v4; // r8
  __int64 v5; // r14
  signed __int64 v6; // rsi
  unsigned int v7; // ebx

  v4 = *(volatile signed __int32 **)(((a2 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v5 = *(_QWORD *)v4;
  _InterlockedExchangeAdd(v4 + 98, 0xFFFFFFFF);
  if ( a1 && *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v5 )
    v6 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
  else
    v6 = 1LL;
  if ( _InterlockedDecrement64((volatile signed __int64 *)(a2 - 16)) )
  {
    v7 = 2;
  }
  else
  {
    if ( *(_QWORD *)(a2 - 24) )
    {
      v7 = MiDeleteMergedPte(v5, a2);
      if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
        MiLogCombinedPteDelete(a2);
      if ( a1 && *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v5 )
        v7 = 4;
    }
    else
    {
      v7 = 0;
    }
    MiFreeCombineBlock(a2 - 48);
  }
  if ( !v6 )
    MiReturnCrossPartitionCombineCharges(v5, 1LL);
  return v7;
}
