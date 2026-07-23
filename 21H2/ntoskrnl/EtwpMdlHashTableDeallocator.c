/*
 * XREFs of EtwpMdlHashTableDeallocator @ 0x1405B0978
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x1405B0994 (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpMdlHashTableDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x42777445u);
}
