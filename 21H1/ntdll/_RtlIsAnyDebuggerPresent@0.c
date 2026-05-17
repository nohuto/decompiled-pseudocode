/*
 * XREFs of _RtlIsAnyDebuggerPresent@0 @ 0x4B3668D0
 * Callers:
 *     _RtlQueryProcessLockInformation@4 @ 0x4B337290 (_RtlQueryProcessLockInformation@4.c)
 *     _RtlAssert@16 @ 0x4B34FBC0 (_RtlAssert@16.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __stdcall RtlIsAnyDebuggerPresent()
{
  unsigned __int8 result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
