/*
 * XREFs of _RtlIsCurrentThreadAttachExempt@0 @ 0x4B3061A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall RtlIsCurrentThreadAttachExempt()
{
  return (NtCurrentTeb()->SameTebFlags & 8) != 0 && (NtCurrentTeb()->SameTebFlags & 0x20) == 0;
}
