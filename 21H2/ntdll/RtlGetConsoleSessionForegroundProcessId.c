/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1800FCF10
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_QWORD *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE0338];
}
