/*
 * XREFs of xxxDrainQueueCompletions @ 0x1C00EBCB4
 * Callers:
 *     NtUserGetQueueStatus @ 0x1C00EBB10 (NtUserGetQueueStatus.c)
 *     _GetQueueStatus @ 0x1C014EB7C (_GetQueueStatus.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0092F90 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 */

__int64 __fastcall xxxDrainQueueCompletions(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v2; // ebp
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD **ThreadWin32Thread; // rax
  int v8; // ebx
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v12; // rcx
  __int64 CurrentThreadProcess; // rax
  int v14; // [rsp+28h] [rbp-50h]
  _OWORD v15[3]; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+88h] [rbp+10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v12),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v16 = 0;
  v8 = 0;
  v17 = 0LL;
  memset(v15, 0, 32);
  ZwSetIoCompletionEx(v3[177], v3[181], 0LL, 2LL, 0, 0LL);
  while ( 1 )
  {
    LOBYTE(v14) = 0;
    result = ZwRemoveIoCompletionEx(v3[177], v15, 1LL, &v16, &v17, v14);
    if ( (_DWORD)result )
      break;
    result = DWORD2(v15[0]);
    if ( DWORD2(v15[0]) == 1 )
    {
      v8 = 1;
    }
    else
    {
      if ( DWORD2(v15[0]) || !v3[182] )
        break;
      xxxHandleCoreMessagingQueueCompletion((__int64)v3, (ULONG64 *)v15, v2);
    }
  }
  if ( v8 )
    return ZwAssociateWaitCompletionPacket(v3[180], v3[177], v3[179], 0LL, 1LL, 0, 0LL, 0LL);
  return result;
}
