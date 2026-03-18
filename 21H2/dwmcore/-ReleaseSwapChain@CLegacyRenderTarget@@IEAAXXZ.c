/*
 * XREFs of ?ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ @ 0x1800C6870
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x18001C54C (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x18001D5F0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ @ 0x1800D8694 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1801C0A60 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800C68E4 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1801BFD68 (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 */

void __fastcall CLegacyRenderTarget::ReleaseSwapChain(CLegacyRenderTarget *this)
{
  CResource *v2; // rcx
  CSyncLockGroup *v3; // rcx

  COverlayContext::Reset((CLegacyRenderTarget *)((char *)this + 192));
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((char *)this + 168);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((char *)this + 176);
  v2 = (CResource *)*((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v2 )
    CResource::InternalRelease(v2);
  v3 = (CSyncLockGroup *)*((_QWORD *)this + 2314);
  if ( v3 )
  {
    CSyncLockGroup::RemoveRenderTarget(v3, (CLegacyRenderTarget *)((char *)this + 144));
    *((_QWORD *)this + 2314) = 0LL;
  }
  *((_BYTE *)this + 18611) = 0;
  *((_BYTE *)this + 18613) = 0;
}
