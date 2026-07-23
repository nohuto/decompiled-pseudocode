/*
 * XREFs of ZwMakeTemporaryObject @ 0x1403F57A0
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F57C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x14075FA80 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x14078E2A0 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
