/*
 * XREFs of IoStartNextPacket @ 0x140504820
 * Callers:
 *     <none>
 * Callees:
 *     IopStartNextPacket @ 0x140505004 (IopStartNextPacket.c)
 *     IopStartNextPacketByKeyEx @ 0x140505188 (IopStartNextPacketByKeyEx.c)
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, 0LL, Cancelable != 0 ? 160 : 32);
  else
    IopStartNextPacket(DeviceObject, Cancelable);
}
