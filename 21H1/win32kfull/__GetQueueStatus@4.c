/*
 * XREFs of __GetQueueStatus@4 @ 0x6E7E0
 * Callers:
 *     _NtUserGetThreadState@4 @ 0x98C72 (_NtUserGetThreadState@4.c)
 *     _NtUserGetQueueStatus@4 @ 0xF2B8A (_NtUserGetQueueStatus@4.c)
 * Callees:
 *     _xxxDrainQueueCompletions@4 @ 0x6EB04 (_xxxDrainQueueCompletions@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall _GetQueueStatus(__int16 a1)
{
  PKTHREAD CurrentThread; // edi
  _DWORD *v2; // esi
  _DWORD *ThreadWin32Thread; // eax
  int DLT; // eax
  int v5; // eax
  __int16 v6; // dx
  int v7; // eax
  unsigned __int16 v8; // dx
  int v9; // ebx
  int v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // eax
  tagDomLock *DomainLockRef; // [esp+10h] [ebp-8h]
  __int16 v17; // [esp+14h] [ebp-4h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (_DWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = (_DWORD *)*ThreadWin32Thread;
  }
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v2 + 54 == (_DWORD *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v5 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v5);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v2 + 54));
  v6 = a1;
  if ( v2[209] && (a1 & 8) != 0 )
  {
    xxxDrainQueueCompletions(1);
    v6 = a1;
  }
  v7 = v2[61];
  v8 = v6 & 0x5DFF;
  v9 = v8;
  v17 = *(_WORD *)(v7 + 4);
  *(_WORD *)(v7 + 4) = v17 & ~v8;
  v10 = v2[61];
  v11 = *(unsigned __int16 *)(v10 + 8);
  v12 = *(unsigned __int16 *)(v10 + 6);
  v13 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v13);
  tagObjLock::UnLockExclusive();
  tagDomLock::UnLockShared();
  return (unsigned __int16)(v9 & v17) | ((v9 & (v12 | v11)) << 16);
}
