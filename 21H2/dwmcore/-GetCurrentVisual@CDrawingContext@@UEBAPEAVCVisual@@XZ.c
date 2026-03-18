/*
 * XREFs of ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800C9CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CDrawingContext::GetCurrentVisual(CDrawingContext *this)
{
  if ( !*((_BYTE *)this + 7896) )
    return 0LL;
  if ( *((_BYTE *)this + 7897) )
    return (struct CVisual *)*((_QWORD *)this + 394);
  return (struct CVisual *)*((_QWORD *)this + 989);
}
