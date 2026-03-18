/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x14034C3C0
 * Callers:
 *     RtlExpandHashTable @ 0x14034C200 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x140373F10 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
