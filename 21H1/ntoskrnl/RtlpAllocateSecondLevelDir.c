/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x14032226C
 * Callers:
 *     RtlExpandHashTable @ 0x14033A090 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x140373100 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
