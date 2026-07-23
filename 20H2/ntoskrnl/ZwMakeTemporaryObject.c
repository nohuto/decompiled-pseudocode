/*
 * XREFs of ZwMakeTemporaryObject @ 0x1403FA370
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406C8854 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x14076E0F0 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x14079A9E0 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
