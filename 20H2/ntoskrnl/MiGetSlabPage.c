/*
 * XREFs of MiGetSlabPage @ 0x140332E88
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x140232AB4 (MiGetHardFaultPages.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiFinalizeImageHeaderPage @ 0x140332CF0 (MiFinalizeImageHeaderPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053280C (MmAllocateNonChargedSecurePages.c)
 *     MiCompleteSecureProcessFault @ 0x140546684 (MiCompleteSecureProcessFault.c)
 *     MmAllocateSecureKernelPages @ 0x140551904 (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1406ED7B8 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiGetPageFromSlabAllocator @ 0x140332F1C (MiGetPageFromSlabAllocator.c)
 *     MiGetSlabAllocator @ 0x140333098 (MiGetSlabAllocator.c)
 *     MiReplenishSlabAllocator @ 0x1403923A4 (MiReplenishSlabAllocator.c)
 *     MiSlabAllocatorRecentFailure @ 0x140392654 (MiSlabAllocatorRecentFailure.c)
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
