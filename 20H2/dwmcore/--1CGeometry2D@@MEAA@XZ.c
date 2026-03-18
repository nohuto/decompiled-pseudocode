/*
 * XREFs of ??1CGeometry2D@@MEAA@XZ @ 0x18016B764
 * Callers:
 *     ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x18016CCE0 (--_GCGeometry2D@@MEAAPEAXI@Z.c)
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x1801B419C (--1CGeometry2DGroup@@MEAA@XZ.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x1801D5D50 (--1CMeshGeometry2D@@MEAA@XZ.c)
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1801B3F98 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

void __fastcall CGeometry2D::~CGeometry2D(CGeometry2D *this)
{
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CGeometry2D::FreeCaches(this);
  CResource::~CResource(this);
}
