/*
 * XREFs of EtwpMdlHashTableDeallocator @ 0x1406334E8
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x140633504 (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpMdlHashTableDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x42777445u);
}
