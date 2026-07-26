/*
 * XREFs of ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00274BC
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012C504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C00220F4 (-NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETE.c)
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C0026E40 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 *     NdisOpenConfigurationEx @ 0x1C0028340 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C0028580 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C0028660 (NdisReadConfiguration.c)
 */

void __fastcall ndisReadRssKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _PROCESSOR_NUMBER v2; // ebx
  struct _PROCESSOR_NUMBER v3; // edi
  _NDIS_RSS_PROFILE IntegerData; // r14d
  unsigned __int16 Length; // r12
  PVOID v6; // rbx
  __int64 v7; // r9
  unsigned __int16 Group; // r15
  unsigned int MaxNumRssProcessors; // ecx
  int v10; // eax
  unsigned int v11; // r15d
  struct _PROCESSOR_NUMBER v12; // r8d
  int v13; // eax
  _PROCESSOR_NUMBER v14; // r8d
  __int64 v15; // r11
  unsigned int v16; // r9d
  struct _PROCESSOR_NUMBER v17; // r8d
  int v18; // r9d
  _PROCESSOR_NUMBER v19; // r8d
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+30h] [rbp-38h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-28h] BYREF
  int Status; // [rsp+B0h] [rbp+48h] BYREF
  _PROCESSOR_NUMBER v24; // [rsp+B8h] [rbp+50h]
  struct _PROCESSOR_NUMBER v25; // [rsp+C0h] [rbp+58h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+C8h] [rbp+60h] BYREF

  ConfigurationHandle = 0LL;
  v2 = 0;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  v3 = 0;
  IntegerData = NdisRssProfileNumaStatic;
  *(&ConfigObject.Flags + 1) = 0;
  ParameterValue = 0LL;
  v25 = 0;
  v24 = 0;
  ProcNumber = 0;
  KeGetProcessorNumberFromIndex(ndisRssBaseCpu, &ProcNumber);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  ConfigObject.NdisHandle = a1;
  Length = 20;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    v6 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &RssStr, NdisParameterInteger);
    NdisTraceLoggingRssConfiguration(a1, ParameterValue, (unsigned int)Status, v7);
    NdisReadConfiguration(&Status, &ParameterValue, v6, &MaxRssProcStr, NdisParameterInteger);
    if ( !Status )
      a1->MaxNumRssProcessors = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcGroupStr, NdisParameterInteger);
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x14 )
    {
      Group = v25.Group;
    }
    else
    {
      Group = ParameterValue->ParameterData.StringData.Length;
      v25.Group = Group;
      v3 = v25;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcNumStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData < 0x40 )
    {
      v25.Number = ParameterValue->ParameterData.IntegerData;
      v3 = v25;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcGroupStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData < 0x14 )
      Length = ParameterValue->ParameterData.StringData.Length;
    v24.Group = Length;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcNumStr, NdisParameterInteger);
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x40 )
    {
      v24.Number = 63;
    }
    else
    {
      v24.Number = ParameterValue->ParameterData.IntegerData;
      if ( Length == 20 )
        v24.Group = Group;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssProfileStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 4 )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(v6);
    v2 = v24;
  }
  MaxNumRssProcessors = ndisMaxNumRssCpus;
  if ( a1->MaxNumRssProcessors < ndisMaxNumRssCpus )
    MaxNumRssProcessors = a1->MaxNumRssProcessors;
  a1->MaxNumRssProcessors = MaxNumRssProcessors;
  v10 = ndisCompareProcNum(ProcNumber, v3);
  v11 = ndisRssCpuCount;
  if ( v10 > 0 )
    v3 = ProcNumber;
  if ( (int)ndisCompareProcNum(
              v3,
              *(struct _PROCESSOR_NUMBER *)((char *)ndisRssProcessors + 4 * (unsigned int)(ndisRssCpuCount - 1))) > 0 )
    v3 = v12;
  v13 = ndisCompareProcNum(v2, v12);
  v16 = 0;
  if ( v13 > 0 )
    v2 = v14;
  if ( v11 )
  {
    while ( (int)ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)(v15 + 4LL * v16), v3) < 0 )
    {
      v16 = v18 + 1;
      if ( v16 >= v11 )
        goto LABEL_26;
    }
    if ( (int)ndisCompareProcNum(v17, v2) > 0 )
      v2 = v19;
  }
LABEL_26:
  a1->RssBaseProcessor = v3;
  a1->RssMaxProcessor = v2;
  a1->RssProfile = IntegerData;
}
