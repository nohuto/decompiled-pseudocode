/*
 * XREFs of EtwpMdlHashTableAllocator @ 0x1405AAAD4
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x1405AAB14 (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall EtwpMdlHashTableAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x42777445u);
}
