/*
 * XREFs of HalpMmBuildTiledMemoryMap @ 0x140996BFC
 * Callers:
 *     HalpBuildResumeStructures @ 0x14099500C (HalpBuildResumeStructures.c)
 *     HalpInterruptStartProcessor @ 0x1409969B4 (HalpInterruptStartProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1403617D0 (MmGetPhysicalAddress.c)
 *     HalpAllocateCR3Root @ 0x1403C84B8 (HalpAllocateCR3Root.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HalpCommitCR3Worker @ 0x140996038 (HalpCommitCR3Worker.c)
 *     HalpMmFreeTiledMemoryMap @ 0x140996B90 (HalpMmFreeTiledMemoryMap.c)
 *     HalpMapCR3Ex @ 0x140996CE0 (HalpMapCR3Ex.c)
 */

__int64 __fastcall HalpMmBuildTiledMemoryMap(unsigned int *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  void *v6; // rbx
  int v7; // edi

  v3 = HalpCR3Root;
  v5 = a3;
  *a1 = a3;
  v6 = *(void **)(v3 + 8LL * a3);
  if ( !v6 )
  {
    HalpAllocateCR3Root(a3);
    v6 = *(void **)(HalpCR3Root + 8 * v5);
    if ( !v6 )
      return 3221225495LL;
  }
  memset(v6, 0, 0x1000uLL);
  v7 = HalpMapCR3Ex(HalpLowStubPhysicalAddress);
  if ( v7 < 0 || (v7 = HalpMapCR3Ex(HalpLMStub), v7 < 0) )
  {
    HalpMmFreeTiledMemoryMap(a1);
  }
  else
  {
    v7 = 0;
    HalpCommitCR3Worker(*(void ***)(HalpCR3Root + 8 * v5), 3u);
    a1[1] = MmGetPhysicalAddress(v6).LowPart;
  }
  return (unsigned int)v7;
}
