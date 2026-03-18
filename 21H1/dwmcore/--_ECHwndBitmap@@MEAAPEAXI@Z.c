/*
 * XREFs of ??_ECHwndBitmap@@MEAAPEAXI@Z @ 0x1801C8070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x1801C7FA8 (--1CHwndBitmap@@MEAA@XZ.c)
 */

CHwndBitmap *__fastcall CHwndBitmap::`vector deleting destructor'(CHwndBitmap *this, char a2)
{
  CHwndBitmap::~CHwndBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x98);
    else
      operator delete(this);
  }
  return this;
}
