/*
 * XREFs of DbgkpWerAllocatePool @ 0x14092BA34
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x140540798 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
