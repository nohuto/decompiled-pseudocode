/*
 * XREFs of NtUserGetWindowProcessHandle @ 0x1C0115290
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C003BB28 (IsShellProcess.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall NtUserGetWindowProcessHandle(__int64 a1, ACCESS_MASK a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  void *v16; // rbx
  char v18; // al
  __int64 v19; // rcx
  HANDLE ThreadProcessId; // rax
  PEPROCESS Process; // [rsp+60h] [rbp+18h] BYREF
  void *Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v9 = *(_QWORD *)(v5 + 16);
    v10 = ThreadWin32Thread;
    v11 = *(_QWORD *)(ThreadWin32Thread + 456);
    if ( *(_QWORD *)(v9 + 456) == v11 )
    {
      if ( a2 == 120 || (unsigned int)IsShellProcess(*(_QWORD *)(ThreadWin32Thread + 424)) && a2 == 4096 )
      {
        v18 = Enforced(v11);
        v7 = *(_QWORD *)(v9 + 424);
        v19 = *(_QWORD *)(v10 + 424);
        if ( v18 )
        {
          if ( !(unsigned __int8)CheckAccess(v19 + 880, v7 + 880) && *(int *)(*(_QWORD *)(v10 + 424) + 12LL) >= 0 )
            goto LABEL_7;
        }
        else if ( *(_DWORD *)(v7 + 780) != *(_DWORD *)(v19 + 780) || *(_DWORD *)(v7 + 784) != *(_DWORD *)(v19 + 784) )
        {
          goto LABEL_7;
        }
        if ( (*(_DWORD *)(v9 + 488) & 0xC) == 0 )
        {
          Process = 0LL;
          ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
          if ( PsLookupProcessByProcessId(ThreadProcessId, &Process) >= 0 )
          {
            ObOpenObjectByPointer(Process, 0, 0LL, a2, (POBJECT_TYPE)PsProcessType, 0, &Handle);
            ObfDereferenceObject(Process);
            goto LABEL_9;
          }
          v15 = 87LL;
          goto LABEL_8;
        }
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v12, v13, v14);
      }
    }
LABEL_7:
    v15 = 5LL;
LABEL_8:
    UserSetLastError(v15, v7, v8);
  }
LABEL_9:
  v16 = Handle;
  UserSessionSwitchLeaveCrit(v4);
  return v16;
}
