/*
 * XREFs of DbgkpWerAllocatePool @ 0x14088B7BC
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404ECD78 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
