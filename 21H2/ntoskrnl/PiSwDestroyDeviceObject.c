/*
 * XREFs of PiSwDestroyDeviceObject @ 0x140732EB8
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x140738F40 (PiSwProcessParentRemoveIrp.c)
 *     PiSwPdoPnPDispatch @ 0x14074F280 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x140732EEC (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject(DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
