/*
 * XREFs of ??0?$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C01588E8
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6CF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>(
        __int64 a1)
{
  unsigned int DLT; // eax
  PERESOURCE *DomainLockRef; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (PERESOURCE *)GetDomainLockRef(DLT);
  *(_QWORD *)a1 = DomainLockRef;
  *(_BYTE *)(a1 + 8) = 0;
  if ( DomainLockRef == (PERESOURCE *)gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
    DomainLockRef = *(PERESOURCE **)a1;
  }
  if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
    *(_BYTE *)(a1 + 8) = 1;
  else
    tagDomLock::LockExclusive(*(tagDomLock **)a1);
  return a1;
}
