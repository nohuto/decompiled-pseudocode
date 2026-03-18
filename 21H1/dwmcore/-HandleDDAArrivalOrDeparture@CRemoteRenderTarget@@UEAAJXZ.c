/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x1801918B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1800E8730 (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18018930C (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CRemoteRenderTarget::HandleDDAArrivalOrDeparture(CRemoteRenderTarget *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  CRenderTargetBitmap **v4; // rcx
  int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 2);
  if ( v3
    && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) != 0) != (*((_QWORD *)this + 4) != 0LL) )
  {
    v4 = (CRenderTargetBitmap **)((char *)this + 32);
    if ( *((_QWORD *)this + 4) )
    {
      wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(v4);
    }
    else
    {
      wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(v4);
      v5 = CDDARenderTarget::Create(
             *((struct IDXGIOutputDWM **)this + 2),
             *((struct CVisualTree **)this + 5),
             (__int64)this + 48,
             1u,
             (CRemoteRenderTarget *)((char *)this + 72),
             (CRemoteRenderTarget *)((char *)this + 32));
      v2 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x143u, 0LL);
    }
  }
  return v2;
}
