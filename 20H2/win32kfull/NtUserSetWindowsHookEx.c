/*
 * XREFs of NtUserSetWindowsHookEx @ 0x1C0074740
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetWindowsHookEx @ 0x1C0074888 (zzzSetWindowsHookEx.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 CurrentProcess; // rax
  _QWORD *ProcessPeb; // r15
  __int64 *v17; // rax
  __int64 v18; // rcx

  EnterCrit(0LL, 1LL);
  v13 = 0LL;
  if ( a3 )
  {
    v14 = PtiFromThreadId(a3);
    if ( !v14 )
    {
      UserSetLastError(87LL);
      goto LABEL_9;
    }
  }
  else
  {
    LODWORD(v14) = 0;
  }
  if ( a1 )
  {
    CurrentProcess = PsGetCurrentProcess(v11, v10, v12);
    ProcessPeb = (_QWORD *)PsGetProcessPeb(CurrentProcess);
    ProbeForRead(ProcessPeb, 0x7C8uLL, 1u);
    if ( ProcessPeb[2] == a1 )
    {
      a1 = 0LL;
      a2 = 0LL;
    }
  }
  v17 = (__int64 *)zzzSetWindowsHookEx(a1, a2, v14, a4, a5, a6);
  if ( v17 )
    v13 = *v17;
  EtwTraceAuditApiSetWindowsHookEx(a4, a2, a1, a5, v13);
LABEL_9:
  UserSessionSwitchLeaveCrit(v18);
  return v13;
}
