/*
 * XREFs of NtUserGetWindowProcessHandle @ 0x1C0113F80
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C00288E8 (IsShellProcess.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall NtUserGetWindowProcessHandle(__int64 a1, ACCESS_MASK a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rbx
  char v18; // al
  __int64 v19; // rcx
  HANDLE ThreadProcessId; // rax
  PEPROCESS Process; // [rsp+60h] [rbp+18h] BYREF
  void *Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v11 = *(_QWORD *)(v6 + 16);
    v12 = ThreadWin32Thread;
    v13 = *(_QWORD *)(ThreadWin32Thread + 448);
    if ( *(_QWORD *)(v11 + 448) == v13 )
    {
      if ( a2 == 120 || (unsigned int)IsShellProcess(*(_QWORD *)(ThreadWin32Thread + 416)) && a2 == 4096 )
      {
        v18 = Enforced(v13);
        v9 = *(_QWORD *)(v11 + 416);
        v19 = *(_QWORD *)(v12 + 416);
        if ( v18 )
        {
          if ( !(unsigned __int8)CheckAccess(v19 + 880, v9 + 880) && *(int *)(*(_QWORD *)(v12 + 416) + 12LL) >= 0 )
            goto LABEL_7;
        }
        else if ( *(_DWORD *)(v9 + 780) != *(_DWORD *)(v19 + 780) || *(_DWORD *)(v9 + 784) != *(_DWORD *)(v19 + 784) )
        {
          goto LABEL_7;
        }
        if ( (*(_DWORD *)(v11 + 480) & 0xC) == 0 )
        {
          Process = 0LL;
          ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v11);
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
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v14);
      }
    }
LABEL_7:
    v15 = 5LL;
LABEL_8:
    UserSetLastError(v15, v9, v10);
  }
LABEL_9:
  v16 = Handle;
  UserSessionSwitchLeaveCrit(v5, v4, v7);
  return v16;
}
