/*
 * XREFs of ??_GCManipulationTransform@@MEAAPEAXI@Z @ 0x1800C83B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ??1CManipulationTransform@@MEAA@XZ @ 0x1800C83F4 (--1CManipulationTransform@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CManipulationTransform *__fastcall CManipulationTransform::`scalar deleting destructor'(
        CManipulationTransform *this,
        char a2)
{
  unsigned int v4; // r8d

  CManipulationTransform::~CManipulationTransform(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x110, v4);
    else
      operator delete(this);
  }
  return this;
}
