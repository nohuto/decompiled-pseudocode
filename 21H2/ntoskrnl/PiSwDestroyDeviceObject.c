/*
 * XREFs of PiSwDestroyDeviceObject @ 0x140732CF8
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x140738D80 (PiSwProcessParentRemoveIrp.c)
 *     PiSwPdoPnPDispatch @ 0x14074F0C0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     IoDeleteDevice @ 0x140360D90 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x140732D2C (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject(DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
