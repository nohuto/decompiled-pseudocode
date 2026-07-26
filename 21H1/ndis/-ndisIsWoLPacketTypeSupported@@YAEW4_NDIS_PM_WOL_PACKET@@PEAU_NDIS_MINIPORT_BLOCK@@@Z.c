/*
 * XREFs of ?ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0016FC4
 * Callers:
 *     ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0016A8C (-ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQU.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C003AFDC (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0093A5C (-ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisIsWoLPacketTypeSupported(enum _NDIS_PM_WOL_PACKET a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // eax
  int v6; // ecx
  int v7; // ecx

  v2 = a1 - 1;
  if ( !v2 )
  {
    LOBYTE(v4) = a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns;
    return v4 & 1;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v4 = a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns >> 1;
    return v4 & 1;
  }
  v6 = v3 - 1;
  if ( !v6 )
  {
    v4 = a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns >> 2;
    return v4 & 1;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v4 = a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns >> 3;
    return v4 & 1;
  }
  if ( v7 == 1 )
  {
    LOBYTE(v4) = BYTE2(a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns);
    return v4 & 1;
  }
  return 0;
}
