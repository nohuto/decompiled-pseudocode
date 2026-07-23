/*
 * XREFs of DbgkpWerAllocatePool @ 0x140888EBC
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404EE898 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
