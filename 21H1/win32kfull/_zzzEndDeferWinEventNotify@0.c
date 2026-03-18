/*
 * XREFs of _zzzEndDeferWinEventNotify@0 @ 0x33948
 * Callers:
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     _NtUserSetImeOwnerWindow@8 @ 0x1C12C (_NtUserSetImeOwnerWindow@8.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _xxxCreateWindowStation@40 @ 0x8199E (_xxxCreateWindowStation@40.c)
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     _EditionEndDeferWinEventNotify@0 @ 0xAA682 (_EditionEndDeferWinEventNotify@0.c)
 *     _xxxCreateCaret@16 @ 0xAA702 (_xxxCreateCaret@16.c)
 *     ?zzzShowCursor@@YGH_N@Z @ 0xAEA1C (-zzzShowCursor@@YGH_N@Z.c)
 *     _zzzCancelJournalling@0 @ 0xB07D0 (_zzzCancelJournalling@0.c)
 *     _zzzEnableDwmPointerSupport@8 @ 0xB0B78 (_zzzEnableDwmPointerSupport@8.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     ?zzzRecalc2@@YGXPAUtagQ@@@Z @ 0xC7CC8 (-zzzRecalc2@@YGXPAUtagQ@@@Z.c)
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 *     _zzzInitTask@48 @ 0x142324 (_zzzInitTask@48.c)
 *     ?zzzApplyShadow@@YGHPAUtagWND@@0@Z @ 0x19D1DB (-zzzApplyShadow@@YGHPAUtagWND@@0@Z.c)
 *     _xxxAddShadow@4 @ 0x19D320 (_xxxAddShadow@4.c)
 *     _xxxHardErrorControl@12 @ 0x1A022C (_xxxHardErrorControl@12.c)
 * Callees:
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@XZ @ 0x1437E (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@XZ.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0x146E8 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0x147B8 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@AAUtagObjLock@@@Z @ 0x42C64 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@AAUtagObjLock@@@Z.c)
 *     _xxxFlushDeferredWindowEvents@0 @ 0x458CC (_xxxFlushDeferredWindowEvents@0.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __stdcall zzzEndDeferWinEventNotify()
{
  int DLT; // eax
  tagDomLock *DomainLockRef; // esi

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( DomainLockRef == (tagDomLock *)gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  tagDomLock::LockExclusive(DomainLockRef);
  --_gdwDeferWinEvent;
  tagDomLock::UnLockExclusive(DomainLockRef);
}
