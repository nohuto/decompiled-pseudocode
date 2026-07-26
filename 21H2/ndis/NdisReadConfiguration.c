/*
 * XREFs of NdisReadConfiguration @ 0x1C00289C0
 * Callers:
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00214FC (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002781C (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadPMAdminConfigState@@YA?AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@@Z @ 0x1C0027C00 (-ndisReadPMAdminConfigState@@YA-AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0028044 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FF9C (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C003589C (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 *     NdisReadNetworkAddress @ 0x1C00399E0 (NdisReadNetworkAddress.c)
 *     ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003A130 (-ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@.c)
 *     ?NdisReadConfigShimHook@@YAXPEAHPEAPEAU_NDIS_CONFIGURATION_PARAMETER@@PEAXPEAU_UNICODE_STRING@@W4_NDIS_PARAMETER_TYPE@@@Z @ 0x1C003F200 (-NdisReadConfigShimHook@@YAXPEAHPEAPEAU_NDIS_CONFIGURATION_PARAMETER@@PEAXPEAU_UNICODE_STRING@@W.c)
 *     NdisWdfReadConfiguration @ 0x1C005F410 (NdisWdfReadConfiguration.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C006CEF0 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0071084 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1C0078764 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1C00A0334 (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FFA8C (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0103718 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x1C0106278 (ndisIfGetFilterIfInfoFromRegistry.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010B03C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120D24 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120E24 (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0145174 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C014578C (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0012F18 (WPP_RECORDER_SF_Z.c)
 *     ndisOpenProtocolSubkey @ 0x1C002956C (ndisOpenProtocolSubkey.c)
 *     ?ndisSaveParameters@@YAJPEA_WKPEAXK11@Z @ 0x1C0036010 (-ndisSaveParameters@@YAJPEA_WKPEAXK11@Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ndisReadUpperBindings @ 0x1C005F2BC (ndisReadUpperBindings.c)
 *     ?ndisNDKGlobalDisabled@@YAEXZ @ 0x1C00FF824 (-ndisNDKGlobalDisabled@@YAEXZ.c)
 *     ?ndisReadNDKGlobalFlags@@YAKXZ @ 0x1C00FF86C (-ndisReadNDKGlobalFlags@@YAKXZ.c)
 */

