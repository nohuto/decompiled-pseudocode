/*
 * XREFs of PcisuppAcquirePciInterfaces @ 0x1C00903EC
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C0090C00 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0002350 (ACPIInternalSetFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C000C798 (ACPIWakeInitializePmeRouting.c)
 *     PcisuppInitializePciRouting @ 0x1C00904A0 (PcisuppInitializePciRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C00B6928 (PcisuppReleasePciRouting.c)
 */

__int64 __fastcall PcisuppAcquirePciInterfaces(PDEVICE_OBJECT DeviceObject)
{
  __int64 DeviceExtension; // rsi
  int v3; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&PciRouteInterfaceLock, 1u);
  v3 = PcisuppInitializePciRouting(DeviceObject);
  if ( v3 >= 0 )
  {
    v3 = ACPIWakeInitializePmeRouting(DeviceObject);
    if ( v3 >= 0 )
    {
      if ( (*(_BYTE *)(DeviceExtension + 960) & 2) != 0 )
      {
        PcisuppReleasePciRouting();
      }
      else
      {
        ACPIInternalSetFlags((void *)(DeviceExtension + 960), 2uLL);
        _InterlockedIncrement(&PciRoutingInterfaceCount);
      }
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
