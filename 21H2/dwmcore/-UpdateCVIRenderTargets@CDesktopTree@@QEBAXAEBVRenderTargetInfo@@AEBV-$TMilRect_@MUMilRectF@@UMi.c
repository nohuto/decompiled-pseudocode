/*
 * XREFs of ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089680
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800FE630 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801C93C0 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x180045D18 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180045E68 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18005C440 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180085994 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180086BB4 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180089B0C (-GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x18008B8C0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z @ 0x18008C200 (--0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800B99D0 (-GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@@@Z @ 0x1800D935C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800DF6AC (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 *     ?GetBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800DFFD4 (-GetBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDesktopTree::UpdateCVIRenderTargets(
        struct CVisualTree *a1,
        struct RenderTargetInfo *a2,
        struct MilRectF *a3)
{
  float *v4; // rdi
  __int64 v6; // r8
  const struct COcclusionContext *OcclusionContext; // r12
  CVisual **v8; // rax
  CVisual **v9; // rsi
  CVisual *v10; // rbx
  struct _EVENT_DATA_DESCRIPTOR *v11; // rax
  CTreeData *TreeData; // rax
  struct CBackdropVisualImage *BackdropVisualImage; // r14
  _BYTE *v14; // rcx
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rbx
  __int64 v18; // rdi
  float *v19; // rax
  struct COcclusionInfo *OcclusionInfo; // rax
  __int64 v21; // r8
  void **v22; // rbx
  void **v23; // rax
  struct COcclusionInfo *v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rax
  const char *v27; // rdi
  const struct MilRectF *Bounds; // rax
  const char *v29; // rbx
  const char **v30; // rax
  void **v31; // rbx
  void **v32; // rax
  struct IDeviceTexture *v33; // [rsp+30h] [rbp-D0h] BYREF
  struct MilRectF *v34; // [rsp+38h] [rbp-C8h]
  void *v35; // [rsp+40h] [rbp-C0h] BYREF
  void *v36; // [rsp+48h] [rbp-B8h] BYREF
  void *v37; // [rsp+50h] [rbp-B0h] BYREF
  CVisual **v38; // [rsp+58h] [rbp-A8h]
  char v39[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v40[8]; // [rsp+68h] [rbp-98h] BYREF
  char v41[8]; // [rsp+70h] [rbp-90h] BYREF
  char v42[8]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v43; // [rsp+80h] [rbp-80h] BYREF
  __int128 v44; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v45; // [rsp+A0h] [rbp-60h] BYREF
  const struct CVisualTree **v46; // [rsp+A8h] [rbp-58h]
  _BYTE *v47; // [rsp+B0h] [rbp-50h]
  _BYTE v48[32]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v49[16]; // [rsp+D8h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+F8h] [rbp-8h] BYREF

  v34 = a3;
  v4 = (float *)a3;
  OcclusionContext = CDirtyRegion::GetOcclusionContext((struct CVisualTree *)((char *)a1 + 104));
  if ( !OcclusionContext )
    return;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_RENDER_CVIPASS_Start,
      v6,
      1u,
      &v50);
  v8 = (CVisual **)*((_QWORD *)a1 + 686);
  v9 = (CVisual **)*((_QWORD *)a1 + 685);
  v38 = v8;
  while ( v9 != v8 )
  {
    v10 = *v9;
    v45 = v48;
    v50.Ptr = 0LL;
    *(_QWORD *)&v50.Size = a1;
    v46 = (const struct CVisualTree **)v48;
    v47 = v49;
    v11 = (struct _EVENT_DATA_DESCRIPTOR *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                                             &v45,
                                             0LL,
                                             1LL);
    *v11 = v50;
    TreeData = CVisual::FindTreeData(v10, *(v46 - 1));
    if ( TreeData )
      BackdropVisualImage = CTreeData::GetBackdropVisualImage(TreeData, (const struct CVisualTreePath *)&v45);
    else
      BackdropVisualImage = 0LL;
    v14 = v45;
    v15 = ((char *)v46 - v45) >> 4;
    if ( v15 )
      v46 -= 2 * v15;
    v45 = 0LL;
    if ( v14 == v48 )
      v14 = 0LL;
    DefaultHeap::Free(v14);
    if ( BackdropVisualImage )
    {
      v43 = *((_OWORD *)BackdropVisualImage + 6);
      v16 = CBackdropVisualImage::RequiresRendering(BackdropVisualImage, a2);
      if ( dword_1803D0F60 )
      {
        if ( !v16 )
          goto LABEL_15;
        v27 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v37, (const struct MilRectF *)&v43);
        Bounds = (const struct MilRectF *)CDirtyRegion::GetBounds((char *)a1 + 104, v49);
        v29 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v36, Bounds);
        v30 = (const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v35, v34);
        v31 = (void **)DwmDbg::DbgString::DbgString(
                         (DwmDbg::DbgString *)v39,
                         "renderTarget=[%s], dirtyRegion=[%s], bviBounds=[%s]",
                         *v30,
                         v29,
                         v27);
        v32 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v40, "BVI-AttemptPreRender");
        CBackdropVisualImage::LogEtwEvent((__int64)BackdropVisualImage, v32, v31);
        if ( v35 )
          DefaultHeap::Free(v35);
        if ( v36 )
          DefaultHeap::Free(v36);
        if ( v37 )
          DefaultHeap::Free(v37);
        v4 = (float *)v34;
      }
      else if ( !v16 )
      {
        goto LABEL_15;
      }
      v19 = (float *)CDirtyRegion::GetBounds((char *)a1 + 104, &v51);
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v19, (float *)&v43)
        && TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v4, (float *)&v43) )
      {
        OcclusionInfo = CVisual::GetOcclusionInfo(
                          *v9,
                          a1,
                          (const struct CBackdropVisualImageKey *)&CBackdropVisualImageKey::sc_NoBVIKey);
        if ( !OcclusionInfo
          || (v21 = *((unsigned int *)OcclusionInfo + 7),
              v44 = *((_OWORD *)BackdropVisualImage + 6),
              !(unsigned __int8)COcclusionContext::IsOccluded(OcclusionContext, &v44, v21, 0LL)) )
        {
          v33 = 0LL;
          if ( (int)CCachedVisualImage::GetDeviceTexture(
                      (struct CBackdropVisualImage *)((char *)BackdropVisualImage + 72),
                      a2,
                      &v33) >= 0 )
          {
            v22 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v41, &byte_18032C47F);
            v23 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v42, "BVI-SuccessfulPreRender");
            CBackdropVisualImage::LogEtwEvent((__int64)BackdropVisualImage, v23, v22);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
        }
      }
    }
LABEL_15:
    v8 = v38;
    ++v9;
  }
  v17 = *((_QWORD *)a1 + 602);
  v18 = *((_QWORD *)a1 + 603);
  while ( v17 != v18 )
  {
    if ( (int)CThreadContext::RegisterGraphWalkRoot(*(const void **)v17) >= 0 )
    {
      v24 = CVisual::GetOcclusionInfo(
              *(CVisual **)v17,
              a1,
              (const struct CBackdropVisualImageKey *)&CBackdropVisualImageKey::sc_NoBVIKey);
      if ( !*(_BYTE *)(v17 + 32)
        || !v24
        || !(unsigned __int8)COcclusionContext::IsOccluded(OcclusionContext, v17 + 16, *((unsigned int *)v24 + 7), 0LL) )
      {
        v25 = (__int64 *)(*(_QWORD *)(v17 + 8) + 72LL);
        v26 = *v25;
        v33 = 0LL;
        (*(void (__fastcall **)(__int64 *, struct RenderTargetInfo *, struct IDeviceTexture **))(v26 + 48))(
          v25,
          a2,
          &v33);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
      }
      CThreadContext::UnregisterGraphWalkRoot();
    }
    v17 += 40LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_RENDER_CVIPASS_Stop,
      v6,
      1u,
      &v51);
}
