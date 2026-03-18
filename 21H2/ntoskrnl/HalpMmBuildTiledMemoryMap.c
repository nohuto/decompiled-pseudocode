/*
 * XREFs of HalpMmBuildTiledMemoryMap @ 0x140A54CD8
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x1403B8E60 (HalpInterruptBuildGlobalStartupStub.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     HalpAllocateCR3Root @ 0x1403B9174 (HalpAllocateCR3Root.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpMapCR3Ex @ 0x140A54D70 (HalpMapCR3Ex.c)
 *     HalpCommitCR3Worker @ 0x140A5A2A4 (HalpCommitCR3Worker.c)
 */

__int64 HalpMmBuildTiledMemoryMap()
{
  PVOID v0; // rdi
  int v1; // ebx

  HalpAllocateCR3Root();
  v0 = HalpCR3Root;
  if ( !HalpCR3Root )
    return 3221225495LL;
  memset(HalpCR3Root, 0, 0x1000uLL);
  v1 = HalpMapCR3Ex(HalpLowStubPhysicalAddress);
  if ( v1 >= 0 )
  {
    v1 = HalpMapCR3Ex(HalpLMStub);
    if ( v1 >= 0 )
    {
      v1 = 0;
      HalpCommitCR3Worker(HalpCR3Root, 3LL);
      dword_140C4BFDC = MmGetPhysicalAddress(v0).LowPart;
    }
  }
  return (unsigned int)v1;
}
