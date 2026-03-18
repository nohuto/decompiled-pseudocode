/*
 * XREFs of ??_GCAffineTransform2DEffect@@UEAAPEAXI@Z @ 0x18016C690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18016B71C (--1CFilterEffect@@MEAA@XZ.c)
 */

CAffineTransform2DEffect *__fastcall CAffineTransform2DEffect::`scalar deleting destructor'(
        CAffineTransform2DEffect *this,
        char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xE0);
    else
      operator delete(this);
  }
  return this;
}
