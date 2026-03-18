/*
 * XREFs of IoGetLowerDeviceObject @ 0x14031D3C0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetLowerDeviceObjectWithTag @ 0x14031D3DC (IoGetLowerDeviceObjectWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetLowerDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetLowerDeviceObjectWithTag(DeviceObject, 1953261124LL);
}
