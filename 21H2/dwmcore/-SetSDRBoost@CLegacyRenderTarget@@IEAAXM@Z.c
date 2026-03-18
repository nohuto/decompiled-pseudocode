/*
 * XREFs of ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x1800F7084
 * Callers:
 *     ?ProcessCreate@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_CREATE@@@Z @ 0x1800F7010 (-ProcessCreate@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_CR.c)
 *     ?ProcessUpdateSDRToHDRMultiplier@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER@@@Z @ 0x1801A1DE4 (-ProcessUpdateSDRToHDRMultiplier@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEG.c)
 * Callees:
 *     ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x1800F70CC (-ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetSDRBoost@CDDARenderTarget@@QEAAXM@Z @ 0x1801C0D68 (-SetSDRBoost@CDDARenderTarget@@QEAAXM@Z.c)
 */

void __fastcall CLegacyRenderTarget::SetSDRBoost(CLegacyRenderTarget *this, float a2)
{
  float v3; // xmm0_4
  CDDARenderTarget *v4; // rcx
  __int64 v5; // rcx

  v3 = ValidateSDRBoost(CCommonRegistryData::m_flSDRBoostOverride, (CLegacyRenderTarget *)((char *)this + 112));
  if ( *((float *)this + 4610) != v3 )
  {
    v4 = (CDDARenderTarget *)*((_QWORD *)this + 23);
    *((float *)this + 4610) = v3;
    if ( v4 )
      CDDARenderTarget::SetSDRBoost(v4, v3);
    v5 = *((_QWORD *)this + 22);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 216LL))(v5);
    *((_BYTE *)this + 141) = 1;
  }
}
