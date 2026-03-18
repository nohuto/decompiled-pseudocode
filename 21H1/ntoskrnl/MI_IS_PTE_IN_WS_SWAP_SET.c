/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402FDD94
 * Callers:
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiReservePageFileSpace @ 0x140227910 (MiReservePageFileSpace.c)
 *     MiWriteCompletePfn @ 0x14028D170 (MiWriteCompletePfn.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiAddToReservationCluster @ 0x140384044 (MiAddToReservationCluster.c)
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
