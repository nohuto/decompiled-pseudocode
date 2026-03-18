/*
 * XREFs of ?GetClipForHitTest@CWindowNode@@UEBAPEAVCGeometry@@XZ @ 0x1800EA390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CGeometry *__fastcall CWindowNode::GetClipForHitTest(CWindowNode *this)
{
  return (struct CGeometry *)*((_QWORD *)this + 97);
}
