/*
 * XREFs of UsbhSetSqmEnumerationData @ 0x1C0046B28
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0055820 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C00469A4 (UsbhSetPdoRegistryParameter.c)
 */

__int64 __fastcall UsbhSetSqmEnumerationData(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  __int64 result; // rax

  v2 = PdoExt((__int64)DeviceObject);
  if ( v2[706] )
    UsbhSetPdoRegistryParameter(DeviceObject, L"MsOs20Flags", 4u, v2 + 706, 4u);
  result = UsbhGetPortData(*((_QWORD *)v2 + 148), *((_WORD *)v2 + 714));
  if ( result )
    return UsbhSetPdoRegistryParameter(DeviceObject, L"EnumerationRetryCount", 4u, (PVOID)(result + 544), 4u);
  return result;
}
