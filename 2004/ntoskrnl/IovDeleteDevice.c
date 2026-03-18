/*
 * XREFs of IovDeleteDevice @ 0x1409C2188
 * Callers:
 *     IoDeleteDevice @ 0x14026F700 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x1409D3134 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
