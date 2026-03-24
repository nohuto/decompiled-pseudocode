/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402ACB24
 * Callers:
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiReservePageFileSpace @ 0x14023D190 (MiReservePageFileSpace.c)
 *     MiWriteCompletePfn @ 0x140325C80 (MiWriteCompletePfn.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiAddToReservationCluster @ 0x1403878B4 (MiAddToReservationCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(__int64 a1, _WORD *a2)
{
  __int16 v2; // cx
  __int64 result; // rax

  v2 = *(_WORD *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*a2) >> 4) + 6944) + 204LL);
  result = 1LL;
  if ( (v2 & 0x10) == 0 && ((v2 & 0x20) == 0 || (*(_QWORD *)a2 & 2) == 0) )
    return 0LL;
  return result;
}
