/*
 * XREFs of ?ndisEnablePMParamForPattern@@YAXPEAU_NDIS_PM_WOL_PATTERN@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C008F6C0
 * Callers:
 *     ?ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00174D0 (-ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisUpdateWmiPMParamsForPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0094D68 (-ndisUpdateWmiPMParamsForPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisEnablePMParamForPattern(struct _NDIS_PM_WOL_PATTERN *a1, struct _NDIS_PM_PARAMETERS *a2)
{
  switch ( a1->WoLPacketType )
  {
    case NdisPMWoLPacketBitmapPattern:
      a2->EnabledWoLPacketPatterns |= 1u;
      break;
    case NdisPMWoLPacketMagicPacket:
      a2->EnabledWoLPacketPatterns |= 2u;
      break;
    case NdisPMWoLPacketIPv4TcpSyn:
      a2->EnabledWoLPacketPatterns |= 4u;
      break;
    case NdisPMWoLPacketIPv6TcpSyn:
      a2->EnabledWoLPacketPatterns |= 8u;
      break;
    case NdisPMWoLPacketEapolRequestIdMessage:
      a2->EnabledWoLPacketPatterns |= 0x10000u;
      break;
  }
}
