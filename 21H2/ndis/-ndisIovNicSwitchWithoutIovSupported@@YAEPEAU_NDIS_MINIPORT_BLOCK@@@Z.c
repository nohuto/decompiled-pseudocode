/*
 * XREFs of ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033810
 * Callers:
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00331D4 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0033354 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1C0078088 (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z.c)
 *     ?ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078B60 (-ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078F50 (-ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovCreateNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079940 (-ndisOidPreIovCreateNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079B50 (-ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovDeleteNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079CA0 (-ndisOidPreIovDeleteNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079E60 (-ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovEnumNicSwitches@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007A000 (-ndisOidPreIovEnumNicSwitches@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007A530 (-ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007ACF0 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B9B0 (-ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00869C0 (-ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00871D4 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisIovNicSwitchWithoutIovSupported(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v1; // dl
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax

  v1 = 0;
  if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x32u )
  {
    NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
    if ( NicSwitchCurrentCapabilities && (NicSwitchCurrentCapabilities->NicSwitchCapabilities & 0x40) != 0 )
      return 1;
  }
  return v1;
}
