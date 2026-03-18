/*
 * XREFs of IoGetDriverObjectExtension @ 0x14032D2E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 */

PVOID __stdcall IoGetDriverObjectExtension(PDRIVER_OBJECT DriverObject, PVOID ClientIdentificationAddress)
{
  KIRQL v4; // al
  struct _DRIVER_OBJECT *i; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  for ( i = DriverObject->DriverExtension[1].DriverObject;
        i && i->DeviceObject != ClientIdentificationAddress;
        i = *(struct _DRIVER_OBJECT **)&i->Type )
  {
    ;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  if ( i )
    return &i->Flags;
  else
    return 0LL;
}
