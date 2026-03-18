/*
 * XREFs of ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18009CF9C
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18009BD18 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E939C (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018C3DC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180064910 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180065A44 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18006B060 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18007652C (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800B59F8 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
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
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-48h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_RENDER_CVIPASS_Start,
      (__int64)a3,
      1u,
      &v10);
  v6 = *((_QWORD *)this + 747);
  v7 = *((_QWORD *)this + 748);
  while ( v6 != v7 )
  {
    if ( (int)CThreadContext::RegisterGraphWalkRoot(*(void **)v6) >= 0 )
    {
      OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)v6, this);
      if ( !*(_BYTE *)(v6 + 32)
        || !OcclusionInfo
        || !COcclusionContext::IsOccluded((__int64)a2, (float *)(v6 + 16), 0LL, *((_DWORD *)OcclusionInfo + 3)) )
      {
        v9 = *(_QWORD *)(v6 + 8);
        v10.Ptr = 0LL;
        CCachedVisualImage::GetDeviceTexture((CCachedVisualImage *)(v9 + 64), a3, (struct IDeviceTexture **)&v10);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
      }
      CThreadContext::UnregisterGraphWalkRoot();
    }
    v6 += 40LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_RENDER_CVIPASS_Stop,
      (__int64)a3,
      1u,
      &v10);
}
