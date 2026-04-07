/*
 * XREFs of ??0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z @ 0x18004707C
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x180046E44 (-Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CMagnifierControl *__fastcall CMagnifierControl::CMagnifierControl(
        CMagnifierControl *this,
        struct CVisual *a2,
        struct CVisual *a3)
{
  *(_QWORD *)this = &CMagnifierControl::`vftable'{for `CBaseObject'};
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = &CMagnifierControl::`vftable'{for `ISoftwareCursorChangeListener'};
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 56),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_BYTE *)this + 128) = 0;
  *(_OWORD *)((char *)this + 132) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 19) = 0x3FF0000000000000LL;
  *((_OWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  *((_QWORD *)this + 5) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  return this;
}
