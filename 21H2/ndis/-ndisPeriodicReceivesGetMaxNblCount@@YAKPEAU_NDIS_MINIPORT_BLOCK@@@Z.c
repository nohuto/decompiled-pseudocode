/*
 * XREFs of ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A39A0
 * Callers:
 *     ndisMiniportDpc @ 0x1C0066F98 (ndisMiniportDpc.c)
 *     ndisGetMiniportIndicateList @ 0x1C00A2E5C (ndisGetMiniportIndicateList.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00A3080 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPeriodicReceivesGetMaxNblCount(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 result; // rax

  if ( !byte_1C00E40C1 )
    return 0xFFFFFFFFLL;
  if ( dword_1C00E40CC )
    return (unsigned int)dword_1C00E40C4;
  result = (unsigned int)ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)a1->PeriodicReceivesNblCountIndex
                                                                       + (KeGetPcr()->Prcb.Number << 12))];
  if ( dword_1C00E40C4 < (unsigned int)result )
    return (unsigned int)dword_1C00E40C4;
  return result;
}
