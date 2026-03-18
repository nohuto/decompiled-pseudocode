/*
 * XREFs of ??_GCCompositionTextLine@@MEAAPEAXI@Z @ 0x180171310
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CCompositionTextLine@@MEAA@XZ @ 0x1801C0BA0 (--1CCompositionTextLine@@MEAA@XZ.c)
 */

CCompositionTextLine *__fastcall CCompositionTextLine::`scalar deleting destructor'(
        CCompositionTextLine *this,
        char a2)
{
  CCompositionTextLine::~CCompositionTextLine(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x98);
    else
      operator delete(this);
  }
  return this;
}
