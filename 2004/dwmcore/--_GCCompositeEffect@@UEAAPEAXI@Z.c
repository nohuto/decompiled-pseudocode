/*
 * XREFs of ??_GCCompositeEffect@@UEAAPEAXI@Z @ 0x18016E550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18016D4F8 (--1CFilterEffect@@MEAA@XZ.c)
 */

CCompositeEffect *__fastcall CCompositeEffect::`scalar deleting destructor'(CCompositeEffect *this, char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xA0);
    else
      operator delete(this);
  }
  return this;
}
