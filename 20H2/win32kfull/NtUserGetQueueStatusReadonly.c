/*
 * XREFs of NtUserGetQueueStatusReadonly @ 0x1C00E9080
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004EC60 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetQueueStatusReadonly(unsigned __int16 a1)
{
  __int64 v2; // rsi
  tagObjLock *v3; // rbp
  unsigned int DLT; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  tagDomLock *DomainLockRef; // r12
  unsigned int v10; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD **ThreadWin32Thread; // rax
  int v18; // edi
  unsigned int v19; // ebx
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v25; // rcx
  __int64 CurrentThreadProcess; // rax
  int v27; // [rsp+28h] [rbp-70h]
  _OWORD v28[2]; // [rsp+40h] [rbp-58h] BYREF
  int v29; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+10h] BYREF

  v2 = EnterSharedCrit(0LL, 1LL);
  v3 = (tagObjLock *)(v2 + 392);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v2 + 392 == gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7, v8);
  v10 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v10);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive(v3);
  if ( *(_QWORD *)(v2 + 1464) && (a1 & 8) != 0 )
  {
    v12 = 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v11)
      || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v25),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    v29 = 0;
    memset(v28, 0, sizeof(v28));
    v30 = 0LL;
    v18 = 0;
    ZwSetIoCompletionEx(v12[178], v12[182], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v27) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v12[178], v28, 1LL, &v29, &v30, v27) )
        break;
      if ( DWORD2(v28[0]) == 1 )
      {
        v18 = 1;
      }
      else
      {
        if ( DWORD2(v28[0]) || !v12[183] )
          break;
        xxxHandleCoreMessagingQueueCompletion((__int64)v12, (ULONG64 *)v28, 1);
      }
    }
    if ( v18 )
      ZwAssociateWaitCompletionPacket(v12[181], v12[178], v12[180], 0LL, 1LL, 0, 0LL, 0LL);
  }
  v19 = (a1 | (a1 << 16)) & (*(unsigned __int16 *)(*(_QWORD *)(v2 + 448) + 4LL) | (*(unsigned __int16 *)(*(_QWORD *)(v2 + 448) + 6LL) << 16));
  v20 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v20);
  tagObjLock::UnLockExclusive(v3);
  tagDomLock::UnLockShared(DomainLockRef);
  UserSessionSwitchLeaveCrit(v21);
  return v19;
}
