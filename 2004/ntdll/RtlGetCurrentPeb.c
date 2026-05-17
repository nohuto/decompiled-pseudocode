/*
 * XREFs of RtlGetCurrentPeb @ 0x1800FCBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_PEB *RtlGetCurrentPeb()
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}
