/*
 * XREFs of ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C0116C88
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0023484 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C006C580 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisConvertPnpCapabilitiesToPM(struct _NDIS_PNP_CAPABILITIES *a1, struct _NDIS_PM_CAPABILITIES *a2)
{
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // r9d
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // r8d
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  int v5; // ecx

  *(_OWORD *)&a2->Header.Type = 0LL;
  *(_OWORD *)&a2->MaxWoLPatternSize = 0LL;
  *(_OWORD *)&a2->NumArpOffloadIPv4Addresses = 0LL;
  *(_QWORD *)&a2->MinLinkChangeWakeUp = 0LL;
  a2->MediaSpecificWakeUpEvents = 0;
  a2->Header = (_NDIS_OBJECT_HEADER)3932800;
  MinMagicPacketWakeUp = a1->WakeUpCapabilities.MinMagicPacketWakeUp;
  a2->MinMagicPacketWakeUp = MinMagicPacketWakeUp;
  MinPatternWakeUp = a1->WakeUpCapabilities.MinPatternWakeUp;
  a2->MinPatternWakeUp = MinPatternWakeUp;
  MinLinkChangeWakeUp = a1->WakeUpCapabilities.MinLinkChangeWakeUp;
  v5 = 0;
  a2->MinLinkChangeWakeUp = MinLinkChangeWakeUp;
  a2->SupportedWoLPacketPatterns = 0;
  if ( MinPatternWakeUp == NdisDeviceStateD1
    || MinPatternWakeUp == NdisDeviceStateD2
    || MinPatternWakeUp == NdisDeviceStateD3 )
  {
    v5 = 1;
    a2->SupportedWoLPacketPatterns = 1;
  }
  if ( (unsigned int)(MinMagicPacketWakeUp - 2) <= 2 )
    a2->SupportedWoLPacketPatterns = v5 | 2;
}
