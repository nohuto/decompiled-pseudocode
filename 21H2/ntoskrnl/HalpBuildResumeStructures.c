/*
 * XREFs of HalpBuildResumeStructures @ 0x14099935C
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x14038BD40 (HalpDispatchSystemStateTransition.c)
 *     HalpDpReplaceBegin @ 0x140866610 (HalpDpReplaceBegin.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpMmFreeTiledMemoryMap @ 0x14099B150 (HalpMmFreeTiledMemoryMap.c)
 *     HalpMmBuildTiledMemoryMap @ 0x14099B1BC (HalpMmBuildTiledMemoryMap.c)
 */

__int64 HalpBuildResumeStructures()
{
  __int64 ActiveProcessorCount; // rdi
  __int64 v1; // rcx
  void *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v9; // rbx
  __int64 v10; // rsi

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v2 = (void *)HalpMmAllocCtxAlloc(v1, 1472 * ActiveProcessorCount);
  HalpHiberProcState = (__int64)v2;
  if ( v2 )
  {
    memset(v2, 0, 1472 * ActiveProcessorCount);
    v5 = (void *)HalpMmAllocCtxAlloc(v4, 8 * ActiveProcessorCount);
    HalpTiledCr3Addresses = (__int64)v5;
    if ( v5 )
    {
      memset(v5, 0, 8 * ActiveProcessorCount);
      v7 = 0LL;
      if ( !(_DWORD)ActiveProcessorCount )
        return 0LL;
      while ( (int)HalpMmBuildTiledMemoryMap(HalpTiledCr3Addresses + 8 * v7, v6, (unsigned int)v7) >= 0 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= (unsigned int)ActiveProcessorCount )
          return 0LL;
      }
    }
    if ( HalpHiberProcState )
    {
      HalpMmAllocCtxFree(v3, HalpHiberProcState);
      HalpHiberProcState = 0LL;
    }
  }
  if ( HalpTiledCr3Addresses )
  {
    v9 = 0LL;
    if ( (_DWORD)ActiveProcessorCount )
    {
      v10 = 0LL;
      do
      {
        v3 = HalpTiledCr3Addresses;
        if ( *(_DWORD *)(v10 + HalpTiledCr3Addresses + 4) )
          HalpMmFreeTiledMemoryMap(HalpTiledCr3Addresses + 8 * v9);
        v9 = (unsigned int)(v9 + 1);
        v10 += 8LL;
      }
      while ( (unsigned int)v9 < (unsigned int)ActiveProcessorCount );
    }
    HalpMmAllocCtxFree(v3, HalpTiledCr3Addresses);
    HalpTiledCr3Addresses = 0LL;
  }
  return 3221225626LL;
}
