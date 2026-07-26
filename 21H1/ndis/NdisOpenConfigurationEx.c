/*
 * XREFs of NdisOpenConfigurationEx @ 0x1C0028100
 * Callers:
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00211DC (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002727C (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0027AA4 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002F9FC (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0032C34 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034F28 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C006C580 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0070824 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078850 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008EF64 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1C0094F7C (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 *     ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C009FB58 (-ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1C009FCF4 (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FFA2C (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x1C01062A8 (ndisIfGetFilterIfInfoFromRegistry.c)
 *     ndisIfSetFilterIfInfoInRegistry @ 0x1C01063F4 (ndisIfSetFilterIfInfoInRegistry.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010AFCC (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120D54 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120E54 (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ndisAllocateConfigurationString @ 0x1C00278CC (ndisAllocateConfigurationString.c)
 *     NdisOpenConfiguration @ 0x1C0028840 (NdisOpenConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C0028D90 (NdisOpenProtocolConfiguration.c)
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x1C0067F8C (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 */

NDIS_STATUS __stdcall NdisOpenConfigurationEx(
        PNDIS_CONFIGURATION_OBJECT ConfigObject,
        PNDIS_HANDLE ConfigurationHandle)
{
  unsigned __int8 *NdisHandle; // rdi
  char v3; // r15
  void *v6; // r8
  int v7; // ebx
  int v9; // eax
  bool v10; // zf
  _UNICODE_STRING *p_Destination; // r8
  const UNICODE_STRING *v12; // rcx
  const UNICODE_STRING *v13; // r8
  const UNICODE_STRING *v14; // rdx
  const struct _UNICODE_STRING *v15; // rdx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING GuidString; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v18; // [rsp+A0h] [rbp+40h] BYREF
  int Status; // [rsp+B0h] [rbp+50h] BYREF

  NdisHandle = (unsigned __int8 *)ConfigObject->NdisHandle;
  Status = 0;
  v3 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v18 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x13u,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      ConfigObject);
  if ( ConfigObject->Header.Type != 0xA9 || ConfigObject->Header.Size < 0x14u || !ConfigObject->Header.Revision )
    return -1073741811;
  switch ( *NdisHandle )
  {
    case 2u:
      if ( NdisHandle[24] < 6u )
      {
        v7 = -1073741637;
        goto LABEL_15;
      }
      p_Destination = (_UNICODE_STRING *)(NdisHandle + 488);
      goto LABEL_31;
    case 3u:
      v12 = (const UNICODE_STRING *)(NdisHandle + 72);
      goto LABEL_33;
    case 4u:
      v12 = (const UNICODE_STRING *)(NdisHandle + 144);
LABEL_33:
      v13 = 0LL;
      v14 = 0LL;
LABEL_34:
      v7 = ndisAllocateConfigurationString(v12, v14, v13, &Destination);
      Status = v7;
      v10 = v7 == 0;
      goto LABEL_29;
    case 5u:
      if ( (ConfigObject->Flags & 1) != 0 )
      {
        v15 = (const struct _UNICODE_STRING *)*((_QWORD *)NdisHandle + 2);
        if ( (*((_DWORD *)v15[21].Buffer + 10) & 2) == 0 )
          goto LABEL_42;
        v9 = ndisGetOrCreateFilterInstanceKey(
               v15 + 9,
               (struct _NDIS_FILTER_BLOCK *)NdisHandle,
               *((struct _NDIS_MINIPORT_BLOCK **)NdisHandle + 4),
               0,
               &v18,
               &Destination);
      }
      else
      {
        if ( RtlStringFromGUID(
               (const GUID *const)(*(_QWORD *)(*((_QWORD *)NdisHandle + 4) + 16LL) + 4008LL),
               &GuidString) )
        {
          goto LABEL_42;
        }
        v3 = 1;
        v9 = ndisAllocateConfigurationString(
               (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 2) + 144LL),
               &GuidString,
               &ndisFilterAdapterStr,
               &Destination);
      }
      v7 = v9;
      Status = v9;
      v10 = v9 == 0;
LABEL_29:
      if ( !v10 )
        goto LABEL_15;
      p_Destination = &Destination;
      goto LABEL_31;
    case 0xAu:
      v6 = NdisHandle;
      goto LABEL_13;
  }
  if ( *NdisHandle != 17 )
  {
    if ( *NdisHandle != 18 )
    {
      if ( *NdisHandle == 134 )
      {
        p_Destination = (_UNICODE_STRING *)*((_QWORD *)NdisHandle + 1);
LABEL_31:
        NdisOpenProtocolConfiguration(&Status, ConfigurationHandle, p_Destination);
        goto LABEL_14;
      }
LABEL_42:
      v7 = -1073741823;
      goto LABEL_15;
    }
    v13 = (const UNICODE_STRING *)&ndisAdapterStr;
    v14 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 2) + 3792LL);
    v12 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 3) + 72LL);
    goto LABEL_34;
  }
  v6 = (void *)*((_QWORD *)NdisHandle + 500);
LABEL_13:
  NdisOpenConfiguration(&Status, ConfigurationHandle, v6);
LABEL_14:
  v7 = Status;
LABEL_15:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( !v7 && *ConfigurationHandle )
    *((_QWORD *)*ConfigurationHandle + 1) = NdisHandle;
  if ( v3 )
    RtlFreeUnicodeString(&GuidString);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x14u,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      (char)ConfigObject,
      v7);
  return v7;
}
