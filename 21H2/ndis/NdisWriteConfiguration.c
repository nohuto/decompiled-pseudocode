/*
 * XREFs of NdisWriteConfiguration @ 0x1C0027650
 * Callers:
 *     ?ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAMETER@@@Z @ 0x1C0065DB4 (-ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAME.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00790B0 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008C7B0 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z @ 0x1C0095804 (-ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z.c)
 *     ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00A0198 (-ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisIfSetFilterIfInfoInRegistry @ 0x1C01063C4 (ndisIfSetFilterIfInfoInRegistry.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012063C (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 */

void __stdcall NdisWriteConfiguration(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        PNDIS_CONFIGURATION_PARAMETER ParameterValue)
{
  char v7; // r12
  _NDIS_PARAMETER_TYPE ParameterType; // eax
  wchar_t *Buffer; // rdi
  ULONG v11; // ebp
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *ValueData; // r15
  ULONG ValueLength; // ebx
  __int64 Length; // rdx
  wchar_t *PoolWithTag; // rax
  const WCHAR *v16; // rdx
  ULONG v17; // ecx

  v7 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x21u,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      ConfigurationHandle);
  *Status = 0;
  ParameterType = ParameterValue->ParameterType;
  Buffer = Keyword->Buffer;
  if ( ParameterValue->ParameterType < NdisParameterInteger )
    goto LABEL_26;
  if ( ParameterType <= NdisParameterHexInteger )
  {
    ValueData = &ParameterValue->ParameterData;
    ValueLength = 4;
    v11 = 4;
  }
  else if ( ParameterType == NdisParameterString )
  {
    ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
    v11 = 1;
    ValueLength = ParameterValue->ParameterData.StringData.Length + 2;
  }
  else
  {
    v11 = 3;
    if ( ParameterType != NdisParameterMultiString )
    {
      if ( ParameterType == NdisParameterBinary )
      {
        ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
        ValueLength = ParameterValue->ParameterData.StringData.Length;
        goto LABEL_9;
      }
LABEL_26:
      *Status = -1073741637;
      goto LABEL_18;
    }
    ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
    v11 = 7;
    ValueLength = ParameterValue->ParameterData.StringData.Length;
  }
LABEL_9:
  Length = Keyword->Length;
  if ( (unsigned __int16)Length < 2u || Buffer[((unsigned __int64)Keyword->Length >> 1) - 1] )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Length + 2, 0x2020444Eu);
    Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      *Status = -1073741670;
      goto LABEL_18;
    }
    v7 = 1;
    memmove(PoolWithTag, Keyword->Buffer, Keyword->Length);
    Buffer[(unsigned __int64)Keyword->Length >> 1] = 0;
  }
  if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0 || *((_QWORD *)ConfigurationHandle + 4) )
  {
    v16 = (const WCHAR *)*((_QWORD *)ConfigurationHandle + 4);
    v17 = 0x40000000;
  }
  else
  {
    v16 = (const WCHAR *)((char *)ConfigurationHandle + 176);
    v17 = 1;
  }
  *Status = RtlWriteRegistryValue(v17, v16, (PCWSTR)Buffer, v11, ValueData, ValueLength);
  if ( v7 )
    ExFreePoolWithTag(Buffer, 0);
LABEL_18:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x22u,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      ConfigurationHandle);
}
