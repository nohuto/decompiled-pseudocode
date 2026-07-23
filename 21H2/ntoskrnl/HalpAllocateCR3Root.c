/*
 * XREFs of HalpAllocateCR3Root @ 0x1403CBC38
 * Callers:
 *     HalpDispatchPnp @ 0x140765140 (HalpDispatchPnp.c)
 *     HalpMmBuildTiledMemoryMap @ 0x14099B1BC (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140216B60 (MmAllocateContiguousNodeMemory.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A24C4 (HalpQueryMaximumRegisteredProcessorCount.c)
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
