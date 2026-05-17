/*
 * XREFs of _RtlGetLastWin32Error@0 @ 0x4B3630B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall RtlGetLastWin32Error()
{
  return NtCurrentTeb()->LastErrorValue;
}
