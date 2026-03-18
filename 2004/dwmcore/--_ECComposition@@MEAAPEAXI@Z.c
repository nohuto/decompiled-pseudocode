/*
 * XREFs of ??_ECComposition@@MEAAPEAXI@Z @ 0x180156C30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180156718 (--1CComposition@@MEAA@XZ.c)
 */

CComposition *__fastcall CComposition::`vector deleting destructor'(CComposition *this, int a2)
{
  char v2; // di

  v2 = a2;
  CComposition::~CComposition(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x4B0);
    else
      operator delete(this);
  }
  return this;
}
