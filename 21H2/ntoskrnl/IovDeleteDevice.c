/*
 * XREFs of IovDeleteDevice @ 0x140A807E4
 * Callers:
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x140A91824 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
