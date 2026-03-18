/*
 * XREFs of IovDeleteDevice @ 0x1409C2178
 * Callers:
 *     IoDeleteDevice @ 0x14033F890 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x1409D30D4 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
