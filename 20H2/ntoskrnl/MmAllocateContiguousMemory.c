/*
 * XREFs of MmAllocateContiguousMemory @ 0x14052FBE0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateContiguousMemory @ 0x14025FFCC (MiAllocateContiguousMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int64 v2; // rdx

  v2 = (unsigned __int64)HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > 0xFFFFFFFFFLL )
    v2 = 0xFFFFFFFFFLL;
  return (PVOID)MiAllocateContiguousMemory(NumberOfBytes, 0LL, v2, 0LL, 6u, 0x80000000);
}
