/*
 * XREFs of DbgkpWerAllocatePool @ 0x14088494C
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404E8EB8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
