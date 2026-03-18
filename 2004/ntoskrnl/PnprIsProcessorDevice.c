/*
 * XREFs of PnprIsProcessorDevice @ 0x1408AABD8
 * Callers:
 *     PnprAddDeviceResources @ 0x1408A9CE0 (PnprAddDeviceResources.c)
 * Callees:
 *     HalGetProcessorIdByNtNumber @ 0x140375130 (HalGetProcessorIdByNtNumber.c)
 *     IoGetDeviceInterfaces @ 0x1406BDF50 (IoGetDeviceInterfaces.c)
 *     IoGetDevicePropertyData @ 0x140711850 (IoGetDevicePropertyData.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

char __fastcall PnprIsProcessorDevice(PDEVICE_OBJECT Pdo, char a2, ULONG *a3, _DWORD *a4)
{
  char v4; // bl
  ULONG v8; // edi
  ULONG Data; // [rsp+40h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-Ch] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+48h] [rbp-8h] BYREF
  ULONG Type; // [rsp+78h] [rbp+28h] BYREF

  v4 = 0;
  Data = 0;
  RequiredSize = 0;
  SymbolicLinkList = 0LL;
  Type = 0;
  if ( a2 )
  {
    if ( IoGetDeviceInterfaces(&GUID_DEVICE_PROCESSOR, Pdo, 0, &SymbolicLinkList) >= 0 )
    {
      if ( *SymbolicLinkList )
      {
        ExFreePoolWithTag(SymbolicLinkList, 0);
        if ( IoGetDevicePropertyData(Pdo, &PROCESSOR_NUMBER_PKEY, 0, 0, 4u, &Data, &RequiredSize, &Type) >= 0
          && Type == 7 )
        {
          v8 = Data;
          if ( HalGetProcessorIdByNtNumber(Data, a4) >= 0 )
          {
            *a3 = v8;
            return 1;
          }
        }
      }
    }
  }
  else if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Spare_Processor_Apic_Id, 0, 0, 4u, a4, &RequiredSize, &Type) >= 0
         && Type == 7 )
  {
    *a3 = -1;
    return 1;
  }
  return v4;
}
