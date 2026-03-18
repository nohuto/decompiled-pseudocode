/*
 * XREFs of ??_ECScalar@@MEAAPEAXI@Z @ 0x18016F590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x1801E9A5C (--1CScalar@@MEAA@XZ.c)
 */

CScalar *__fastcall CScalar::`vector deleting destructor'(CScalar *this, char a2)
{
  CScalar::~CScalar(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x70);
    else
      operator delete(this);
  }
  return this;
}
