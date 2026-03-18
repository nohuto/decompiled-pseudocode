/*
 * XREFs of PpDeviceRegistration @ 0x14074311C
 * Callers:
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140742BFC (PnpCleanupDeviceRegistryValues.c)
 *     IopInitializeDeviceInstanceKey @ 0x140748194 (IopInitializeDeviceInstanceKey.c)
 *     PpDevCfgProcessDevices @ 0x140798D9C (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     PiDeviceRegistration @ 0x1407431AC (PiDeviceRegistration.c)
 */

__int64 __fastcall PpDeviceRegistration(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx

  v6 = a2;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  }
  LOBYTE(a2) = v6;
  v9 = PiDeviceRegistration(a1, a2, a3);
  if ( !a4 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v9;
}
