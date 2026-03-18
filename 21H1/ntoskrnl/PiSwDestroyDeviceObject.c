/*
 * XREFs of PiSwDestroyDeviceObject @ 0x14071EBF8
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x14073456C (PiSwProcessParentRemoveIrp.c)
 *     PiSwPdoPnPDispatch @ 0x140737A70 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     IoDeleteDevice @ 0x14033F890 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x14071EC2C (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject(DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
