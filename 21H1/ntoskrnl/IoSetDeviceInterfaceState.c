/*
 * XREFs of IoSetDeviceInterfaceState @ 0x14072FA80
 * Callers:
 *     PnpDisableDeviceInterfaces @ 0x140736F54 (PnpDisableDeviceInterfaces.c)
 *     PiSwDeviceInterfaceSetState @ 0x1407532AC (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14075E8E0 (PiSwDeviceInterfacesUpdateState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     IopProcessSetInterfaceState @ 0x14072FAFC (IopProcessSetInterfaceState.c)
 */

NTSTATUS __stdcall IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  NTSTATUS v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  LOBYTE(v5) = 1;
  LOBYTE(v6) = Enable;
  v7 = IopProcessSetInterfaceState(SymbolicLinkName, v6, v5);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( v7 < 0 )
    return Enable != 0 ? v7 : 0;
  return v7;
}
