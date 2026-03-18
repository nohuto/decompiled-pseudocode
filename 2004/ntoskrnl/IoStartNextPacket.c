/*
 * XREFs of IoStartNextPacket @ 0x140500F50
 * Callers:
 *     <none>
 * Callees:
 *     IopStartNextPacket @ 0x14050172C (IopStartNextPacket.c)
 *     IopStartNextPacketByKeyEx @ 0x1405018B0 (IopStartNextPacketByKeyEx.c)
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, 0LL, Cancelable != 0 ? 160 : 32);
  else
    IopStartNextPacket(DeviceObject, Cancelable);
}
