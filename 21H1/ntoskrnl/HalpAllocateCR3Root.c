/*
 * XREFs of HalpAllocateCR3Root @ 0x1403C76A8
 * Callers:
 *     HalpDispatchPnp @ 0x14074EA40 (HalpDispatchPnp.c)
 *     HalpMmBuildTiledMemoryMap @ 0x14099582C (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x1402F8F60 (MmAllocateContiguousNodeMemory.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14039EE54 (HalpQueryMaximumRegisteredProcessorCount.c)
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
