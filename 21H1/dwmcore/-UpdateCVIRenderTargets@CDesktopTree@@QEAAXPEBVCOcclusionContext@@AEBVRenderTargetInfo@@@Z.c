/*
 * XREFs of ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18006CF60
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18006BCD8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7EC4 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180190C9C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800173C4 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180034140 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800685EC (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800A66D8 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800BB048 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

void __fastcall CDesktopTree::UpdateCVIRenderTargets(
        CDesktopTree *this,
        const struct COcclusionContext *a2,
        const struct RenderTargetInfo *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  struct COcclusionInfo *OcclusionInfo; // rax
  __int64 v9; // rcx
  struct IDeviceTexture *v10[2]; // [rsp+30h] [rbp-48h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_RENDER_CVIPASS_Start,
      a3,
      1LL,
      v10);
  v6 = *((_QWORD *)this + 747);
  v7 = *((_QWORD *)this + 748);
  while ( v6 != v7 )
  {
    if ( (int)CThreadContext::RegisterGraphWalkRoot(*(void **)v6) >= 0 )
    {
      OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)v6, this);
      if ( !*(_BYTE *)(v6 + 32)
        || !OcclusionInfo
        || !COcclusionContext::IsOccluded((__int64)a2, v6 + 16, 0LL, *((_DWORD *)OcclusionInfo + 3)) )
      {
        v9 = *(_QWORD *)(v6 + 8);
        v10[0] = 0LL;
        CCachedVisualImage::GetDeviceTexture((CCachedVisualImage *)(v9 + 64), a3, v10);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v10);
      }
      CThreadContext::UnregisterGraphWalkRoot();
    }
    v6 += 40LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_RENDER_CVIPASS_Stop,
      a3,
      1LL,
      v10);
}
