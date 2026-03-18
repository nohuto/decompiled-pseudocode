/*
 * XREFs of IoSetDeviceInterfaceState @ 0x140769100
 * Callers:
 *     DifIoSetDeviceInterfaceStateWrapper @ 0x140610DD0 (DifIoSetDeviceInterfaceStateWrapper.c)
 *     PiSwDeviceInterfaceSetState @ 0x14076341C (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1407635A4 (PiSwDeviceInterfacesUpdateState.c)
 *     PnpDisableDeviceInterfaces @ 0x140810788 (PnpDisableDeviceInterfaces.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IopProcessSetInterfaceState @ 0x140769170 (IopProcessSetInterfaceState.c)
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
  KeLeaveCriticalRegion();
  if ( v7 < 0 )
    return Enable != 0 ? v7 : 0;
  return v7;
}
