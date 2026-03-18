/*
 * XREFs of ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180185FEC
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E82A0 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x1800459AC (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x18004AC94 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18004E668 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x180077378 (-GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C19D4 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18018597C (-GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x180186334 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 *     ?GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@@Z @ 0x1801B1A44 (-GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RailMultimonRenderAndPresent(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2)
{
  unsigned int v4; // ebx
  struct CDesktopTree *DesktopTree; // rax
  void *v6; // r14
  _QWORD *v7; // r15
  __int64 v8; // rax
  int (__fastcall ***v9)(_QWORD, GUID *, struct ISwapChain **); // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  const struct CMILMatrix *v12; // r12
  struct ISwapChain *v13; // rcx
  __int128 v14; // xmm1
  int v15; // eax
  __int64 v16; // rdx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // eax
  __int64 v20; // rcx
  struct ISwapChain *v21; // rbx
  __int64 (__fastcall *v22)(struct ISwapChain *, _QWORD, _DWORD *); // rdi
  _DWORD *RailWindowDeviceBounds; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 result; // rax
  struct ISwapChain *v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int128 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+68h] [rbp-98h]
  __int128 v33; // [rsp+78h] [rbp-88h]
  __int128 v34; // [rsp+88h] [rbp-78h]
  int v35; // [rsp+98h] [rbp-68h]
  _OWORD v36[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v37; // [rsp+E0h] [rbp-20h]
  _DWORD v38[4]; // [rsp+F0h] [rbp-10h] BYREF

  v4 = 0;
  DesktopTree = CVisual::GetDesktopTree(*(CVisual **)(*((_QWORD *)this + 13) + 56LL));
  if ( !DesktopTree )
    goto LABEL_14;
  v30 = 0LL;
  v29 = 0LL;
  CDesktopTree::GetIntersectingMonitorTargets(DesktopTree, (char *)this + 264, &v29);
  v6 = (void *)v29;
  v7 = (_QWORD *)v29;
  if ( (_QWORD)v29 == *((_QWORD *)&v29 + 1) )
    goto LABEL_12;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 120LL))(*v7);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v28,
      v8);
    v27 = 0LL;
    if ( !v28 )
      goto LABEL_7;
    v9 = (int (__fastcall ***)(_QWORD, GUID *, struct ISwapChain **))(*(int *)(*(_QWORD *)(v28 + 8) + 4LL) + v28 + 8);
    if ( (**v9)(v9, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v27) < 0 )
      goto LABEL_7;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7);
    v11 = *((_QWORD *)this + 13);
    v12 = (const struct CMILMatrix *)v10;
    v37 = 0;
    CVisual::GetRootTransform(*(CVisual **)(v11 + 56), (struct CMILMatrix *)v36);
    v31 = v36[0];
    v35 = v37;
    v32 = v36[1];
    v33 = v36[2];
    v34 = v36[3];
    CMILMatrix::Multiply((CMILMatrix *)&v31, v12);
    v13 = v27;
    v14 = v32;
    v15 = v35;
    v16 = *((unsigned int *)this + 23);
    *(_OWORD *)((char *)this + 184) = v31;
    v17 = v33;
    *(_OWORD *)((char *)this + 200) = v14;
    v18 = v34;
    *(_OWORD *)((char *)this + 216) = v17;
    *(_OWORD *)((char *)this + 232) = v18;
    *((_DWORD *)this + 62) = v15;
    (*(void (__fastcall **)(struct ISwapChain *, __int64))(*(_QWORD *)v13 + 56LL))(v13, v16);
    v19 = CRemoteAppRenderTarget::RenderDirtyRegion(this, a2, v27);
    v4 = v19;
    if ( v19 < 0 )
      break;
    v21 = v27;
    v22 = *(__int64 (__fastcall **)(struct ISwapChain *, _QWORD, _DWORD *))(*(_QWORD *)v27 + 104LL);
    RailWindowDeviceBounds = CRemoteAppRenderTarget::GetRailWindowDeviceBounds((__int64)this, v38, v12);
    v24 = v22(v21, *((_QWORD *)this + 32), RailWindowDeviceBounds);
    v4 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x264u, 0LL);
      goto LABEL_11;
    }
LABEL_7:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v27);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28);
    if ( ++v7 == *((_QWORD **)&v29 + 1) )
      goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x260u, 0LL);
LABEL_11:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v27);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28);
LABEL_12:
  if ( v6 )
    std::_Deallocate<16,0>(v6, (v30 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_14:
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
  result = v4;
  *((_WORD *)this + 124) = 32085;
  return result;
}
