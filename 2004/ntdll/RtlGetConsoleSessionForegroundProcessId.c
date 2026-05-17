/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1800FCBA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 */

__int64 RtlGetConsoleSessionForegroundProcessId()
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    return *((_QWORD *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE0338];
}
