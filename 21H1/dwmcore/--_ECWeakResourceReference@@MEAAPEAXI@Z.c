/*
 * XREFs of ??_ECWeakResourceReference@@MEAAPEAXI@Z @ 0x1800974E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CWeakResourceReference@@MEAA@XZ @ 0x180097524 (--1CWeakResourceReference@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CWeakResourceReference *__fastcall CWeakResourceReference::`vector deleting destructor'(
        CWeakResourceReference *this,
        char a2)
{
  unsigned int v4; // r8d

  CWeakResourceReference::~CWeakResourceReference(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x30, v4);
    else
      operator delete(this);
  }
  return this;
}
