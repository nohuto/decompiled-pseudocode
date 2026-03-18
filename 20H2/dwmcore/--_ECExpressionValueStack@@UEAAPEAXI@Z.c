/*
 * XREFs of ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x1801FA6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18006DB44 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
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
