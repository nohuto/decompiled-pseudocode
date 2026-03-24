/*
 * XREFs of HvlpPreallocatePageListResources @ 0x14088EB04
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x14079163C (PopPreallocateHibernateMemory.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     MmAllocateIndependentPagesEx @ 0x140762A0C (MmAllocateIndependentPagesEx.c)
 */

__int64 HvlpPreallocatePageListResources()
{
  unsigned int v0; // ebx
  void *IndependentPages; // rax

  v0 = 0;
  if ( !HvlpFallbackScratchPage )
  {
    IndependentPages = (void *)MmAllocateIndependentPagesEx(0x1000uLL, -1, 0LL, 0LL);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    else
      return (unsigned int)-1073741670;
  }
  return v0;
}
