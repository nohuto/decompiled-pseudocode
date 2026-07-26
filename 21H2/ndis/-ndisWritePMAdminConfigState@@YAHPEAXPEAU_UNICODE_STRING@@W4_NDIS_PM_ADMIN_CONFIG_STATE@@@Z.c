/*
 * XREFs of ?ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z @ 0x1C0095804
 * Callers:
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008F5A0 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1C00955BC (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 * Callees:
 *     NdisWriteConfiguration @ 0x1C0027650 (NdisWriteConfiguration.c)
 */

__int64 __fastcall ndisWritePMAdminConfigState(
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        enum _NDIS_PM_ADMIN_CONFIG_STATE a3)
{
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *v3; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+80h] [rbp+20h] BYREF

  Status = 0;
  *((_DWORD *)&ParameterValue.ParameterType + 1) = 0;
  v6[1] = L"1";
  v6[0] = 262146LL;
  v5[0] = 262146LL;
  v5[1] = L"0";
  ParameterValue.ParameterType = NdisParameterString;
  v3 = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)v5;
  if ( a3 == NdisPMAdminConfigEnabled )
    v3 = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)v6;
  ParameterValue.ParameterData = *v3;
  NdisWriteConfiguration(&Status, ConfigurationHandle, Keyword, &ParameterValue);
  return (unsigned int)Status;
}
