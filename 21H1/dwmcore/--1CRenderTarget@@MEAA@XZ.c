/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x1800D784C
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800D71D8 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??_GCRemoteRenderTarget@@UEAAPEAXI@Z @ 0x1800E0250 (--_GCRemoteRenderTarget@@UEAAPEAXI@Z.c)
 *     ??_GCDDisplayRenderTarget@@UEAAPEAXI@Z @ 0x1801713B0 (--_GCDDisplayRenderTarget@@UEAAPEAXI@Z.c)
 *     ??_GCRenderTarget@@MEAAPEAXI@Z @ 0x180172070 (--_GCRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801896A8 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x18018A0AC (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ??1CLocalAppRenderTarget@@MEAA@XZ @ 0x18018E7CC (--1CLocalAppRenderTarget@@MEAA@XZ.c)
 *     ??_ECDDARenderTarget@@UEAAPEAXI@Z @ 0x18019CE90 (--_ECDDARenderTarget@@UEAAPEAXI@Z.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x18025857C (--1CHolographicInteropTarget@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x1800D7BBC (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CRenderTarget::~CRenderTarget(CRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CRenderTarget::`vftable';
  *((_QWORD *)this + 8) = &CCaptureRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v2 + 68) = v2 - 72;
  v3 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 88;
  v4 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  *(_DWORD *)((char *)this + v4 + 68) = v4 - 112;
  CRenderTarget::ReleaseVisualTree(this);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 13);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
