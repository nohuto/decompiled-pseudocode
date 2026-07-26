/*
 * XREFs of ndisIfSetFilterIfInfoInRegistry @ 0x1C01063C4
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C002E258 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     NdisWriteConfiguration @ 0x1C0027650 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00286A0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C00288E0 (NdisCloseConfiguration.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C625C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisIfSetFilterIfInfoInRegistry(_QWORD *a1, wchar_t *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  int Status; // [rsp+48h] [rbp-9h] BYREF
  PVOID ConfigurationHandle; // [rsp+50h] [rbp-1h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+58h] [rbp+7h] BYREF
  UNICODE_STRING Keyword; // [rsp+70h] [rbp+1Fh] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+80h] [rbp+2Fh] BYREF

  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  ConfigurationHandle = 0LL;
  *(_QWORD *)&Keyword.Length = 1835034LL;
  Keyword.Buffer = L"InterfaceGuid";
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_26c79ab3a5fb310107e5718cdb1d7c6d_Traceguids,
      a1);
  ConfigObject.Flags = 0;
  v4 = a1[2];
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = (*(_BYTE *)(*(_QWORD *)(v4 + 344) + 40LL) & 2) != 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v5 = Status;
  if ( !Status )
  {
    ParameterValue.ParameterData.StringData.Length = 16;
    ParameterValue.ParameterType = NdisParameterBinary;
    ParameterValue.ParameterData.StringData.Buffer = a2;
    NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
    v5 = Status;
    if ( Status )
    {
      if ( Status != -1073741772 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_26c79ab3a5fb310107e5718cdb1d7c6d_Traceguids,
      (char)a1,
      v5);
  return v5;
}
