/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1402E1284
 * Callers:
 *     RtlExpandHashTable @ 0x1402E1C90 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x1403765D0 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
