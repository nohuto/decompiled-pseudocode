/*
 * XREFs of ??1CEmptyRegionDrawListBrush@@UEAA@XZ @ 0x180115866
 * Callers:
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x1801158B0 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CEmptyRegionDrawListBrush::~CEmptyRegionDrawListBrush(void **this)
{
  __int64 v2; // rcx
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx

  FastRegion::CRegion::FreeMemory(this + 11);
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64))this[10];
  if ( v3 )
    std::default_delete<CDrawListBrush>::operator()(v2, v3);
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64))this[9];
  if ( v4 )
    std::default_delete<CDrawListBrush>::operator()(v2, v4);
}
