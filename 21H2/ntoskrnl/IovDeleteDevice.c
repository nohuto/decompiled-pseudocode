/*
 * XREFs of IovDeleteDevice @ 0x1409C5198
 * Callers:
 *     IoDeleteDevice @ 0x140360D90 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x1409D6144 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
