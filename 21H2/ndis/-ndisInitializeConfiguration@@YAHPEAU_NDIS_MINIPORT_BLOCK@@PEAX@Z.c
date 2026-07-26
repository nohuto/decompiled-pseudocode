/*
 * XREFs of ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0103718
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012C504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0027AC0 (-ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0028044 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReadConfiguration @ 0x1C00289C0 (NdisReadConfiguration.c)
 *     ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x1C00359D4 (-ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z.c)
 *     ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003A130 (-ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@.c)
 *     ?ndisQueryBusInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003A3C8 (-ndisQueryBusInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 __fastcall ndisInitializeConfiguration(struct _NDIS_MINIPORT_BLOCK *a1, const WCHAR *a2)
{
  _INTERFACE_TYPE IntegerData; // edi
  unsigned int v4; // r15d
  unsigned __int16 Length; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // r14
  unsigned int v9; // esi
  NTSTATUS DeviceProperty; // r9d
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ecx
  PVOID v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  NTSTATUS v22; // eax
  PNDIS_CONFIGURATION_PARAMETER v23; // rax
  int Status; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  __int128 ConfigurationHandle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-A8h]
  const WCHAR *v31; // [rsp+68h] [rbp-98h]
  UNICODE_STRING v32; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Keyword; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v34; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v35; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v36; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v37; // [rsp+C0h] [rbp-40h] BYREF
  __int128 PropertyBuffer; // [rsp+D0h] [rbp-30h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v39[3]; // [rsp+E0h] [rbp-20h] BYREF

  v28 = -1;
  v31 = 0LL;
  Status = 0;
  ParameterValue = 0LL;
  IntegerData = MaximumInterfaceType;
  *(_QWORD *)&v34.Length = 1310738LL;
  *(_QWORD *)&v32.Length = 1048590LL;
  v34.Buffer = L"BusNumber";
  LOWORD(v4) = 20;
  *(_QWORD *)&Keyword.Length = 2097182LL;
  v32.Buffer = (wchar_t *)L"BusType";
  Length = 16;
  *(_QWORD *)&v35.Length = 1966108LL;
  Keyword.Buffer = L"PnPCapabilities";
  *(_QWORD *)&v37.Length = 2883626LL;
  v35.Buffer = L"RemoteBootCard";
  *(_QWORD *)&v36.Length = 2752552LL;
  v37.Buffer = L"NdisDriverVerifyFlags";
  v25 = 1;
  v36.Buffer = L"SGMapRegistersNeeded";
  ConfigurationHandle = 0LL;
  ResultLength = 0;
  *(_OWORD *)P = 0LL;
  PropertyBuffer = 0LL;
  memset(v39, 0, sizeof(v39));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6863444Eu);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_40;
  }
  memset(PoolWithTag + 1, 0, 0x84uLL);
  a1->ConfigurationHandle = v8;
  *v8 = 8913162;
  v31 = a2;
  *((_QWORD *)&ConfigurationHandle + 1) = a1;
  P[0] = v8;
  P[1] = 0LL;
  if ( !a1->OpenQueue )
  {
    Status = ndisReadBindPaths(a1, v39, a2);
    v9 = Status;
    if ( Status )
      goto LABEL_40;
  }
  v8[8] = 20;
  *((_QWORD *)v8 + 3) = ndisSaveParameters;
  v8[14] = 0;
  *((_QWORD *)v8 + 10) = 0LL;
  v8[22] = 0;
  *((_QWORD *)v8 + 12) = 0LL;
  *((_QWORD *)v8 + 1) = a1;
  DeviceProperty = IoGetDeviceProperty(
                     a1->PhysicalDeviceObject,
                     DevicePropertyBusTypeGuid,
                     0x10u,
                     &PropertyBuffer,
                     &ResultLength);
  if ( DeviceProperty < 0 )
    goto LABEL_66;
  v11 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1;
  if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1 )
    v11 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_INTERNAL.Data4;
  if ( !v11 )
  {
    IntegerData = Internal;
    v25 = 0;
    goto LABEL_18;
  }
  v12 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1;
  if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1 )
    v12 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_PCMCIA.Data4;
  if ( !v12 )
  {
    IntegerData = PCMCIABus;
    goto LABEL_17;
  }
  v13 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1;
  if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1 )
    v13 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_PCI.Data4;
  if ( !v13 )
  {
    IntegerData = PCIBus;
LABEL_17:
    v25 = IntegerData;
    goto LABEL_18;
  }
  v17 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_USB.Data1;
  if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_USB.Data1 )
    v17 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_USB.Data4;
  if ( v17 )
  {
    v18 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1;
    if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1 )
      v18 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_IRDA.Data4;
    if ( !v18 )
    {
      IntegerData = ACPIBus;
      goto LABEL_17;
    }
    v19 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1;
    if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1 )
      v19 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_ISAPNP.Data4;
    if ( !v19 )
    {
      IntegerData = PNPISABus;
      goto LABEL_17;
    }
    v20 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_1394.Data1;
    if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_1394.Data1 )
      v20 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_1394.Data4;
    if ( !v20 )
      goto LABEL_17;
    v21 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1;
    if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1 )
      v21 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_EISA.Data4;
    if ( !v21 )
    {
      IntegerData = Eisa;
      goto LABEL_17;
    }
LABEL_66:
    IntegerData = v25;
    if ( v25 == 1 )
    {
      v22 = IoGetDeviceProperty(a1->PhysicalDeviceObject, DevicePropertyLegacyBusType, 4u, &v25, &ResultLength);
      IntegerData = v25;
      DeviceProperty = v22;
    }
    goto LABEL_18;
  }
  IntegerData = Vmcs;
  v25 = 16;
LABEL_18:
  if ( DeviceProperty < 0 || IntegerData == Isa || IntegerData == PCMCIABus )
  {
    *((_DWORD *)P[0] + 4) |= 1u;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v32, NdisParameterInteger);
    *((_DWORD *)P[0] + 4) &= ~1u;
    if ( Status )
    {
      IntegerData = v25;
    }
    else
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      v25 = IntegerData;
    }
  }
  if ( IntegerData == PCIBus || IntegerData == PCMCIABus )
  {
    Status = ndisQueryBusInterface(a1);
    v9 = Status;
    if ( Status )
      goto LABEL_40;
    IntegerData = v25;
  }
  if ( (unsigned int)(IntegerData - 2) <= 1 )
  {
    v9 = -1073741637;
  }
  else
  {
    a1->BusType = IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &Keyword, NdisParameterInteger);
    if ( Status )
    {
      if ( (a1->PnPFlags & 0x200000) != 0 )
      {
        a1->PnPCapabilities = ndisDefaultPnPCapabilities;
        a1->PnPCapabilities |= 0x10000000u;
      }
    }
    else
    {
      a1->PnPCapabilities = ParameterValue->ParameterData.IntegerData;
    }
    if ( (a1->Flags & 0x80u) != 0 )
      a1->PnPCapabilities &= 0x10000100u;
    if ( IoGetDeviceProperty(a1->PhysicalDeviceObject, DevicePropertyBusNumber, 4u, &v28, &ResultLength) >= 0
      || (NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v34, NdisParameterInteger), Status) )
    {
      v14 = v28;
    }
    else
    {
      v14 = ParameterValue->ParameterData.IntegerData;
      v28 = v14;
    }
    a1->BusNumber = v14;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v35, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      a1->Flags |= 0x40000000u;
      a1->InfoFlags |= 0x4000u;
    }
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      &ConfigurationHandle,
      &MediaDisconnectTimeOutStr,
      NdisParameterHexInteger);
    if ( !Status )
    {
      v4 = ParameterValue->ParameterData.IntegerData;
      if ( v4 )
      {
        if ( v4 > 0xFFFF )
          LOWORD(v4) = -1;
      }
      else
      {
        LOWORD(v4) = 1;
      }
    }
    a1->MediaDisconnectTimeOut = v4;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &AoAcTestStr, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      a1->FilterPnPFlags |= 0x200u;
      ndisAoAcTest = 1;
    }
    ndisReadPMRegistry(&ConfigurationHandle, a1);
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v36, NdisParameterInteger);
    if ( !Status )
    {
      v23 = ParameterValue;
      if ( ParameterValue->ParameterData.StringData.Length > 0x80u )
      {
        ParameterValue->ParameterData.IntegerData = 128;
        v23 = ParameterValue;
      }
      Length = v23->ParameterData.StringData.Length;
    }
    a1->SGMapRegistersNeeded = Length;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v37, NdisParameterHexInteger);
    if ( !Status )
      a1->DriverVerifyFlags = ParameterValue->ParameterData.IntegerData;
    v8[4] = 0;
    ndisReadOffloadRegistry(a1);
    ndisReadSoftwareTimestampSettings(&ConfigurationHandle, a1);
    v9 = 0;
  }
LABEL_40:
  while ( 1 )
  {
    v15 = P[1];
    if ( !P[1] )
      break;
    P[1] = *(PVOID *)P[1];
    ExFreePoolWithTag(v15, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xBu,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      a1);
  return v9;
}
