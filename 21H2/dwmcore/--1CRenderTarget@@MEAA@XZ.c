/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x18001D420
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x18001C54C (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteRenderTarget@@UEAA@XZ @ 0x1800FF814 (--1CRemoteRenderTarget@@UEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x18019DB6C (--1CDDisplayRenderTarget@@UEAA@XZ.c)
 *     ??_GCRenderTarget@@MEAAPEAXI@Z @ 0x18019F630 (--_GCRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801C10D8 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1801C1FF0 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801E0E94 (--1CDDARenderTarget@@UEAA@XZ.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x180299954 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x180025230 (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CRenderTarget::~CRenderTarget(CRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CRenderTarget::`vftable';
  *((_QWORD *)this + 9) = &CRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v2 + 76) = v2 - 72;
  v3 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 88;
  v4 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 112;
  CRenderTarget::ReleaseVisualTree(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((char *)this + 96);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((char *)this + 88);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
