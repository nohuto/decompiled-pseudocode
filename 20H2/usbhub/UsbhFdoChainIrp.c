/*
 * XREFs of UsbhFdoChainIrp @ 0x1C0029E7C
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0014DE0 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoSystemControl @ 0x1C0015970 (UsbhFdoSystemControl.c)
 *     UsbhFdoInternalDeviceControl @ 0x1C001C2D0 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoDeviceControl @ 0x1C002A170 (UsbhFdoDeviceControl.c)
 *     UsbhFdoReturnHubCount @ 0x1C0030C08 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0030D50 (UsbhFdoReturnRootHubPdo.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax

  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v3[151], a2);
}
