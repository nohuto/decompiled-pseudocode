/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x18007345C
 * Callers:
 *     RtlpCreateHashTable @ 0x1800732C8 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x1800885A0 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
