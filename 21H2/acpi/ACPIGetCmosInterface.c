/*
 * XREFs of ACPIGetCmosInterface @ 0x1C002C4B0
 * Callers:
 *     OSInitializeCallbacks @ 0x1C00BF128 (OSInitializeCallbacks.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017F20 (ACPIInitReferenceDeviceExtension.c)
 *     CmosGetInterface @ 0x1C00A1EB4 (CmosGetInterface.c)
 */

__int64 ACPIGetCmosInterface()
{
  ULONG_PTR v0; // rbx
  KIRQL v1; // dl
  KIRQL v2; // al

  KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v0 = RootDeviceExtension;
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v1);
  LODWORD(v0) = CmosGetInterface(*(PDEVICE_OBJECT *)(v0 + 728));
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  --*(_DWORD *)(RootDeviceExtension + 692);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v2);
  return (unsigned int)v0;
}
