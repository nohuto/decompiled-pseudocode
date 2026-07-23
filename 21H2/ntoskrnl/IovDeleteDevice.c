/*
 * XREFs of IovDeleteDevice @ 0x1409C6198
 * Callers:
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x1409D7144 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
