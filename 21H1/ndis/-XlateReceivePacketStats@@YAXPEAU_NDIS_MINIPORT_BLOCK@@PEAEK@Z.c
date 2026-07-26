/*
 * XREFs of ?XlateReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x1C008DA00
 * Callers:
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C0074E78 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XlateReceivePacketStats(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2, unsigned int a3)
{
  _NDIS_MINIPORT_STATS *v3; // rax

  if ( a1->MajorNdisVersion < 6u )
  {
    v3 = &a1->BottomIfStats[KeGetPcr()->Prcb.Number];
    v3->ifHCInOctets += a3;
    if ( a1->MediaType )
      goto LABEL_12;
    if ( *a2 == 0xFF && a2[1] == 0xFF && a2[2] == 0xFF && a2[3] == 0xFF && a2[4] == 0xFF && a2[5] == 0xFF )
    {
      ++a1->BottomIfStats->ifHCInBroadcastPkts;
      a1->BottomIfStats->ifHCInBroadcastOctets += a3;
      return;
    }
    if ( (*a2 & 1) == 0 )
    {
LABEL_12:
      ++v3->ifHCInUcastPkts;
      v3->ifHCInUcastOctets += a3;
    }
    else
    {
      ++v3->ifHCInMulticastPkts;
      v3->ifHCInMulticastOctets += a3;
    }
  }
}
