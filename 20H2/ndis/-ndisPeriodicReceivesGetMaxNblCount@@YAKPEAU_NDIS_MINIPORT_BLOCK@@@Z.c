/*
 * XREFs of ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A3820
 * Callers:
 *     ndisMiniportDpc @ 0x1C0066D08 (ndisMiniportDpc.c)
 *     ndisGetMiniportIndicateList @ 0x1C00A2CDC (ndisGetMiniportIndicateList.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00A2F00 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPeriodicReceivesGetMaxNblCount(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 result; // rax

  if ( !byte_1C00E4101 )
    return 0xFFFFFFFFLL;
  if ( dword_1C00E410C )
    return (unsigned int)dword_1C00E4104;
  result = (unsigned int)ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)a1->PeriodicReceivesNblCountIndex
                                                                       + (KeGetPcr()->Prcb.Number << 12))];
  if ( dword_1C00E4104 < (unsigned int)result )
    return (unsigned int)dword_1C00E4104;
  return result;
}
