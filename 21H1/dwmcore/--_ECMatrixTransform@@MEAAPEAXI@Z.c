/*
 * XREFs of ??_ECMatrixTransform@@MEAAPEAXI@Z @ 0x1800BD720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CMatrixTransform@@MEAA@XZ @ 0x1800BD764 (--1CMatrixTransform@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CMatrixTransform *__fastcall CMatrixTransform::`vector deleting destructor'(CMatrixTransform *this, char a2)
{
  unsigned int v4; // r8d

  CMatrixTransform::~CMatrixTransform(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xB0, v4);
    else
      operator delete(this);
  }
  return this;
}
