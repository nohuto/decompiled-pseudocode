/*
 * XREFs of ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0070824
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0025D20 (WPP_RECORDER_SF_dd_ea_1C0025D20.c)
 *     NdisOpenConfigurationEx @ 0x1C0028100 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C0028340 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C0028420 (NdisReadConfiguration.c)
 */

void __fastcall ndisReadModernStandyWoLMagicPacketKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+70h] [rbp+10h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp+18h] BYREF
  PVOID ConfigurationHandle; // [rsp+80h] [rbp+20h] BYREF

  ConfigurationHandle = 0LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  ParameterValue = 0LL;
  ConfigObject.Flags = 0;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &ModernStandbyWoLMagicPacketStr,
      NdisParameterInteger);
    if ( !Status )
      a1->ModernStandbyWoLMagicPacketEnable = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &ModernStandbySystemWakeStr,
      NdisParameterInteger);
    if ( !Status )
      a1->ModernStandbySystemWakeEnabled = ParameterValue->ParameterData.IntegerData != 0;
    NdisCloseConfiguration(ConfigurationHandle);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      1u,
      0xFCu,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      a1->ModernStandbyWoLMagicPacketEnable,
      a1->ModernStandbySystemWakeEnabled);
}
