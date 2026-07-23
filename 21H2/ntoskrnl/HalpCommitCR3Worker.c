/*
 * XREFs of HalpCommitCR3Worker @ 0x14099A5EC
 * Callers:
 *     HalpCommitCR3Worker @ 0x14099A5EC (HalpCommitCR3Worker.c)
 *     HalpMmBuildTiledMemoryMap @ 0x14099B1BC (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     HalpCommitCR3Worker @ 0x14099A5EC (HalpCommitCR3Worker.c)
 */

void __fastcall HalpCommitCR3Worker(void **a1, unsigned int a2)
{
  __int64 v4; // rdi
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  v4 = 512LL;
  do
  {
    v5 = *a1;
    if ( *a1 )
    {
      if ( a2 >= 2 )
      {
        HalpCommitCR3Worker(v5, a2 - 1);
        v5 = *a1;
      }
      *a1 = (void *)(MmGetPhysicalAddress(v5).QuadPart & 0xFFFFFFFFF000LL);
      v6 = 1LL;
      v7 = 2LL;
      do
      {
        *a1 = (void *)(v6++ | (unsigned __int64)*a1);
        --v7;
      }
      while ( v7 );
    }
    ++a1;
    --v4;
  }
  while ( v4 );
}
