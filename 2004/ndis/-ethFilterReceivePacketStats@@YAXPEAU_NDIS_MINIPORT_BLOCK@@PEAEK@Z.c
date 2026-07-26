/*
 * XREFs of ?ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x1C008E16C
 * Callers:
 *     ?EthFilterDprIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z @ 0x1C0064330 (-EthFilterDprIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z.c)
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0064D70 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ethFilterReceivePacketStats(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2, unsigned int a3)
{
  _NDIS_MINIPORT_STATS *v3; // rax

  if ( a1->MajorNdisVersion < 6u && !a1->Miniport5InNdis6Mode )
  {
    v3 = &a1->BottomIfStats[KeGetPcr()->Prcb.Number];
    v3->ifHCInOctets += a3;
    if ( a1->MediaType == NdisMedium802_3 )
    {
      if ( *a2 == 0xFF && a2[1] == 0xFF && a2[2] == 0xFF && a2[3] == 0xFF && a2[4] == 0xFF && a2[5] == 0xFF )
      {
        ++v3->ifHCInBroadcastPkts;
        v3->ifHCInBroadcastOctets += a3;
      }
      else if ( (*a2 & 1) != 0 )
      {
        ++v3->ifHCInMulticastPkts;
        v3->ifHCInMulticastOctets += a3;
      }
      else
      {
        ++v3->ifHCInUcastPkts;
        v3->ifHCInUcastOctets += a3;
      }
    }
  }
}
