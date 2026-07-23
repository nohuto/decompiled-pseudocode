/*
 * XREFs of EtwpMdlHashTableAllocator @ 0x1405B0954
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x1405B0994 (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall EtwpMdlHashTableAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x42777445u);
}
