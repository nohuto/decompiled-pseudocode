/*
 * XREFs of ?PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z @ 0x1800BA398
 * Callers:
 *     _lambda_4064d43483b5bb29fd990d0cb2f57b97_::operator() @ 0x1800589A4 (_lambda_4064d43483b5bb29fd990d0cb2f57b97_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_763bc31e111107fbe1907c8362f3578f__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800E5B50 (std--_Func_impl_no_alloc__lambda_763bc31e111107fbe1907c8362f3578f__long_CExternalEffectGraph--CG.c)
 *     _lambda_9ef8cd32bb462703e0f92a2aca4819db_::operator() @ 0x1802B30A8 (_lambda_9ef8cd32bb462703e0f92a2aca4819db_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA5D0 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800BCC70 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800BCD2C (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CExternalEffectGraph::CGraphRenderingContext::PushTarget(
        CExternalEffectGraph::CGraphRenderingContext *this,
        unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  CDrawListBitmap *v9; // rax
  const char *v11; // [rsp+30h] [rbp-28h] BYREF
  int v12[8]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v14 = 0LL;
  v4 = a2;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v14);
  v5 = *((unsigned int *)this + 2);
  v11 = "DWM External Effect intermediate";
  v12[0] = 32;
  v6 = CDrawingContext::PushOffScreenRenderingLayer(v2, &v11, (char *)this + 40, v5, 3, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v8 = v14;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, 1LL);
    *((_DWORD *)this + 9) = v4;
    v9 = CDrawListBitmap::CDrawListBitmap(
           (CDrawListBitmap *)&v11,
           (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v8 + 8) + 16LL) + v8 + 8));
    CDrawListBitmap::operator=(*((_QWORD *)this + 6) + 104 * v4, v9);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v12);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v11);
    v7 = 0;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v14);
  return v7;
}
