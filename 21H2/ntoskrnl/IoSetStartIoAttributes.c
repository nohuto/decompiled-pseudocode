/*
 * XREFs of IoSetStartIoAttributes @ 0x1403D01F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoSetStartIoAttributes(PDEVICE_OBJECT DeviceObject, BOOLEAN DeferredStartIo, BOOLEAN NonCancelable)
{
  if ( DeferredStartIo )
    DeviceObject->DeviceObjectExtension->StartIoFlags |= 0x100u;
  if ( NonCancelable )
    DeviceObject->DeviceObjectExtension->StartIoFlags |= 0x200u;
}
