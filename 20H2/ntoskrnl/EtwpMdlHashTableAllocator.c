/*
 * XREFs of EtwpMdlHashTableAllocator @ 0x1405AED24
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x1405AED64 (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall EtwpMdlHashTableAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x42777445u);
}
