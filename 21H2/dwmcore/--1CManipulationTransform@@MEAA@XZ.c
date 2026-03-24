/*
 * XREFs of ??1CManipulationTransform@@MEAA@XZ @ 0x1800C83F4
 * Callers:
 *     ??_GCManipulationTransform@@MEAAPEAXI@Z @ 0x1800C83B0 (--_GCManipulationTransform@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

void __fastcall CManipulationTransform::~CManipulationTransform(
        CManipulationTransform *this,
        const struct D2D1_BEZIER_SEGMENT *a2,
        unsigned int a3)
{
  *(_QWORD *)this = &CManipulationTransform::`vftable';
  CDrawListPolygonBuilder::AddBeziers(this, a2, a3);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
