/*
 * XREFs of ACPIInitDereferenceDeviceExtensionLocked @ 0x1C0019678
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C0015BC4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017CE0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIDetectFilterDevices @ 0x1C0018DA4 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C00190D8 (ACPIDetectPdoDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002C840 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002CD00 (ACPIInitResetDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C005F630 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C00562A8 (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionLocked(ULONG_PTR BugCheckParameter4)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter4 + 692), 0xFFFFFFFF) != 1 )
    return 0;
  if ( (*(_QWORD *)(BugCheckParameter4 + 8) & 0x200000000000000LL) != 0 )
  {
    if ( *(_DWORD *)(BugCheckParameter4 + 196) )
      KeBugCheckEx(0xA3u, 2uLL, 0x9034BuLL, 0LL, BugCheckParameter4);
  }
  ACPIInitDeleteDeviceExtension((PVOID)BugCheckParameter4);
  return 1;
}
