/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x14022AE80
 * Callers:
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiReservePageFileSpace @ 0x1402E19E0 (MiReservePageFileSpace.c)
 *     MiWriteCompletePfn @ 0x1403309D0 (MiWriteCompletePfn.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiAddToReservationCluster @ 0x140387A04 (MiAddToReservationCluster.c)
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
