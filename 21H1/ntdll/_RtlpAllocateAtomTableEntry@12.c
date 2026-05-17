/*
 * XREFs of _RtlpAllocateAtomTableEntry@12 @ 0x4B2E0744
 * Callers:
 *     _RtlAddAtomToAtomTableEx@16 @ 0x4B2E00E8 (_RtlAddAtomToAtomTableEx@16.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __fastcall RtlpAllocateAtomTableEntry(int a1, _DWORD *a2, int a3)
{
  int result; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  v5 = 16;
  if ( (RtlULongPtrAdd(0x10u, a1, &v5) & 0x80000000) != 0 )
    return 0;
  result = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v5);
  if ( !result )
    return 0;
  *(_DWORD *)result = 0;
  *(_WORD *)(result + 8) = 1;
  *(_WORD *)(result + 10) = 0;
  *a2 = result + 8;
  return result;
}
