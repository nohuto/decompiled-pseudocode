/*
 * XREFs of NtUserSetWindowsHookEx @ 0x1C0045880
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetWindowsHookEx @ 0x1C00459C8 (zzzSetWindowsHookEx.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 CurrentProcess; // rax
  _QWORD *ProcessPeb; // r15
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8

  EnterCrit(0LL, 1LL);
  v10 = 0LL;
  if ( a3 )
  {
    v11 = PtiFromThreadId(a3);
    if ( !v11 )
    {
      UserSetLastError(87LL);
      goto LABEL_9;
    }
  }
  else
  {
    LODWORD(v11) = 0;
  }
  if ( a1 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessPeb = (_QWORD *)PsGetProcessPeb(CurrentProcess);
    ProbeForRead(ProcessPeb, 0x7C8uLL, 1u);
    if ( ProcessPeb[2] == a1 )
    {
      a1 = 0LL;
      a2 = 0LL;
    }
  }
  v14 = (__int64 *)zzzSetWindowsHookEx(a1, a2, v11, a4, a5, a6);
  if ( v14 )
    v10 = *v14;
  EtwTraceAuditApiSetWindowsHookEx(a4, a2, a1, a5, v10);
LABEL_9:
  UserSessionSwitchLeaveCrit(v16, v15, v17);
  return v10;
}
