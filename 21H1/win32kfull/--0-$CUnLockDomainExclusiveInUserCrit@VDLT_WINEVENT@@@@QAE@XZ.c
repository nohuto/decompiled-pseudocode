/*
 * XREFs of ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0x146E8
 * Callers:
 *     _xxxProcessNotifyWinEvent@4 @ 0x143A2 (_xxxProcessNotifyWinEvent@4.c)
 *     ?xxxGetEventProc@@YGP6GXPAUHWINEVENTHOOK__@@KPAUHWND__@@JJKK@ZPAUtagEVENTHOOK@@@Z @ 0x147EA (-xxxGetEventProc@@YGP6GXPAUHWINEVENTHOOK__@@KPAUHWND__@@JJKK@ZPAUtagEVENTHOOK@@@Z.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     ?xxxCallTSFNotifyHook@@YGXPAUtagNOTIFY@@@Z @ 0x1556EF (-xxxCallTSFNotifyHook@@YGXPAUtagNOTIFY@@@Z.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

tagDomLock **__thiscall CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(
        tagDomLock **this)
{
  int DLT; // eax
  tagDomLock *DomainLockRef; // eax

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  *this = DomainLockRef;
  if ( DomainLockRef == (tagDomLock *)gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    DomainLockRef = *this;
  }
  tagDomLock::UnLockExclusive(DomainLockRef);
  return this;
}
