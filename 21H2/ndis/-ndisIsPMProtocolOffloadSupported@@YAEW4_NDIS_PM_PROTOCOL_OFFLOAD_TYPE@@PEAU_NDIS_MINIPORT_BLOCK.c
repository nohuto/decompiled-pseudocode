/*
 * XREFs of ?ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00900CC
 * Callers:
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0090C8C (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0093E64 (-ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0095178 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisIsPMProtocolOffloadSupported(
        enum _NDIS_PM_PROTOCOL_OFFLOAD_TYPE a1,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int v2; // eax

  if ( a1 == NdisPMProtocolOffloadIdIPv4ARP )
  {
    LOBYTE(v2) = a2->PMAdvertisedCapabilities.SupportedProtocolOffloads;
  }
  else if ( a1 == NdisPMProtocolOffloadIdIPv6NS )
  {
    v2 = a2->PMAdvertisedCapabilities.SupportedProtocolOffloads >> 1;
  }
  else
  {
    if ( (unsigned int)(a1 - 3) > 1 )
      return 0;
    v2 = a2->PMAdvertisedCapabilities.SupportedProtocolOffloads >> 7;
  }
  return v2 & 1;
}
