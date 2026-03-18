/*
 * XREFs of ?GetClipForHitTest@CVisual@@UEBAPEAVCGeometry@@XZ @ 0x1800DCE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CGeometry *__fastcall CVisual::GetClipForHitTest(CVisual *this)
{
  if ( (*((_BYTE *)this + 102) & 2) != 0 )
    return 0LL;
  else
    return (struct CGeometry *)*((_QWORD *)this + 31);
}
