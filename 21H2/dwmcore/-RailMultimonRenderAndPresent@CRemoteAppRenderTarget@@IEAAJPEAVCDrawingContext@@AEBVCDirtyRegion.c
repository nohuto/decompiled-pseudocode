/*
 * XREFs of ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@@Z @ 0x1801C2BF8
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C2FEC (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0?$com_ptr_t@VISwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChain@@@Z @ 0x1800793D8 (--0-$com_ptr_t@VISwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChain@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800D5878 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800EB74C (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1801C276C (-GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyRegion@@PEAW4ProtectionMode@1@@Z @ 0x1801C3404 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyR.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801C3A9C (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@@Z @ 0x1801F604C (-GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RailMultimonRenderAndPresent(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2,
        const struct CDirtyRegion *a3)
{
  const struct CDirtyRegion *v4; // rdi
  unsigned int v6; // ebx
  struct CDesktopTree *DesktopTree; // rax
  __m128i v8; // xmm1
  float v9; // xmm0_4
  float v10; // xmm0_4
  void *v11; // r14
  _QWORD *v12; // r15
  __int64 v13; // rax
  int (__fastcall ***v14)(_QWORD, GUID *, struct ISwapChain **); // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  const struct CMILMatrix *v17; // r12
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int128 v21; // xmm1
  struct ISwapChain *v22; // rcx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r9
  struct ISwapChain *v28; // rbx
  __int64 (__fastcall *v29)(struct ISwapChain *, _QWORD, _DWORD *); // rdi
  _DWORD *RailWindowDeviceBounds; // rax
  int v31; // eax
  __int64 v32; // rcx
  char v33; // al
  struct ISwapChain *v35; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h]
  _BYTE v38[8]; // [rsp+50h] [rbp-B0h] BYREF
  const struct CDirtyRegion *v39; // [rsp+58h] [rbp-A8h]
  __int128 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v41; // [rsp+70h] [rbp-90h]
  __int128 v42; // [rsp+80h] [rbp-80h]
  __int128 v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+A0h] [rbp-60h]
  _OWORD v45[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp+0h] BYREF
  float v48; // [rsp+108h] [rbp+8h]
  __int32 v49; // [rsp+10Ch] [rbp+Ch]
  _DWORD v50[4]; // [rsp+110h] [rbp+10h] BYREF

  v39 = a3;
  v4 = a3;
  v6 = 0;
  DesktopTree = CVisual::GetDesktopTree(*(CVisual **)(*((_QWORD *)this + 12) + 64LL));
  if ( !DesktopTree )
    goto LABEL_15;
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 67));
  v9 = (float)*((int *)this + 66);
  v37 = 0LL;
  *(float *)&v47 = v9;
  v10 = (float)*((int *)this + 68);
  HIDWORD(v47) = _mm_cvtepi32_ps(v8).m128_u32[0];
  *(float *)v8.m128i_i32 = (float)*((int *)this + 69);
  v48 = v10;
  v36 = 0LL;
  v49 = v8.m128i_i32[0];
  CDesktopTree::GetIntersectingMonitorTargets(DesktopTree, &v47, &v36);
  v11 = (void *)v36;
  v12 = (_QWORD *)v36;
  if ( (_QWORD)v36 == *((_QWORD *)&v36 + 1) )
    goto LABEL_13;
  while ( 1 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 152LL))(*v12);
    wil::com_ptr_t<ISwapChain,wil::err_returncode_policy>::com_ptr_t<ISwapChain,wil::err_returncode_policy>(&v47, v13);
    v35 = 0LL;
    if ( !v47 )
      goto LABEL_8;
    v14 = (int (__fastcall ***)(_QWORD, GUID *, struct ISwapChain **))(*(int *)(*(_QWORD *)(v47 + 8) + 4LL) + v47 + 8);
    if ( (**v14)(v14, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v35) < 0 )
      goto LABEL_8;
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 32LL))(*v12);
    v16 = *((_QWORD *)this + 12);
    v46 = 0;
    v17 = (const struct CMILMatrix *)v15;
    CVisual::GetRootTransform(*(CVisual **)(v16 + 64), (struct CMILMatrix *)v45, 0, 0);
    v40 = v45[0];
    v44 = v46;
    v41 = v45[1];
    v42 = v45[2];
    v43 = v45[3];
    CMILMatrix::Multiply((CMILMatrix *)&v40, v17, v18, v19);
    v20 = v44;
    v21 = v41;
    v22 = v35;
    *(_OWORD *)((char *)this + 184) = v40;
    v23 = v42;
    *(_OWORD *)((char *)this + 200) = v21;
    v24 = v43;
    *(_OWORD *)((char *)this + 216) = v23;
    *(_OWORD *)((char *)this + 232) = v24;
    *((_DWORD *)this + 62) = v20;
    (*(void (__fastcall **)(struct ISwapChain *, _QWORD))(*(_QWORD *)v22 + 72LL))(v22, *((unsigned int *)this + 29));
    v25 = CRemoteAppRenderTarget::RenderDirtyRegion(
            this,
            a2,
            v35,
            v4,
            (enum CRemoteAppRenderTarget::ProtectionMode *)v38);
    v6 = v25;
    if ( v25 < 0 )
      break;
    v28 = v35;
    v29 = *(__int64 (__fastcall **)(struct ISwapChain *, _QWORD, _DWORD *))(*(_QWORD *)v35 + 120LL);
    RailWindowDeviceBounds = CRemoteAppRenderTarget::GetRailWindowDeviceBounds((__int64)this, v50, (__int64)v17, v27);
    v31 = v29(v28, *((_QWORD *)this + 32), RailWindowDeviceBounds);
    v6 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v31, 0x2C5u);
      goto LABEL_12;
    }
    v4 = v39;
LABEL_8:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v35);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v47);
    if ( ++v12 == *((_QWORD **)&v36 + 1) )
      goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x2C1u);
LABEL_12:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v35);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v47);
LABEL_13:
  if ( v11 )
    std::_Deallocate<16,0>(v11, (v37 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_15:
  wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset((char *)this + 168);
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
  v33 = *((_BYTE *)this + 249) & 0xD7;
  *((_BYTE *)this + 248) = 85;
  *((_BYTE *)this + 249) = v33 | 0x17;
  return v6;
}
