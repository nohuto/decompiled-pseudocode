/*
 * XREFs of ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x18001E5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x18001E634 (--1CProjectedShadow@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CProjectedShadow *__fastcall CProjectedShadow::`vector deleting destructor'(CProjectedShadow *this, char a2)
{
  unsigned int v4; // r8d

  CProjectedShadow::~CProjectedShadow(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x1B0, v4);
    else
      operator delete(this);
  }
  return this;
}
