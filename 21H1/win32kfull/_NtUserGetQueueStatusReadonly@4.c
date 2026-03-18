/*
 * XREFs of _NtUserGetQueueStatusReadonly@4 @ 0x6EA4E
 * Callers:
 *     <none>
 * Callees:
 *     _xxxDrainQueueCompletions@4 @ 0x6EB04 (_xxxDrainQueueCompletions@4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserGetQueueStatusReadonly(unsigned __int16 a1)
{
  _DWORD *v1; // esi
  int DLT; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  tagDomLock *DomainLockRef; // [esp+Ch] [ebp-4h]

  v1 = (_DWORD *)EnterSharedCrit(0, 1);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v1 + 54 == (_DWORD *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v3 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v3);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v1 + 54));
  if ( v1[209] && (a1 & 8) != 0 )
    xxxDrainQueueCompletions(1);
  v4 = (a1 | (a1 << 16)) & *(_DWORD *)(v1[61] + 4);
  v5 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v5);
  tagObjLock::UnLockExclusive();
  tagDomLock::UnLockShared();
  UserSessionSwitchLeaveCrit();
  return v4;
}
