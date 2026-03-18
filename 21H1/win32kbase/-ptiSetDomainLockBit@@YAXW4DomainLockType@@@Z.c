/*
 * XREFs of ?ptiSetDomainLockBit@@YAXW4DomainLockType@@@Z @ 0x1C00091B0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall ptiSetDomainLockBit(int a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *ThreadWin32Thread; // rax
  char v7; // al
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al

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
      v7 = *(_BYTE *)(v3 + 1464);
      if ( (v7 & 1) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v7 = *(_BYTE *)(v3 + 1464);
      }
      LOBYTE(ThreadWin32Thread) = v7 | 1;
      break;
    case 5:
      v11 = *(_BYTE *)(v3 + 1464);
      if ( (v11 & 2) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v11 = *(_BYTE *)(v3 + 1464);
      }
      LOBYTE(ThreadWin32Thread) = v11 | 2;
      break;
    case 8:
      v12 = *(_BYTE *)(v3 + 1464);
      if ( (v12 & 4) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v12 = *(_BYTE *)(v3 + 1464);
      }
      LOBYTE(ThreadWin32Thread) = v12 | 4;
      break;
    case 9:
      v13 = *(_BYTE *)(v3 + 1464);
      if ( (v13 & 8) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v13 = *(_BYTE *)(v3 + 1464);
      }
      LOBYTE(ThreadWin32Thread) = v13 | 8;
      break;
    case 11:
      v14 = *(_BYTE *)(v3 + 1464);
      if ( (v14 & 0x20) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v14 = *(_BYTE *)(v3 + 1464);
      }
      LOBYTE(ThreadWin32Thread) = v14 | 0x20;
      break;
    case 10:
      v15 = *(_BYTE *)(v3 + 1464);
      if ( (v15 & 0x10) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v15 = *(_BYTE *)(v3 + 1464);
      }
      LOBYTE(ThreadWin32Thread) = v15 | 0x10;
      break;
    default:
      return (char)ThreadWin32Thread;
  }
  *(_BYTE *)(v3 + 1464) = (_BYTE)ThreadWin32Thread;
  return (char)ThreadWin32Thread;
}
