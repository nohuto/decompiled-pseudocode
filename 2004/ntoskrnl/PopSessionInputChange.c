/*
 * XREFs of PopSessionInputChange @ 0x140711DE0
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x1403612F8 (PopPrintEx.c)
 *     PopConsoleSessionPassiveInput @ 0x140711D64 (PopConsoleSessionPassiveInput.c)
 *     PopReleaseAdaptiveLock @ 0x140711F10 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140712000 (PopAcquireAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x1407120CC (PopDiagTraceSessionStates.c)
 *     PopSetSessionUserStatus @ 0x140712330 (PopSetSessionUserStatus.c)
 *     PopConsoleSessionActiveInput @ 0x140760684 (PopConsoleSessionActiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x1407606F8 (PopRemoteSessionActiveInput.c)
 *     PopGetDisplayTimeout @ 0x140760734 (PopGetDisplayTimeout.c)
 */

__int64 __fastcall PopSessionInputChange(unsigned int a1, char *a2, _DWORD *a3)
{
  char v3; // r14
  const char *v4; // rax
  unsigned int v5; // ebp
  const char *v8; // r8
  bool v9; // di
  const EVENT_DESCRIPTOR *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx

  v3 = *a2;
  v4 = "Active";
  v5 = *((_DWORD *)a2 + 1);
  if ( !*a2 )
    v4 = "Passive";
  if ( (_DWORD)PopConsoleContext != a1 || (v8 = "Console", a1 == -1) )
    v8 = "Remote";
  PopPrintEx(3u, (__int64)"PopAdaptive:>>>>> %s session %u input is %s\n", v8, a1, v4);
  v9 = (_DWORD)PopConsoleContext == a1 && a1 != -1;
  v10 = (const EVENT_DESCRIPTOR *)POP_ETW_ADPM_ACTIVE_INPUT;
  if ( !v3 )
    v10 = &POP_ETW_ADPM_PASSIVE_INPUT;
  PopDiagTraceSessionStates(v10);
  LOBYTE(v11) = 1;
  PopAcquireAdaptiveLock(v11);
  if ( v3 )
  {
    if ( v9 )
      PopConsoleSessionActiveInput(a1, v5, a3);
    else
      PopRemoteSessionActiveInput(a1, v12, a3);
  }
  else if ( v9 )
  {
    PopConsoleSessionPassiveInput(a1, v5, a3);
  }
  else
  {
    PopSetSessionUserStatus(a1, 2LL);
    a3[1] = PopGetDisplayTimeout(a1);
    *a3 = PopInputTimeout;
  }
  return PopReleaseAdaptiveLock();
}
