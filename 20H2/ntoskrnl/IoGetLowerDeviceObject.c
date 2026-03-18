/*
 * XREFs of IoGetLowerDeviceObject @ 0x14032B960
 * Callers:
 *     <none>
 * Callees:
 *     IoGetLowerDeviceObjectWithTag @ 0x14032B97C (IoGetLowerDeviceObjectWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetLowerDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetLowerDeviceObjectWithTag(DeviceObject, 1953261124LL);
}
