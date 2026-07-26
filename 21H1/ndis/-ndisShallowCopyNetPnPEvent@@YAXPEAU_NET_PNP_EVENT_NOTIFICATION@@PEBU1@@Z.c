/*
 * XREFs of ?ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z @ 0x1C00FDDD0
 * Callers:
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00154DC (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0015660 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00157DC (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     NdisMNetPnPEvent @ 0x1C0080800 (NdisMNetPnPEvent.c)
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012BB74 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisShallowCopyNetPnPEvent(
        struct _NET_PNP_EVENT_NOTIFICATION *a1,
        const struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  unsigned int SwitchId; // eax

  a1->Header.Type = a2->Header.Type;
  a1->Header.Revision = a2->Header.Revision;
  a1->Header.Size = a2->Header.Size;
  a1->PortNumber = a2->PortNumber;
  if ( a2->Header.Revision >= 2u && a2->Header.Size >= 0xACu || (a2->Flags & 4) != 0 )
  {
    a1->VPortId = a2->VPortId;
    SwitchId = a2->SwitchId;
  }
  else
  {
    SwitchId = 0;
    a1->VPortId = 0;
  }
  a1->SwitchId = SwitchId;
  a1->Flags = a2->Flags;
  a1->NetPnPEvent = a2->NetPnPEvent;
}
