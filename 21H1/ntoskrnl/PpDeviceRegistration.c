/*
 * XREFs of PpDeviceRegistration @ 0x1407310DC
 * Callers:
 *     PiCMDeleteDevice @ 0x1407179FC (PiCMDeleteDevice.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140737704 (IopInitializeDeviceInstanceKey.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1407571F0 (PnpCleanupDeviceRegistryValues.c)
 *     PpDevCfgProcessDevices @ 0x14078A78C (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PiDeviceRegistration @ 0x14073116C (PiDeviceRegistration.c)
 */

__int64 __fastcall PpDeviceRegistration(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  }
  return v9;
}
