/*
 * XREFs of HalpMmFreeTiledMemoryMap @ 0x14099B150
 * Callers:
 *     HalpFreeResumeStructures @ 0x1409992DC (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x14099935C (HalpBuildResumeStructures.c)
 *     HalpInterruptStartProcessor @ 0x14099AF74 (HalpInterruptStartProcessor.c)
 *     HalpMmBuildTiledMemoryMap @ 0x14099B1BC (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpMmFreeTiledMemoryMap(unsigned int *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdx

  v1 = 0LL;
  v3 = 16LL;
  do
  {
    result = v1 + 16LL * *a1;
    v5 = *(_QWORD *)(HiberFreeCR3 + 8 * result);
    if ( v5 )
    {
      HalpMmAllocCtxFree((__int64)a1, v5);
      result = v1 + 16LL * *a1;
      *(_QWORD *)(HiberFreeCR3 + 8 * result) = 0LL;
    }
    ++v1;
    --v3;
  }
  while ( v3 );
  return result;
}
