/*
 * XREFs of ??1CPrimitiveGroup@@MEAA@XZ @ 0x180095110
 * Callers:
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x1800CC650 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 *     ??_ECPrimitiveGroupLayerClip@@UEAAPEAXI@Z @ 0x180171F70 (--_ECPrimitiveGroupLayerClip@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18003802C (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800382C8 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1800CA834 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800CB540 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroup::~CPrimitiveGroup(CPrimitiveGroup *this)
{
  __int64 v2; // rcx
  CRenderTargetBitmap *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CPrimitiveGroup::`vftable'{for `CContent'};
  *((_QWORD *)this + 8) = &CPrimitiveGroup::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 9) = &CPrimitiveGroup::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CPrimitiveGroup::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CPrimitiveGroup::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 648;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 52) = *(_DWORD *)(*((_QWORD *)this + 7) + 8LL)
                                                                         - 664;
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 0);
  CPrimitiveGroup::ReleaseSurfaceResources(this);
  CPrimitiveGroup::ReleaseColorResources(this);
  v3 = (CRenderTargetBitmap *)*((_QWORD *)this + 54);
  if ( v3 )
    CRenderTargetBitmap::Release(v3);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CPrimitiveGroup::ReleaseHeatMap(this);
  FastRegion::CRegion::FreeMemory((CPrimitiveGroup *)((char *)this + 592));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 368);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 304);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 240);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 176);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 120);
  CResource::~CResource(this);
}
