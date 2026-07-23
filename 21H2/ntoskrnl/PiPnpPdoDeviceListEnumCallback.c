/*
 * XREFs of PiPnpPdoDeviceListEnumCallback @ 0x14061F920
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x14061F960 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 */

__int64 __fastcall PiPnpPdoDeviceListEnumCallback(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  int v3; // ebx

  v2 = *(void **)(a1 + 32);
  v3 = PiPnpAddDeviceToPdoDeviceListEnumContext(a2, v2);
  if ( v3 >= 0 )
    ObfReferenceObject(v2);
  return (unsigned int)v3;
}
