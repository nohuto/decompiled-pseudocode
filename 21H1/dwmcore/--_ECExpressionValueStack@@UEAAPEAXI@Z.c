/*
 * XREFs of ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x1801FEED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180097A38 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

void **__fastcall CExpressionValueStack::`vector deleting destructor'(void **this, char a2)
{
  *this = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 3);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0x38);
    else
      operator delete(this);
  }
  return this;
}
