/*
 * XREFs of ?GetClipForHitTest@CVisual@@UEBAPEAVCGeometry@@XZ @ 0x1800E6600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CGeometry *__fastcall CVisual::GetClipForHitTest(CVisual *this)
{
  return (struct CGeometry *)*((_QWORD *)this + 30);
}
