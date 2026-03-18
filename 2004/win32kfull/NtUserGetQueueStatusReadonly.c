/*
 * XREFs of NtUserGetQueueStatusReadonly @ 0x1C00ECBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0092F90 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetQueueStatusReadonly(unsigned __int16 a1)
{
  __int64 v2; // rsi
  tagObjLock *v3; // rbp
  unsigned int DLT; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  tagDomLock *DomainLockRef; // r12
  unsigned int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD **ThreadWin32Thread; // rax
  int v16; // edi
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v25; // rcx
  __int64 CurrentThreadProcess; // rax
  int v27; // [rsp+28h] [rbp-70h]
  _OWORD v28[2]; // [rsp+40h] [rbp-58h] BYREF
  int v29; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+10h] BYREF

  v2 = EnterSharedCrit(0LL, 1LL);
  v3 = (tagObjLock *)(v2 + 384);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v2 + 384 == gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  v8 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v8);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive(v3);
  if ( *(_QWORD *)(v2 + 1456) && (a1 & 8) != 0 )
  {
    v10 = 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v9)
      || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v25),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v10 = *ThreadWin32Thread;
    }
    v29 = 0;
    memset(v28, 0, sizeof(v28));
    v30 = 0LL;
    v16 = 0;
    ZwSetIoCompletionEx(v10[177], v10[181], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v27) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v10[177], v28, 1LL, &v29, &v30, v27) )
        break;
      if ( DWORD2(v28[0]) == 1 )
      {
        v16 = 1;
      }
      else
      {
        if ( DWORD2(v28[0]) || !v10[182] )
          break;
        xxxHandleCoreMessagingQueueCompletion((__int64)v10, (ULONG64 *)v28, 1);
      }
    }
    if ( v16 )
      ZwAssociateWaitCompletionPacket(v10[180], v10[177], v10[179], 0LL, 1LL, 0, 0LL, 0LL);
  }
  v17 = (a1 | (a1 << 16)) & (*(unsigned __int16 *)(*(_QWORD *)(v2 + 440) + 4LL) | (*(unsigned __int16 *)(*(_QWORD *)(v2 + 440) + 6LL) << 16));
  v18 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v18);
  tagObjLock::UnLockExclusive(v3);
  tagDomLock::UnLockShared(DomainLockRef);
  UserSessionSwitchLeaveCrit(v20, v19, v21);
  return v17;
}
