/*
 * XREFs of NtUserGetQueueStatus @ 0x1C00EBB10
 * Callers:
 *     <none>
 * Callees:
 *     xxxDrainQueueCompletions @ 0x1C00EBCB4 (xxxDrainQueueCompletions.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetQueueStatus(__int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *ThreadWin32Thread; // rax
  tagObjLock *v9; // r14
  unsigned int DLT; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  tagDomLock *DomainLockRef; // r15
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned __int16 v16; // r12
  __int16 v17; // bp
  __int64 v18; // rax
  unsigned int v19; // ebx
  int v20; // edi
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v28; // rcx
  __int64 CurrentThreadProcess; // rax

  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v4)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v28),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = (_QWORD *)*ThreadWin32Thread;
  }
  v9 = (tagObjLock *)(v3 + 48);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v3 + 48 == (_QWORD *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
  v14 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v14);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v3 + 48));
  if ( v3[182] && (a1 & 8) != 0 )
    xxxDrainQueueCompletions(1LL);
  v15 = v3[55];
  v16 = a1 & 0x5DFF;
  v17 = *(_WORD *)(v15 + 4);
  *(_WORD *)(v15 + 4) = v17 & ~v16;
  v18 = v3[55];
  v19 = *(unsigned __int16 *)(v18 + 8);
  v20 = *(unsigned __int16 *)(v18 + 6);
  v21 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v21);
  tagObjLock::UnLockExclusive(v9);
  tagDomLock::UnLockShared(DomainLockRef);
  UserSessionSwitchLeaveCrit(v23, v22, v24);
  return (unsigned __int16)(v16 & v17) | ((v16 & (v20 | v19)) << 16);
}
