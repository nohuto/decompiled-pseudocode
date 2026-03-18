/*
 * XREFs of NtUserGetQueueStatus @ 0x1C00E8160
 * Callers:
 *     <none>
 * Callees:
 *     xxxDrainQueueCompletions @ 0x1C00E8304 (xxxDrainQueueCompletions.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  tagDomLock *DomainLockRef; // r15
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned __int16 v18; // r12
  __int16 v19; // bp
  __int64 v20; // rax
  unsigned int v21; // ebx
  int v22; // edi
  unsigned int v23; // eax
  __int64 v24; // rcx
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
  v9 = (tagObjLock *)(v3 + 49);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v3 + 49 == (_QWORD *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
  v16 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v16);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v3 + 49));
  if ( v3[183] && (a1 & 8) != 0 )
    xxxDrainQueueCompletions(1LL);
  v17 = v3[56];
  v18 = a1 & 0x5DFF;
  v19 = *(_WORD *)(v17 + 4);
  *(_WORD *)(v17 + 4) = v19 & ~v18;
  v20 = v3[56];
  v21 = *(unsigned __int16 *)(v20 + 8);
  v22 = *(unsigned __int16 *)(v20 + 6);
  v23 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v23);
  tagObjLock::UnLockExclusive(v9);
  tagDomLock::UnLockShared(DomainLockRef);
  UserSessionSwitchLeaveCrit(v24);
  return (unsigned __int16)(v18 & v19) | ((v18 & (v22 | v21)) << 16);
}
