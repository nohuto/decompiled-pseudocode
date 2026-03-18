/*
 * XREFs of ??0?$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0xD2D2C
 * Callers:
 *     ?CleanEventMessage@@YGXPAUtagQMSG@@@Z @ 0x9C3D2 (-CleanEventMessage@@YGXPAUtagQMSG@@@Z.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __thiscall CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>(
        int this)
{
  int DLT; // eax
  PERESOURCE *DomainLockRef; // eax

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (PERESOURCE *)GetDomainLockRef(DLT);
  *(_DWORD *)this = DomainLockRef;
  *(_BYTE *)(this + 4) = 0;
  if ( DomainLockRef == (PERESOURCE *)gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    DomainLockRef = *(PERESOURCE **)this;
  }
  if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
    *(_BYTE *)(this + 4) = 1;
  else
    tagDomLock::LockExclusive(*(tagDomLock **)this);
  return this;
}
