/*
 * XREFs of ??_GKeyframeValue@@EEAAPEAXI@Z @ 0x18008A3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

KeyframeValue *__fastcall KeyframeValue::`scalar deleting destructor'(KeyframeValue *this, char a2, unsigned int a3)
{
  *(_QWORD *)this = &KeyframeValue::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x68, a3);
    else
      operator delete(this);
  }
  return this;
}
