/*
 * XREFs of ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18008D0DC
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18008BC74 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x18008D33C (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18016C934 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180189880 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180239888 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x18008D16C (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

struct _LUID __fastcall CDisplayManager::GetPrimaryAdapterLuid(CDisplayManager *this, struct _LUID *a2)
{
  struct IDXGIAdapter1 *v4[2]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v5[296]; // [rsp+30h] [rbp-158h] BYREF
  struct _LUID v6; // [rsp+158h] [rbp-30h]

  v4[0] = 0LL;
  *a2 = g_luidZero;
  if ( (int)CDisplayManager::GetPrimaryAdapter(this, v4) >= 0
    && ((int (__fastcall *)(struct IDXGIAdapter1 *, _BYTE *))v4[0]->lpVtbl->GetDesc1)(v4[0], v5) >= 0 )
  {
    *a2 = v6;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v4);
  return (struct _LUID)a2;
}
