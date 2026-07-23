/*
 * XREFs of _RtlPushFrame@4 @ 0x4B32E560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlPushFrame(PTEB_ACTIVE_FRAME Frame)
{
  struct _TEB *v1; // edx

  v1 = NtCurrentTeb();
  Frame->Previous = v1->ActiveFrame;
  v1->ActiveFrame = Frame;
}
