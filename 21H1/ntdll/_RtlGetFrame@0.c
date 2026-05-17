/*
 * XREFs of _RtlGetFrame@0 @ 0x4B32E510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_TEB_ACTIVE_FRAME *__stdcall RtlGetFrame()
{
  return NtCurrentTeb()->ActiveFrame;
}
