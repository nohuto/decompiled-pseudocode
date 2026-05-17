/*
 * XREFs of _RtlGetActiveConsoleId@0 @ 0x4B2EC6E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 */

int __stdcall RtlGetActiveConsoleId()
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_DWORD *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE02D8];
}
