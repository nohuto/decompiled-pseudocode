/*
 * XREFs of _DrainThreadCoreMessagingCompletions @ 0x1C0092D40
 * Callers:
 *     NtUserCallNoParam @ 0x1C0092CB0 (NtUserCallNoParam.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0092F90 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DrainThreadCoreMessagingCompletions(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  tagObjLock *v8; // rbp
  unsigned int DLT; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  tagDomLock *DomainLockRef; // r15
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rsi
  struct _KTHREAD *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  int v23; // edi
  unsigned int v24; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v28; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v30; // rax
  int v31; // edi
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // [rsp+28h] [rbp-60h]
  _OWORD v35[4]; // [rsp+40h] [rbp-48h] BYREF
  int v36; // [rsp+90h] [rbp+8h] BYREF
  __int64 v37; // [rsp+98h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v28),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v8 = (tagObjLock *)(v3 + 384);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v3 + 384 == gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  v13 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v13);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v3 + 384));
  if ( *(_QWORD *)(v3 + 1456) )
  {
    v17 = 0LL;
    v18 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v15)
      || (v30 = PsGetCurrentProcess(v20, v19, v21),
          v31 = PsGetProcessSessionIdEx(v30),
          v33 = PsGetCurrentThreadProcess(v32),
          v31 == (unsigned int)PsGetProcessSessionIdEx(v33)) )
    {
      v22 = (_QWORD *)PsGetThreadWin32Thread(v18);
      if ( v22 )
        v17 = (_QWORD *)*v22;
    }
    v36 = 0;
    memset(v35, 0, 32);
    v37 = 0LL;
    v23 = 0;
    ZwSetIoCompletionEx(v17[177], v17[181], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v34) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v17[177], v35, 1LL, &v36, &v37, v34) )
        break;
      if ( DWORD2(v35[0]) == 1 )
      {
        v23 = 1;
      }
      else
      {
        if ( DWORD2(v35[0]) || !v17[182] )
          break;
        xxxHandleCoreMessagingQueueCompletion(v17, v35, 0LL);
      }
    }
    if ( v23 )
      ZwAssociateWaitCompletionPacket(v17[180], v17[177], v17[179], 0LL, 1LL, 0, 0LL, 0LL);
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL, v14, v16);
  }
  v24 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v24);
  tagObjLock::UnLockExclusive(v8);
  tagDomLock::UnLockShared(DomainLockRef);
  return v2;
}
