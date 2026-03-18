/*
 * XREFs of ??1CGeometry2D@@MEAA@XZ @ 0x180111F14
 * Callers:
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x180113A1A (--1CGeometry2DGroup@@MEAA@XZ.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x1801144DE (--1CMeshGeometry2D@@MEAA@XZ.c)
 *     ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x18019EDD0 (--_GCGeometry2D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x180202ADC (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

void __fastcall CGeometry2D::~CGeometry2D(CGeometry2D *this)
{
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CGeometry2D::FreeCaches(this);
  CResource::~CResource(this);
}
