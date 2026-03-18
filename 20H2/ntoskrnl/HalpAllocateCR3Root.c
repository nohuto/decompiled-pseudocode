/*
 * XREFs of HalpAllocateCR3Root @ 0x1403CB0F8
 * Callers:
 *     HalpDispatchPnp @ 0x140761CB0 (HalpDispatchPnp.c)
 *     HalpMmBuildTiledMemoryMap @ 0x14099CC3C (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x14025FF30 (MmAllocateContiguousNodeMemory.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A1AB4 (HalpQueryMaximumRegisteredProcessorCount.c)
 */

__int64 __fastcall HalpAllocateCR3Root(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 ContiguousNodeMemory; // rcx

  v1 = a1;
  if ( a1 >= (unsigned int)HalpQueryMaximumRegisteredProcessorCount() )
    return 3221225485LL;
  if ( *(_QWORD *)(HalpCR3Root + 8 * v1) )
    return 0LL;
  ContiguousNodeMemory = MmAllocateContiguousNodeMemory(4096, 0LL, 0xFFFFFFFFLL, 0, 4u, 0x80000000);
  if ( ContiguousNodeMemory )
  {
    *(_QWORD *)(HalpCR3Root + 8 * v1) = ContiguousNodeMemory;
    return 0LL;
  }
  return 3221225626LL;
}
