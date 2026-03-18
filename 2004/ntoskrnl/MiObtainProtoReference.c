/*
 * XREFs of MiObtainProtoReference @ 0x140229634
 * Callers:
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14025F04C (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MiHandleCollidedFault @ 0x140312448 (MiHandleCollidedFault.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A8A8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053AC64 (MiCopyImageExtentContents.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiObtainProtoReference(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 & 1) != 0 )
  {
    MiLockNestedPageAtDpcInline(a1);
  }
  else
  {
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v4, a2);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  MiAddLockedPageCharge(a1, 1LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
