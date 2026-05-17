/*
 * XREFs of RtlGetFrame @ 0x1800CDA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_TEB_ACTIVE_FRAME *RtlGetFrame()
{
  return NtCurrentTeb()->ActiveFrame;
}
