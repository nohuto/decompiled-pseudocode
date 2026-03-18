/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x180185C40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1800E9364 (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18018654C (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CLegacyRenderTarget::HandleDDAArrivalOrDeparture(CLegacyRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  char *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 2);
  if ( v3 && *((_BYTE *)this + 18449) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    v5 = *((_QWORD *)this + 4);
    if ( (v4 != 0) == (v5 != 0) )
    {
      if ( v5 )
        *(_BYTE *)(v5 + 129) = 1;
    }
    else
    {
      v6 = (char *)this + 32;
      if ( v5 )
      {
        wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(v6);
      }
      else
      {
        wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(v6);
        v7 = CDDARenderTarget::Create(
               *((struct IDXGIOutputDWM **)this + 2),
               *((struct CVisualTree **)this + 5),
               (__int64)this + 48,
               *((_DWORD *)this + 20),
               (CLegacyRenderTarget *)((char *)this + 92),
               (CLegacyRenderTarget *)((char *)this + 32));
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2EBu, 0LL);
      }
    }
  }
  return v2;
}
