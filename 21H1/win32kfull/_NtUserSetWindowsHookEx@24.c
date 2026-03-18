/*
 * XREFs of _NtUserSetWindowsHookEx@24 @ 0x131D4
 * Callers:
 *     <none>
 * Callees:
 *     _zzzSetWindowsHookEx@24 @ 0x13290 (_zzzSetWindowsHookEx@24.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserSetWindowsHookEx(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // ebx
  int v8; // edi
  int *v9; // eax
  int CurrentProcess; // eax
  _DWORD *ProcessPeb; // [esp+3Ch] [ebp+10h]

  v6 = 0;
  EnterCrit(0, 1);
  if ( a3 )
  {
    v7 = PtiFromThreadId(a3);
    if ( !v7 )
    {
      UserSetLastError(87);
      goto LABEL_7;
    }
  }
  else
  {
    v7 = 0;
  }
  v8 = a1;
  if ( a1 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessPeb = (_DWORD *)PsGetProcessPeb(CurrentProcess);
    ProbeForRead(ProcessPeb, 0x480u, 1u);
    if ( ProcessPeb[2] == a1 )
    {
      v8 = 0;
      a2 = 0;
    }
  }
  v9 = (int *)zzzSetWindowsHookEx(v7, a4, a5, a6);
  if ( v9 )
    v6 = *v9;
  EtwTraceAuditApiSetWindowsHookEx(a4, a2, v8, a5, v6);
LABEL_7:
  UserSessionSwitchLeaveCrit();
  return v6;
}
