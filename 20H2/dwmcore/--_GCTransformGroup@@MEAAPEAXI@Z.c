/*
 * XREFs of ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x18001C550
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x18001C594 (--1CTransformGroup@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CTransformGroup *__fastcall CTransformGroup::`scalar deleting destructor'(CTransformGroup *this, char a2)
{
  unsigned int v4; // r8d

  CTransformGroup::~CTransformGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xD0, v4);
    else
      operator delete(this);
  }
  return this;
}
