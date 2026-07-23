/*
 * XREFs of PopUpdateTimeouts @ 0x14071217C
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405CF974 (PopSessionWinlogonNotification.c)
 *     PopConsoleSessionPassiveInput @ 0x140711D64 (PopConsoleSessionPassiveInput.c)
 *     PopConsoleSessionActiveInput @ 0x140760684 (PopConsoleSessionActiveInput.c)
 *     PopActiveLockScreenPowerRequest @ 0x1408F1B40 (PopActiveLockScreenPowerRequest.c)
 * Callees:
 *     PopPrintEx @ 0x1403612F8 (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x140712274 (PopDiagTraceInputTimeout.c)
 *     PopDiagTraceDisplayTimeout @ 0x14071257C (PopDiagTraceDisplayTimeout.c)
 */

__int64 __fastcall PopUpdateTimeouts(int a1, unsigned int *a2, unsigned int *a3)
{
  int v6; // r10d
  const char *v7; // r8
  const char *v8; // rcx
  const char *v9; // r9
  const char *v10; // rdx
  __int64 result; // rax

  PopDiagTraceDisplayTimeout(*a2, *((unsigned __int8 *)a2 + 5), *((unsigned __int8 *)a2 + 4));
  if ( a3 )
    v6 = *a3;
  else
    v6 = 0;
  v7 = "Zeroed";
  if ( a3 )
  {
    v8 = "Zeroed";
    if ( !*((_BYTE *)a3 + 5) )
      v8 = (const char *)qword_1407CAD30;
  }
  else
  {
    v8 = " NULL ";
  }
  v9 = "Computed";
  if ( a3 )
  {
    v10 = "Computed";
    if ( !*((_BYTE *)a3 + 4) )
      v10 = (const char *)qword_1407CAD30;
  }
  else
  {
    v10 = "NULL";
  }
  if ( !*((_BYTE *)a2 + 5) )
    v7 = (const char *)qword_1407CAD30;
  if ( !*((_BYTE *)a2 + 4) )
    v9 = (const char *)qword_1407CAD30;
  PopPrintEx(
    3u,
    (__int64)"PopAdaptive: Console session %u timeouts: %s%s Display:%u,: %s%sInput:%u\n",
    a1,
    v9,
    v7,
    *a2,
    v10,
    v8,
    v6);
  result = *(_QWORD *)a2;
  *(_QWORD *)((char *)&PopConsoleContext + 12) = *(_QWORD *)a2;
  if ( a3 )
  {
    *(_QWORD *)((char *)&PopConsoleContext + 4) = *(_QWORD *)a3;
    result = PopDiagTraceInputTimeout(*a3, *((unsigned __int8 *)a3 + 5), *((unsigned __int8 *)a3 + 4));
  }
  if ( *((_BYTE *)a2 + 4) )
  {
    result = MEMORY[0xFFFFF78000000320];
    HIDWORD(xmmword_140C20350) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return result;
}
