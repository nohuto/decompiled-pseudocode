/*
 * XREFs of MiGetSlabPage @ 0x140326128
 * Callers:
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiFinalizeImageHeaderPage @ 0x140325CD8 (MiFinalizeImageHeaderPage.c)
 *     MiGetHardFaultPages @ 0x140325E70 (MiGetHardFaultPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x14052E7EC (MmAllocateNonChargedSecurePages.c)
 *     MiCompleteSecureProcessFault @ 0x140542664 (MiCompleteSecureProcessFault.c)
 *     MmAllocateSecureKernelPages @ 0x14054D8E4 (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14062F350 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1406F0068 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x14074B21C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiGetPageFromSlabAllocator @ 0x1403261BC (MiGetPageFromSlabAllocator.c)
 *     MiGetSlabAllocator @ 0x140326338 (MiGetSlabAllocator.c)
 *     MiReplenishSlabAllocator @ 0x14038F374 (MiReplenishSlabAllocator.c)
 *     MiSlabAllocatorRecentFailure @ 0x14038F624 (MiSlabAllocatorRecentFailure.c)
 */

__int64 __fastcall MiGetSlabPage(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4, unsigned int a5)
{
  __int64 SlabAllocator; // rdi
  __int64 PageFromSlabAllocator; // rsi

  SlabAllocator = MiGetSlabAllocator(a1, a3, a2);
  if ( (unsigned __int64)a4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    *a4 = 0LL;
  while ( 1 )
  {
    PageFromSlabAllocator = MiGetPageFromSlabAllocator(SlabAllocator);
    if ( PageFromSlabAllocator != -1 )
      break;
    if ( *(_DWORD *)(SlabAllocator + 48) == 1 || (unsigned int)MiSlabAllocatorRecentFailure(SlabAllocator) )
      return -1LL;
    if ( a4 != (__int64 *)-1LL )
    {
      if ( a4 )
        *a4 = SlabAllocator;
      return PageFromSlabAllocator;
    }
    if ( !(unsigned int)MiReplenishSlabAllocator(SlabAllocator, a1, 1LL, a5) )
      return -1LL;
  }
  return PageFromSlabAllocator;
}
