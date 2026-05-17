/*
 * XREFs of RtlGetCurrentPeb @ 0x1800FD0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_PEB *RtlGetCurrentPeb()
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}
