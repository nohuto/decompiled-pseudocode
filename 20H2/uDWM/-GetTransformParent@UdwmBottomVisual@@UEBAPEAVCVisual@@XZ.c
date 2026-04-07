/*
 * XREFs of ?GetTransformParent@UdwmBottomVisual@@UEBAPEAVCVisual@@XZ @ 0x180043690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall UdwmBottomVisual::GetTransformParent(UdwmBottomVisual *this)
{
  return (struct CVisual *)*((_QWORD *)this + 30);
}
