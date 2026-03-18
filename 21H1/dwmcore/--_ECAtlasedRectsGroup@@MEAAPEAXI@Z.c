/*
 * XREFs of ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x1800922B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x180092450 (--1CAtlasedRectsGroup@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
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
