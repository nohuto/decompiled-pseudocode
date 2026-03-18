/*
 * XREFs of ??1CGeometry2D@@MEAA@XZ @ 0x18016D540
 * Callers:
 *     ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x18016EAC0 (--_GCGeometry2D@@MEAAPEAXI@Z.c)
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x1801B608C (--1CGeometry2DGroup@@MEAA@XZ.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x1801D7BE0 (--1CMeshGeometry2D@@MEAA@XZ.c)
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1801B5E88 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

void __fastcall CGeometry2D::~CGeometry2D(CGeometry2D *this)
{
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CGeometry2D::FreeCaches(this);
  CResource::~CResource(this);
}
