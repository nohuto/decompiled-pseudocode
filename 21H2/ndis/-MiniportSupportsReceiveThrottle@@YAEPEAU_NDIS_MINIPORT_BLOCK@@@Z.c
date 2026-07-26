/*
 * XREFs of ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019CDC
 * Callers:
 *     ndisInterruptDpc @ 0x1C00077E0 (ndisInterruptDpc.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00A4090 (ndisSwitchMiniportReceiveFunction.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0103D90 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012B8C4 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013AE00 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiniportSupportsReceiveThrottle(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u)
      && (a1->PnPFlags & 0x400000) == 0;
}
