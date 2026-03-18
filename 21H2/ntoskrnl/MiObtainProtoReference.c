/*
 * XREFs of MiObtainProtoReference @ 0x14027449C
 * Callers:
 *     MiHandleCollidedFault @ 0x14023EB78 (MiHandleCollidedFault.c)
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiFlushWaitForReadInProgress @ 0x140597FAC (MiFlushWaitForReadInProgress.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14059DB28 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiObtainProtoReference(__int64 a1, char a2)
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
        KeYieldProcessorEx(&v4);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  MiAddLockedPageCharge(a1, 1LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
