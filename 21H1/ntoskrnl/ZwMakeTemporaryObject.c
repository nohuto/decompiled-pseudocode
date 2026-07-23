/*
 * XREFs of ZwMakeTemporaryObject @ 0x1403F4510
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x14075D7D0 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x14078C3D0 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
