/*
 * XREFs of ACPIDockIntfReference @ 0x1C00AB0E0
 * Callers:
 *     ACPIDockIrpQueryInterface @ 0x1C00ABF70 (ACPIDockIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017CC0 (ACPIInitReferenceDeviceExtension.c)
 */

char __fastcall ACPIDockIntfReference(PVOID Object)
{
  __int64 DeviceExtension; // rdi
  char result; // al

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  ObfReferenceObject(Object);
  result = ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(char *)(DeviceExtension + 8) >= 0 )
    _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 196));
  return result;
}
