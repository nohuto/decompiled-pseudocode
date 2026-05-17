/*
 * XREFs of _RtlPopFrame@4 @ 0x4B32E530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_TEB_ACTIVE_FRAME *__stdcall RtlPopFrame(int a1)
{
  _TEB_ACTIVE_FRAME *result; // eax

  result = *(_TEB_ACTIVE_FRAME **)(a1 + 4);
  NtCurrentTeb()->ActiveFrame = result;
  return result;
}
