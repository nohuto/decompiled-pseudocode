/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x18007458C
 * Callers:
 *     RtlpCreateHashTable @ 0x1800743F8 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x180088CA0 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
