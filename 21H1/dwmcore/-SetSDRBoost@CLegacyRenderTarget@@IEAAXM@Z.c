/*
 * XREFs of ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x1800D2FBC
 * Callers:
 *     ?ProcessCreate@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_CREATE@@@Z @ 0x1800D2F40 (-ProcessCreate@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_CR.c)
 *     ?ProcessUpdateSDRToHDRMultiplier@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER@@@Z @ 0x180174514 (-ProcessUpdateSDRToHDRMultiplier@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEG.c)
 * Callees:
 *     ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x1800D304C (-ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x1800E4014 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?SetSDRBoost@CDDARenderTarget@@QEAAXM@Z @ 0x1800E64F0 (-SetSDRBoost@CDDARenderTarget@@QEAAXM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyRenderTarget::SetSDRBoost(CLegacyRenderTarget *this, float a2)
{
  float v3; // xmm0_4
  CDDARenderTarget **v4; // rcx
  __int64 v5; // rcx

  v3 = ValidateSDRBoost(CCommonRegistryData::m_flSDRBoostOverride, (CLegacyRenderTarget *)((char *)this + 88));
  if ( *((float *)this + 61) != v3 )
  {
    *((float *)this + 61) = v3;
    if ( (unsigned __int8)wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((char *)this + 168) )
      CDDARenderTarget::SetSDRBoost(*v4, v3);
    v5 = *((_QWORD *)this + 20);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 168LL))(v5);
    *((_BYTE *)this + 129) = 1;
  }
}
