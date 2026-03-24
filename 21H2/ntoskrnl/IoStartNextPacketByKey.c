/*
 * XREFs of IoStartNextPacketByKey @ 0x1405063F0
 * Callers:
 *     <none>
 * Callees:
 *     IopStartNextPacketByKey @ 0x140506C44 (IopStartNextPacketByKey.c)
 *     IopStartNextPacketByKeyEx @ 0x140506D08 (IopStartNextPacketByKeyEx.c)
 */

void __stdcall IoStartNextPacketByKey(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable, ULONG Key)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, Key, Cancelable != 0 ? 192 : 64);
  else
    IopStartNextPacketByKey(DeviceObject, Cancelable);
}
