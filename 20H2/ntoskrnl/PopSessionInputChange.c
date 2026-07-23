/*
 * XREFs of PopSessionInputChange @ 0x140720ED0
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x140364760 (PopPrintEx.c)
 *     PopSetSessionUserStatus @ 0x140720A50 (PopSetSessionUserStatus.c)
 *     PopDiagTraceSessionStates @ 0x140720C64 (PopDiagTraceSessionStates.c)
 *     PopReleaseAdaptiveLock @ 0x140721000 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1407210F0 (PopAcquireAdaptiveLock.c)
 *     PopConsoleSessionPassiveInput @ 0x14072120C (PopConsoleSessionPassiveInput.c)
 *     PopConsoleSessionActiveInput @ 0x14076EC94 (PopConsoleSessionActiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x14076ED08 (PopRemoteSessionActiveInput.c)
 *     PopGetDisplayTimeout @ 0x14076ED44 (PopGetDisplayTimeout.c)
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
  PopDiagTraceSessionStates(v10, a1, v9);
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
    PopSetSessionUserStatus(a1, 2u);
    a3[1] = PopGetDisplayTimeout(a1);
    *a3 = PopInputTimeout;
  }
  return PopReleaseAdaptiveLock();
}
