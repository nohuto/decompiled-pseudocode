/*
 * XREFs of MiGetSlabPage @ 0x1402E1028
 * Callers:
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E0BD8 (MiFinalizeImageHeaderPage.c)
 *     MiGetHardFaultPages @ 0x1402E0D70 (MiGetHardFaultPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x14052EE3C (MmAllocateNonChargedSecurePages.c)
 *     MiCompleteSecureProcessFault @ 0x140542CB4 (MiCompleteSecureProcessFault.c)
 *     MmAllocateSecureKernelPages @ 0x14054DF34 (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1405F9950 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1406A9548 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x14074F63C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiGetPageFromSlabAllocator @ 0x1402E10BC (MiGetPageFromSlabAllocator.c)
 *     MiGetSlabAllocator @ 0x1402E1238 (MiGetSlabAllocator.c)
 *     MiReplenishSlabAllocator @ 0x14038FEE4 (MiReplenishSlabAllocator.c)
 *     MiSlabAllocatorRecentFailure @ 0x140390194 (MiSlabAllocatorRecentFailure.c)
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