void __stdcall NdisReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  NTSTATUS RegistryValues; // ebx
  unsigned int i; // edi
  unsigned int v10; // r15d
  NDIS_PARAMETER_TYPE v11; // r12d
  __int64 v12; // rdi
  char *PoolWithTag; // rax
  char *v14; // rbx
  PNDIS_CONFIGURATION_PARAMETER v15; // rcx
  unsigned int Length; // r9d
  wchar_t *v17; // rcx
  wchar_t *Buffer; // r8
  unsigned int v19; // edx
  __int64 v20; // rdi
  unsigned int v21; // ecx
  __int64 v22; // r12
  int v23; // r8d
  int v24; // ecx
  struct _NDIS_CONFIGURATION_PARAMETER *v25; // rax
  _BYTE *v26; // rcx
  PVOID v27; // rdi
  int v28; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-5Dh] BYREF
  PVOID v30; // [rsp+38h] [rbp-59h] BYREF
  PVOID P; // [rsp+40h] [rbp-51h]
  _UNICODE_STRING String; // [rsp+48h] [rbp-49h] BYREF
  PNDIS_STATUS v33; // [rsp+58h] [rbp-39h]
  _DWORD v34[2]; // [rsp+60h] [rbp-31h]
  char v35; // [rsp+68h] [rbp-29h]
  _OWORD v36[2]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v37; // [rsp+90h] [rbp-1h]

  v33 = Status;
  v28 = 0;
  v30 = 0LL;
  v37 = 0LL;
  v29 = 0;
  v34[0] = 67305985;
  v34[1] = 33620481;
  String = 0LL;
  v35 = 3;
  memset(v36, 0, sizeof(v36));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x1Eu,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      &Keyword->Length);
  RegistryValues = -1073741823;
  P = Keyword->Buffer;
  for ( i = 0; i < 3; ++i )
  {
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C00C70A0 + i, 1u) )
    {
      RegistryValues = 0;
      v25 = (struct _NDIS_CONFIGURATION_PARAMETER *)((char *)&unk_1C00D1B80 + 24 * i);
      goto LABEL_45;
    }
  }
  v10 = 0;
  v11 = ParameterType;
  v12 = *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 8LL);
  if ( !v12 )
  {
LABEL_16:
    if ( !ndisAllowFlowControl && RtlEqualUnicodeString(Keyword, &FlowControlStr, 1u) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          8u,
          0x1Fu,
          (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids);
      RegistryValues = 0;
      *ParameterValue = (PNDIS_CONFIGURATION_PARAMETER)&unk_1C00D1B68;
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0 || *((_QWORD *)ConfigurationHandle + 4) )
      RegistryValues = 0;
    else
      RegistryValues = ndisOpenProtocolSubkey(ConfigurationHandle);
    if ( RegistryValues >= 0 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Keyword->Length + 2LL, 0x2020444Eu);
      P = PoolWithTag;
      v14 = PoolWithTag;
      if ( !PoolWithTag )
      {
        RegistryValues = -1073741670;
        goto LABEL_27;
      }
      memmove(PoolWithTag, Keyword->Buffer, Keyword->Length);
      *(_WORD *)&v14[Keyword->Length] = 0;
      *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 40LL) = v14;
      *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 48LL) = ParameterValue;
      RegistryValues = RtlQueryRegistryValuesEx(
                         0x40000000u,
                         *((PCWSTR *)ConfigurationHandle + 4),
                         (PRTL_QUERY_REGISTRY_TABLE)(*((_QWORD *)ConfigurationHandle + 2) + 24LL),
                         ConfigurationHandle,
                         0LL);
    }
    if ( !v12 )
    {
      if ( RegistryValues >= 0 )
      {
LABEL_30:
        v15 = *ParameterValue;
        if ( (*ParameterValue)->ParameterType == NdisParameterString )
        {
          if ( v11 )
          {
            if ( v11 == NdisParameterHexInteger )
            {
              RtlUnicodeStringToInteger((PCUNICODE_STRING)&v15->ParameterData, 0x10u, &v15->ParameterData.IntegerData);
              (*ParameterValue)->ParameterType = NdisParameterHexInteger;
            }
          }
          else
          {
            RtlUnicodeStringToInteger((PCUNICODE_STRING)&v15->ParameterData, 0xAu, &v15->ParameterData.IntegerData);
            (*ParameterValue)->ParameterType = NdisParameterInteger;
          }
        }
        goto LABEL_24;
      }
      if ( RtlEqualUnicodeString(Keyword, &stru_1C00C7000, 1u) )
      {
        v26 = (_BYTE *)*((_QWORD *)ConfigurationHandle + 1);
        if ( v26 )
        {
          if ( *v26 == 2 && v26[24] >= 6u && !(unsigned int)ndisReadUpperBindings(v26, &v30, &v29) )
          {
            v27 = v30;
            RegistryValues = ndisSaveParameters(
                               (wchar_t *)L"UpperBindings",
                               7u,
                               v30,
                               v29,
                               ConfigurationHandle,
                               ParameterValue);
            if ( v27 )
              ExFreePoolWithTag(v27, 0);
          }
        }
      }
    }
    if ( RegistryValues < 0 )
      goto LABEL_24;
    goto LABEL_30;
  }
  if ( RtlEqualUnicodeString(Keyword, &String2, 1u) )
  {
    Length = *(unsigned __int16 *)(v12 + 3808);
    v17 = L"MiniportName";
    Buffer = *(wchar_t **)(v12 + 3816);
    v19 = 1;
LABEL_48:
    RegistryValues = ndisSaveParameters(v17, v19, Buffer, Length, ConfigurationHandle, ParameterValue);
    goto LABEL_24;
  }
  if ( !RtlEqualUnicodeString(Keyword, &stru_1C00C70F0, 1u)
    || (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 1) != 0 )
  {
    do
    {
LABEL_9:
      if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C00C7010 + v10, 1u) )
        break;
      ++v10;
    }
    while ( v10 < 9 );
    v11 = ParameterType;
    if ( v10 >= 9 )
    {
      if ( RtlEqualUnicodeString(Keyword, &stru_1C00C70E0, 1u) )
      {
        if ( ParameterType )
          goto LABEL_24;
        if ( ndisNDKGlobalDisabled() )
        {
          RegistryValues = 0;
          v25 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C00D1B68;
LABEL_45:
          *ParameterValue = v25;
          goto LABEL_24;
        }
      }
      if ( RtlEqualUnicodeString(Keyword, &stru_1C00C70D0, 1u) )
      {
        if ( ParameterType )
          goto LABEL_24;
        dword_1C00E4030 = ndisReadNDKGlobalFlags();
        RegistryValues = 0;
        v25 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C00E4028;
        goto LABEL_45;
      }
      if ( RtlEqualUnicodeString(Keyword, &::Keyword, 1u) )
      {
        *(_DWORD *)(v12 + 568) |= 0x80u;
        *(_DWORD *)(v12 + 1872) |= 0x10000u;
      }
      goto LABEL_16;
    }
    v20 = *(_QWORD *)(v12 + 944);
    if ( !v20 )
      goto LABEL_24;
    v21 = *(_DWORD *)(v20 + 16);
    v22 = 0LL;
    if ( !v21 )
    {
LABEL_69:
      if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 16) )
        RegistryValues = -1073741823;
      goto LABEL_24;
    }
    v23 = *((unsigned __int8 *)v34 + v10);
    while ( *(_BYTE *)(v20 + 20 * v22 + 20) != (_BYTE)v23 )
    {
      v22 = (unsigned int)(v22 + 1);
      if ( (unsigned int)v22 >= v21 )
        goto LABEL_69;
    }
    if ( v23 == 1 )
    {
      v28 = *(_DWORD *)(v20 + 20 * v22 + 24);
      goto LABEL_68;
    }
    if ( v23 == 2 )
    {
      v24 = *(unsigned __int16 *)(v20 + 20 * v22 + 24);
    }
    else
    {
      if ( (unsigned int)(v23 - 3) > 1 )
      {
LABEL_68:
        RegistryValues = ndisSaveParameters(
                           *((wchar_t **)&unk_1C00C7010 + 2 * v10 + 1),
                           4u,
                           &v28,
                           4u,
                           ConfigurationHandle,
                           ParameterValue);
        goto LABEL_69;
      }
      v24 = *(_DWORD *)(v20 + 20 * v22 + 24);
    }
    v28 = v24;
    goto LABEL_68;
  }
  if ( (unsigned int)ParameterType <= NdisParameterHexInteger )
  {
    v19 = 4;
    Buffer = (wchar_t *)(v12 + 3720);
    Length = 4;
LABEL_47:
    v17 = (wchar_t *)L"BusType";
    goto LABEL_48;
  }
  if ( ParameterType != NdisParameterString )
    goto LABEL_9;
  String.MaximumLength = 40;
  String.Buffer = (wchar_t *)v36;
  RegistryValues = RtlIntegerToUnicodeString(*(_DWORD *)(v12 + 3720), 0xAu, &String);
  if ( !RegistryValues )
  {
    Length = String.Length;
    v19 = 1;
    Buffer = String.Buffer;
    goto LABEL_47;
  }
LABEL_24:
  if ( P && P != Keyword->Buffer )
    ExFreePoolWithTag(P, 0);
LABEL_27:
  *v33 = (RegistryValues >> 31) & 0xC0000001;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x20u,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids);
}
