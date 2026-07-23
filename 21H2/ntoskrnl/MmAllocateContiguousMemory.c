/*
 * XREFs of MmAllocateContiguousMemory @ 0x140531920
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateContiguousMemory @ 0x140216BFC (MiAllocateContiguousMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int64 v2; // rdx

  v2 = (unsigned __int64)HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > 0xFFFFFFFFFLL )
    v2 = 0xFFFFFFFFFLL;
  return (PVOID)MiAllocateContiguousMemory(NumberOfBytes, 0LL, v2, 0LL, 6u, 0x80000000);
}
