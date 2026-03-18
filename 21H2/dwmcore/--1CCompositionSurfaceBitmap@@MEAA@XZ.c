/*
 * XREFs of ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800C7524
 * Callers:
 *     ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x1800C74E0 (--_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z @ 0x1800C76C4 (-UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(CCompositionSurfaceBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CCompositionSurfaceInfo *v4; // rcx

  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CCompositionSurfaceBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 12) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CCompositionSurfaceBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CCompositionSurfaceBitmap::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 144;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 160;
  v4 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 13);
  if ( v4 )
    CCompositionSurfaceInfo::UnRegisterBitmapNotifier(v4, (CCompositionSurfaceBitmap *)((char *)this + 88));
  FastRegion::CRegion::FreeMemory((CCompositionSurfaceBitmap *)((char *)this + 120));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 13);
  CResource::~CResource(this);
}
