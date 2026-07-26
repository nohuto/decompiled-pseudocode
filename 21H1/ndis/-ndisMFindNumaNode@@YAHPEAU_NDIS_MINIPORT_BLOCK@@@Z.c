/*
 * XREFs of ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00211DC
 * Callers:
 *     ?ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021094 (-ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisOpenConfigurationEx @ 0x1C0028100 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C0028340 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C0028420 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisMFindNumaNode(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // ebx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+30h] [rbp-20h] BYREF
  int Status; // [rsp+70h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+78h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+80h] [rbp+30h] BYREF

  ConfigurationHandle = 0LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  ParameterValue = 0LL;
  ConfigObject.Flags = 0;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( Status < 0 )
    return (unsigned int)IoGetDeviceNumaNode(a1->PhysicalDeviceObject, &a1->NumaNodeId);
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NumaNodeIdStr, NdisParameterInteger);
  v2 = Status;
  if ( Status >= 0 )
  {
    if ( ParameterValue->ParameterData.IntegerData <= KeQueryHighestNodeNumber() )
      a1->NumaNodeId = ParameterValue->ParameterData.StringData.Length;
    else
      v2 = -1073676267;
  }
  NdisCloseConfiguration(ConfigurationHandle);
  if ( v2 < 0 )
    return (unsigned int)IoGetDeviceNumaNode(a1->PhysicalDeviceObject, &a1->NumaNodeId);
  return (unsigned int)v2;
}
