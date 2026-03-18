/*
 * XREFs of IoStartNextPacketByKey @ 0x140557DA0
 * Callers:
 *     <none>
 * Callees:
 *     IopStartNextPacketByKeyEx @ 0x1402577EC (IopStartNextPacketByKeyEx.c)
 *     IopStartNextPacketByKey @ 0x14055838C (IopStartNextPacketByKey.c)
 */

void __stdcall IoStartNextPacketByKey(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable, ULONG Key)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx((__int64)DeviceObject, Key, Cancelable != 0 ? 192 : 64);
  else
    IopStartNextPacketByKey(DeviceObject, Cancelable, Key);
}
