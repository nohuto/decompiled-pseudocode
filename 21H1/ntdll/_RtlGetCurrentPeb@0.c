/*
 * XREFs of _RtlGetCurrentPeb@0 @ 0x4B362FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_PEB *__stdcall RtlGetCurrentPeb()
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}
