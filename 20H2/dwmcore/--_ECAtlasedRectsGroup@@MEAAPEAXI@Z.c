/*
 * XREFs of ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x180043460
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x1800434A4 (--1CAtlasedRectsGroup@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CAtlasedRectsGroup *__fastcall CAtlasedRectsGroup::`vector deleting destructor'(CAtlasedRectsGroup *this, char a2)
{
  unsigned int v4; // r8d

  CAtlasedRectsGroup::~CAtlasedRectsGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x98, v4);
    else
      operator delete(this);
  }
  return this;
}
