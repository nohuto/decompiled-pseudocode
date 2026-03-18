/*
 * XREFs of ??1CMatrixTransform3D@@MEAA@XZ @ 0x1800BD664
 * Callers:
 *     ??_GCMatrixTransform3D@@MEAAPEAXI@Z @ 0x1800BD620 (--_GCMatrixTransform3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

void __fastcall CMatrixTransform3D::~CMatrixTransform3D(
        CMatrixTransform3D *this,
        const struct D2D1_BEZIER_SEGMENT *a2,
        unsigned int a3)
{
  *(_QWORD *)this = &CMatrixTransform3D::`vftable';
  CDrawListPolygonBuilder::AddBeziers(this, a2, a3);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
