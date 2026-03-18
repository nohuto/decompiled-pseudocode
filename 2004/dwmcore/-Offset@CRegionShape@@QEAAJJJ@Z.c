/*
 * XREFs of ?Offset@CRegionShape@@QEAAJJJ@Z @ 0x1800EC660
 * Callers:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180040760 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z @ 0x18025DD88 (-Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z.c)
 */

__int64 __fastcall CRegionShape::Offset(CRegionShape *this, int a2, int a3)
{
  FastRegion::Internal::CRgnData *v3; // rcx
  unsigned int v4; // ebx

  v3 = (FastRegion::Internal::CRgnData *)*((_QWORD *)this + 2);
  v4 = 0;
  if ( *(_DWORD *)v3 && !FastRegion::Internal::CRgnData::Offset(v3, a2, a3) )
    return 534;
  return v4;
}
