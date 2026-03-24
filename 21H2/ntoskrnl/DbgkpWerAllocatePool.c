/*
 * XREFs of DbgkpWerAllocatePool @ 0x140888D5C
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404EE658 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
