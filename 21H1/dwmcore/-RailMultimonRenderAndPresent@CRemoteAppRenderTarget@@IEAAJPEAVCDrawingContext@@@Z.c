/*
 * XREFs of ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18018A94C
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E6ADC (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18002D370 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x18003A468 (-GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x18008F624 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800BC434 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x18018ACDC (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 *     ?GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@@Z @ 0x1801B62A4 (-GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RailMultimonRenderAndPresent(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2)
{
  __int64 v2; // rax
  struct CDrawingContext *v4; // r12
  unsigned int v5; // ebx
  struct CDesktopTree *DesktopTree; // rax
  void *v7; // rsi
  _QWORD *v8; // r14
  __int64 v9; // rax
  int (__fastcall ***v10)(_QWORD, GUID *, struct ISwapChain **); // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const struct CMILMatrix *v13; // r13
  struct ISwapChain *v14; // rcx
  __int128 v15; // xmm1
  int v16; // eax
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // eax
  __int64 v21; // rcx
  struct ISwapChain *v22; // rbx
  __int64 (__fastcall *v23)(struct ISwapChain *, _QWORD, int *); // r12
  __int64 i; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 result; // rax
  struct ISwapChain *v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h]
  struct CDrawingContext *v32; // [rsp+58h] [rbp-A8h]
  __int128 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+80h] [rbp-80h]
  __int128 v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+A0h] [rbp-60h]
  _OWORD v38[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+F0h] [rbp-10h]
  __int128 v40; // [rsp+100h] [rbp+0h] BYREF
  float v41[4]; // [rsp+110h] [rbp+10h] BYREF
  int v42[4]; // [rsp+120h] [rbp+20h] BYREF

  v2 = *((_QWORD *)this + 13);
  v32 = a2;
  v4 = a2;
  v5 = 0;
  DesktopTree = CVisual::GetDesktopTree(*(CVisual **)(v2 + 56));
  if ( !DesktopTree )
    goto LABEL_17;
  v31 = 0LL;
  v30 = 0LL;
  CDesktopTree::GetIntersectingMonitorTargets(DesktopTree, (char *)this + 264, &v30);
  v7 = (void *)v30;
  v8 = (_QWORD *)v30;
  if ( (_QWORD)v30 == *((_QWORD *)&v30 + 1) )
    goto LABEL_15;
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 120LL))(*v8);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v29,
      v9);
    v28 = 0LL;
    if ( !v29 )
      goto LABEL_10;
    v10 = (int (__fastcall ***)(_QWORD, GUID *, struct ISwapChain **))(*(int *)(*(_QWORD *)(v29 + 8) + 4LL) + v29 + 8);
    if ( (**v10)(v10, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v28) < 0 )
      goto LABEL_10;
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
    v12 = *((_QWORD *)this + 13);
    v39 = 0;
    v13 = (const struct CMILMatrix *)v11;
    CVisual::GetRootTransform(*(CVisual **)(v12 + 56), (struct CMILMatrix *)v38);
    v33 = v38[0];
    v37 = v39;
    v34 = v38[1];
    v35 = v38[2];
    v36 = v38[3];
    CMILMatrix::Multiply((CMILMatrix *)&v33, v13);
    v14 = v28;
    v15 = v34;
    v16 = v37;
    v17 = *((unsigned int *)this + 23);
    *(_OWORD *)((char *)this + 184) = v33;
    v18 = v35;
    *(_OWORD *)((char *)this + 200) = v15;
    v19 = v36;
    *(_OWORD *)((char *)this + 216) = v18;
    *(_OWORD *)((char *)this + 232) = v19;
    *((_DWORD *)this + 62) = v16;
    (*(void (__fastcall **)(struct ISwapChain *, __int64))(*(_QWORD *)v14 + 56LL))(v14, v17);
    v20 = CRemoteAppRenderTarget::RenderDirtyRegion(this, v4, v28);
    v5 = v20;
    if ( v20 < 0 )
      break;
    v22 = v28;
    v23 = *(__int64 (__fastcall **)(struct ISwapChain *, _QWORD, int *))(*(_QWORD *)v28 + 104LL);
    for ( i = 0LL; i < 4; ++i )
      v41[i] = (float)*((int *)this + i + 66);
    v40 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(v13, (__int64)v41, (float *)&v40);
    PixelAlign(v42, &v40);
    v25 = v23(v22, *((_QWORD *)this + 32), v42);
    v5 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x264u, 0LL);
      goto LABEL_14;
    }
    v4 = v32;
LABEL_10:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
    if ( ++v8 == *((_QWORD **)&v30 + 1) )
      goto LABEL_15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x260u, 0LL);
LABEL_14:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
LABEL_15:
  if ( v7 )
    std::_Deallocate<16,0>(v7, (v31 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_17:
  wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset((__int64 *)this + 20);
  *((_QWORD *)this + 23) = 1065353216LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *(_QWORD *)((char *)this + 204) = 1065353216LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_DWORD *)this + 55) = 0;
  *((_QWORD *)this + 28) = 1065353216LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 1065353216;
  result = v5;
  *((_WORD *)this + 124) = 32085;
  return result;
}
