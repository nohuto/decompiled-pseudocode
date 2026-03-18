/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x14030D9AC
 * Callers:
 *     MiWriteCompletePfn @ 0x1402A93D0 (MiWriteCompletePfn.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiReservePageFileSpace @ 0x1403481F0 (MiReservePageFileSpace.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiAddToReservationCluster @ 0x14038715C (MiAddToReservationCluster.c)
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
