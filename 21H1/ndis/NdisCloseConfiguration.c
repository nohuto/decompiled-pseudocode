/*
 * XREFs of NdisCloseConfiguration @ 0x1C0028340
 * Callers:
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00211DC (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002727C (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0027AA4 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002F9FC (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0032C34 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034F28 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0035098 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C006C580 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0070824 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078850 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008BF50 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008EF64 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1C0094F7C (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 *     ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C009FB58 (-ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1C009FCF4 (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FFA2C (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x1C01062A8 (ndisIfGetFilterIfInfoFromRegistry.c)
 *     ndisIfSetFilterIfInfoInRegistry @ 0x1C01063F4 (ndisIfSetFilterIfInfoInRegistry.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010AFCC (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012066C (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120D54 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120E54 (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0145124 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C014573C (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisCloseConfiguration(NDIS_HANDLE ConfigurationHandle)
{
  void *v2; // rcx
  _QWORD *v3; // rcx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x1Cu,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      ConfigurationHandle);
  v2 = (void *)*((_QWORD *)ConfigurationHandle + 4);
  if ( v2 )
    ZwClose(v2);
  while ( 1 )
  {
    v3 = (_QWORD *)*((_QWORD *)ConfigurationHandle + 3);
    if ( !v3 )
      break;
    *((_QWORD *)ConfigurationHandle + 3) = *v3;
    ExFreePoolWithTag(v3, 0);
  }
  ExFreePoolWithTag(ConfigurationHandle, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x1Du,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      0LL);
}
