/*
 * XREFs of ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x1800CC650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180095110 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
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
