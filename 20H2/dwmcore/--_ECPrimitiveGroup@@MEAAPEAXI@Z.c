/*
 * XREFs of ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x1800D3EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18006EB24 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CPrimitiveGroup *__fastcall CPrimitiveGroup::`vector deleting destructor'(CPrimitiveGroup *this, char a2)
{
  unsigned int v4; // r8d

  CPrimitiveGroup::~CPrimitiveGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x2E0, v4);
    else
      operator delete(this);
  }
  return this;
}
