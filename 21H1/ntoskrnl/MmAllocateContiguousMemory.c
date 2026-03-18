/*
 * XREFs of MmAllocateContiguousMemory @ 0x14052BBC0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateContiguousMemory @ 0x1402F8FFC (MiAllocateContiguousMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  ULONG_PTR v2; // rdx

  v2 = (unsigned __int64)HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > 0xFFFFFFFFFLL )
    v2 = 0xFFFFFFFFFLL;
  return (PVOID)MiAllocateContiguousMemory(NumberOfBytes, 0LL, v2, 0LL, 6u, 0x80000000);
}
