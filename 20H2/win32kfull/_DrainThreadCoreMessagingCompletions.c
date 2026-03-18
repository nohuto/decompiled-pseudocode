/*
 * XREFs of _DrainThreadCoreMessagingCompletions @ 0x1C004EA10
 * Callers:
 *     NtUserCallNoParam @ 0x1C004E980 (NtUserCallNoParam.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004EC60 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  tagDomLock *DomainLockRef; // r15
  unsigned int v15; // eax
  __int64 v16; // rcx
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
  v8 = (tagObjLock *)(v3 + 392);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v3 + 392 == gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  v15 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v15);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v3 + 392));
  if ( *(_QWORD *)(v3 + 1464) )
  {
    v17 = 0LL;
    v18 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v16)
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
    ZwSetIoCompletionEx(v17[178], v17[182], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v34) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v17[178], v35, 1LL, &v36, &v37, v34) )
        break;
      if ( DWORD2(v35[0]) == 1 )
      {
        v23 = 1;
      }
      else
      {
        if ( DWORD2(v35[0]) || !v17[183] )
          break;
        xxxHandleCoreMessagingQueueCompletion(v17, v35, 0LL);
      }
    }
    if ( v23 )
      ZwAssociateWaitCompletionPacket(v17[181], v17[178], v17[180], 0LL, 1LL, 0, 0LL, 0LL);
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  v24 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v24);
  tagObjLock::UnLockExclusive(v8);
  tagDomLock::UnLockShared(DomainLockRef);
  return v2;
}
