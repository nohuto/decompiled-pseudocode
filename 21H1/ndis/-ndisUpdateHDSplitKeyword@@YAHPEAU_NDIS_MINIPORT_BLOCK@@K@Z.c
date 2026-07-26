/*
 * XREFs of ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C009FB58
 * Callers:
 *     ?ndisOidPreSetHDSplitParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D510 (-ndisOidPreSetHDSplitParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     NdisWriteConfiguration @ 0x1C00270B0 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C0028100 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C0028340 (NdisCloseConfiguration.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005E2B8 (WPP_RECORDER_SF_qdD_ea_1C005E2B8.c)
 */

__int64 __fastcall ndisUpdateHDSplitKeyword(struct _NDIS_MINIPORT_BLOCK *a1, ULONG a2)
{
  int v4; // edx
  unsigned int v5; // ebx
  int Status; // [rsp+40h] [rbp-49h] BYREF
  PVOID ConfigurationHandle; // [rsp+48h] [rbp-41h] BYREF
  _UNICODE_STRING String; // [rsp+50h] [rbp-39h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+60h] [rbp-29h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp-11h] BYREF
  _OWORD v12[2]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+27h]

  ConfigurationHandle = 0LL;
  v13 = 0LL;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCEu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      a2);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v5 = Status;
  if ( !Status )
  {
    String.MaximumLength = 40;
    String.Buffer = (wchar_t *)v12;
    if ( RtlIntegerToUnicodeString(a2, 0xAu, &String) )
    {
      v5 = -1073741823;
    }
    else
    {
      ParameterValue.ParameterType = NdisParameterString;
      ParameterValue.ParameterData.StringData = String;
      NdisWriteConfiguration(&Status, ConfigurationHandle, &HDSplitStr, &ParameterValue);
      v5 = Status;
    }
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      0xBu,
      0xCFu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      a2,
      v5);
  return v5;
}
