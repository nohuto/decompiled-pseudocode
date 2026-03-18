/*
 * XREFs of EtwpMdlHashTableDeallocator @ 0x1405AB1E8
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x1405AB204 (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpMdlHashTableDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x42777445u);
}
