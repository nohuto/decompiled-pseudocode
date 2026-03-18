/*
 * XREFs of PiSwDestroyDeviceObject @ 0x140720998
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x14073279C (PiSwProcessParentRemoveIrp.c)
 *     PiSwPdoPnPDispatch @ 0x1407395F0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     IoDeleteDevice @ 0x14026F700 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x1407209CC (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject(DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
