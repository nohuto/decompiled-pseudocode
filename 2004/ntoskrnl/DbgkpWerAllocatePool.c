/*
 * XREFs of DbgkpWerAllocatePool @ 0x140885C6C
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404E94E8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
