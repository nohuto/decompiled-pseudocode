/*
 * XREFs of _RtlGetCurrentPeb@0 @ 0x4B362FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PPEB RtlGetCurrentPeb(void)
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}
