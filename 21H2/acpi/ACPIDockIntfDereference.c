/*
 * XREFs of ACPIDockIntfDereference @ 0x1C0049070
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C00071F0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

LONG_PTR __fastcall ACPIDockIntfDereference(PVOID Object)
{
  ULONG_PTR DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  if ( *(char *)(DeviceExtension + 8) >= 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(DeviceExtension + 196), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(DeviceExtension + 192) = 4;
  }
  ACPIInitDereferenceDeviceExtensionUnlocked(DeviceExtension);
  return ObfDereferenceObject(Object);
}
