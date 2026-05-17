/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x18007355C
 * Callers:
 *     RtlpCreateHashTable @ 0x1800733C8 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x1800886A0 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
