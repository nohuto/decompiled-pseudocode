/*
 * XREFs of HalpBuildResumeStructures @ 0x140A522B8
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x14039693C (HalpDispatchSystemStateTransition.c)
 *     HalpDpReplaceBegin @ 0x14090A6D0 (HalpDpReplaceBegin.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x140396A68 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 HalpBuildResumeStructures()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  void *v2; // rax
  __int64 v3; // rcx

  v0 = 1472LL * KeQueryActiveProcessorCountEx(0xFFFFu);
  v2 = (void *)HalpMmAllocCtxAlloc(v1, v0);
  HalpHiberProcState = (__int64)v2;
  if ( v2 )
  {
    memset(v2, 0, v0);
    if ( !HalpTiledMemoryMapActive || (int)HalpMmUpdateTiledMemoryMapTargetStub() >= 0 )
      return 0LL;
    if ( HalpHiberProcState )
    {
      HalpMmAllocCtxFree(v3, HalpHiberProcState);
      HalpHiberProcState = 0LL;
    }
  }
  return 3221225626LL;
}
