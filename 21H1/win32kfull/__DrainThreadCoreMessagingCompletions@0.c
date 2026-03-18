/*
 * XREFs of __DrainThreadCoreMessagingCompletions@0 @ 0x6E99A
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _xxxDrainQueueCompletions@4 @ 0x6EB04 (_xxxDrainQueueCompletions@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

BOOL __stdcall _DrainThreadCoreMessagingCompletions()
{
  PKTHREAD CurrentThread; // edi
  int v1; // esi
  int *ThreadWin32Thread; // eax
  int DLT; // eax
  int v4; // eax
  int v5; // esi
  int v6; // eax
  tagDomLock *DomainLockRef; // [esp+Ch] [ebp-4h]

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v1 + 216 == gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v4 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v4);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v1 + 216));
  v5 = *(_DWORD *)(v1 + 836);
  if ( v5 )
    xxxDrainQueueCompletions(0);
  else
    UserSetLastError(5);
  v6 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v6);
  tagObjLock::UnLockExclusive();
  tagDomLock::UnLockShared();
  return v5 != 0;
}
