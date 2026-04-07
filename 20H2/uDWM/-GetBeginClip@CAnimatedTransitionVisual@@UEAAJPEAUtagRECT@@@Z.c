/*
 * XREFs of ?GetBeginClip@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x1800430C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetBeginClip(struct tagRECT *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[55];
  return result;
}
