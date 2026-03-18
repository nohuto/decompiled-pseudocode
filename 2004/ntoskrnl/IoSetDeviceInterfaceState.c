/*
 * XREFs of IoSetDeviceInterfaceState @ 0x1407344B0
 * Callers:
 *     PiSwDeviceInterfaceSetState @ 0x140737074 (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140737200 (PiSwDeviceInterfacesUpdateState.c)
 *     PnpDisableDeviceInterfaces @ 0x14075C4DC (PnpDisableDeviceInterfaces.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     IopProcessSetInterfaceState @ 0x14073452C (IopProcessSetInterfaceState.c)
 */

NTSTATUS __stdcall IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  LOBYTE(v5) = 1;
  LOBYTE(v6) = Enable;
  v7 = IopProcessSetInterfaceState(SymbolicLinkName, v6, v5);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v7 < 0 )
    return Enable != 0 ? v7 : 0;
  return v7;
}
