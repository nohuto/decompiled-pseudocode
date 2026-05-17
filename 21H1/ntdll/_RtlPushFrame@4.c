/*
 * XREFs of _RtlPushFrame@4 @ 0x4B32E560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_TEB_ACTIVE_FRAME *__stdcall RtlPushFrame(_TEB_ACTIVE_FRAME *a1)
{
  struct _TEB *v1; // edx
  _TEB_ACTIVE_FRAME *result; // eax

  v1 = NtCurrentTeb();
  result = v1->ActiveFrame;
  a1->Previous = result;
  v1->ActiveFrame = a1;
  return result;
}
