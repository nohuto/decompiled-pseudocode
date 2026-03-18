/*
 * XREFs of zzzEndDeferWinEventNotify @ 0x1C0048C00
 * Callers:
 *     xxxCreateWindowStation @ 0x1C000CF8C (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzCancelJournalling @ 0x1C002A378 (zzzCancelJournalling.c)
 *     zzzEnableDwmPointerSupport @ 0x1C002AEDC (zzzEnableDwmPointerSupport.c)
 *     xxxCapture @ 0x1C0039468 (xxxCapture.c)
 *     xxxScrollWindowEx @ 0x1C0040D0C (xxxScrollWindowEx.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxDwmStopRedirection @ 0x1C0081030 (xxxDwmStopRedirection.c)
 *     zzzLockWindowUpdate2 @ 0x1C00BF2BC (zzzLockWindowUpdate2.c)
 *     zzzReattachThreads @ 0x1C00BF898 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00BFCDC (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     NtUserSetImeOwnerWindow @ 0x1C00C5190 (NtUserSetImeOwnerWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F9728 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxCreateCaret @ 0x1C010A844 (xxxCreateCaret.c)
 *     EditionEndDeferWinEventNotify @ 0x1C0118DD0 (EditionEndDeferWinEventNotify.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C011CC94 (-zzzShowCursor@@YAH_N@Z.c)
 *     xxxAddShadow @ 0x1C0136968 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013709C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxHardErrorControl @ 0x1C0241A0C (xxxHardErrorControl.c)
 * Callees:
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C0076C44 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0077074 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00770C8 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00D67EC (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C01099E0 (xxxFlushDeferredWindowEvents.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void zzzEndDeferWinEventNotify()
{
  unsigned int DLT; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  tagDomLock *DomainLockRef; // rbx
  __int64 v4; // r8
  __int64 v5; // r9

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( DomainLockRef == (tagDomLock *)gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v4, v5);
  tagDomLock::LockExclusive(DomainLockRef);
  --gdwDeferWinEvent;
  tagDomLock::UnLockExclusive(DomainLockRef);
}
