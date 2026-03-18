/*
 * XREFs of ??_ECVisualReferenceController@@MEAAPEAXI@Z @ 0x1800DB050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CVisualReferenceController@@MEAA@XZ @ 0x1800DB094 (--1CVisualReferenceController@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CVisualReferenceController *__fastcall CVisualReferenceController::`vector deleting destructor'(
        CVisualReferenceController *this,
        char a2)
{
  unsigned int v4; // r8d

  CVisualReferenceController::~CVisualReferenceController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x48, v4);
    else
      operator delete(this);
  }
  return this;
}
