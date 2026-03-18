/*
 * XREFs of PopSessionDisconnected @ 0x140775B28
 * Callers:
 *     PopSessionConnectionChange @ 0x140789B4C (PopSessionConnectionChange.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x140720A50 (PopSetSessionUserStatus.c)
 *     PopDiagTraceSessionStates @ 0x140720C64 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x14077DBD8 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED, a1, 0);
  if ( (_DWORD)PopConsoleContext == a1 && a1 != -1 )
  {
    PopConsoleContext = 0LL;
    qword_140C204C0 = 3LL;
    LODWORD(PopConsoleContext) = -1;
    xmmword_140C204B0 = 0LL;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  result = PopSetSessionUserStatus(a1, 2u);
  a2[1] = 0;
  *a2 = 0;
  return result;
}
