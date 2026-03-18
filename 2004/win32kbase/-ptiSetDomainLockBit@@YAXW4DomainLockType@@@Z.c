/*
 * XREFs of ?ptiSetDomainLockBit@@YAXW4DomainLockType@@@Z @ 0x1C001EE40
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall ptiSetDomainLockBit(int a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // al
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v5, v4),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        LODWORD(ThreadWin32Thread) = PsGetProcessSessionIdEx(CurrentThreadProcess),
        ProcessSessionId == (_DWORD)ThreadWin32Thread) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  switch ( a1 )
  {
    case 1:
      v11 = *(_BYTE *)(v3 + 1472);
      if ( (v11 & 1) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
        v11 = *(_BYTE *)(v3 + 1472);
      }
      LOBYTE(ThreadWin32Thread) = v11 | 1;
      break;
    case 5:
      v15 = *(_BYTE *)(v3 + 1472);
      if ( (v15 & 2) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
        v15 = *(_BYTE *)(v3 + 1472);
      }
      LOBYTE(ThreadWin32Thread) = v15 | 2;
      break;
    case 8:
      v16 = *(_BYTE *)(v3 + 1472);
      if ( (v16 & 4) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
        v16 = *(_BYTE *)(v3 + 1472);
      }
      LOBYTE(ThreadWin32Thread) = v16 | 4;
      break;
    case 9:
      v17 = *(_BYTE *)(v3 + 1472);
      if ( (v17 & 8) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
        v17 = *(_BYTE *)(v3 + 1472);
      }
      LOBYTE(ThreadWin32Thread) = v17 | 8;
      break;
    case 11:
      v18 = *(_BYTE *)(v3 + 1472);
      if ( (v18 & 0x20) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
        v18 = *(_BYTE *)(v3 + 1472);
      }
      LOBYTE(ThreadWin32Thread) = v18 | 0x20;
      break;
    case 10:
      v19 = *(_BYTE *)(v3 + 1472);
      if ( (v19 & 0x10) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
        v19 = *(_BYTE *)(v3 + 1472);
      }
      LOBYTE(ThreadWin32Thread) = v19 | 0x10;
      break;
    default:
      return (char)ThreadWin32Thread;
  }
  *(_BYTE *)(v3 + 1472) = (_BYTE)ThreadWin32Thread;
  return (char)ThreadWin32Thread;
}
