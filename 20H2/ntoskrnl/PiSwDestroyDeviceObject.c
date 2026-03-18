/*
 * XREFs of PiSwDestroyDeviceObject @ 0x14072E988
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x140741B48 (PiSwProcessParentRemoveIrp.c)
 *     PiSwPdoPnPDispatch @ 0x140748500 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x14072E9BC (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject(DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
