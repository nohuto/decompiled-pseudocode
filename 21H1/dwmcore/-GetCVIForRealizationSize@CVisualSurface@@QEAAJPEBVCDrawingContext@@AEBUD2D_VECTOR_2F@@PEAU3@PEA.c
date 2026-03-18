/*
 * XREFs of ?GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEAPEAVCCachedVisualImage@@@Z @ 0x1801F6068
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180046610 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18018930C (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1801AFC70 (-UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilSt.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801F5CD8 (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@-$vector_fa.c)
 *     ?CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z @ 0x1801F5F7C (-CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z.c)
 *     ?PurgeUnusedResources@CVisualSurface@@AEAAXXZ @ 0x1801F6684 (-PurgeUnusedResources@CVisualSurface@@AEAAXXZ.c)
 */

__int64 __fastcall CVisualSurface::GetCVIForRealizationSize(
        CVisualSurface *this,
        const struct CDrawingContext *a2,
        const struct D2D_VECTOR_2F *a3,
        struct D2D_VECTOR_2F *a4,
        struct CCachedVisualImage **a5)
{
  struct CCachedVisualImage **v5; // r14
  struct CCachedVisualImage **v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rdx
  float x; // xmm6_4
  __int64 v15; // rax
  float v16; // xmm2_4
  float y; // xmm7_4
  int v18; // ecx
  float v19; // xmm1_4
  bool v20; // cc
  float v21; // xmm6_4
  struct CCachedVisualImage **v22; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  CMILCOMBase *v25; // [rsp+70h] [rbp+20h] BYREF

  v5 = a5;
  *a5 = 0LL;
  if ( *((_BYTE *)this + 152) )
  {
    v10 = (struct CCachedVisualImage **)**((_QWORD **)this + 12);
    if ( v10 )
      CMILCOMBase::InternalAddRef(**((CMILCOMBase ***)this + 12));
    if ( !*((_BYTE *)this + 153) )
    {
      v11 = CCachedVisualImage::UpdateFromVisualSurface(
              (__int64)v10,
              *((struct CResource **)this + 7),
              (float *)this + 16,
              (float *)this + 18,
              (float *)this + 20,
              *((_DWORD *)this + 22));
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 315LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_22;
      }
    }
    *a4 = *(struct D2D_VECTOR_2F *)((char *)this + 80);
  }
  else
  {
    CVisualSurface::PurgeUnusedResources(this);
    x = a3->x;
    v15 = *((_QWORD *)a2 + 5);
    v16 = x;
    y = a3->y;
    *(FLOAT *)&a5 = a3->x;
    *((float *)&a5 + 1) = y;
    v18 = *(_DWORD *)(v15 + 968);
    v19 = (float)v18;
    if ( x > (float)v18 || y > v19 )
    {
      v20 = x <= y;
      y = (float)v18;
      x = (float)v18;
      if ( v20 )
      {
        v21 = v19 / a3->y;
        *((float *)&a5 + 1) = (float)v18;
        x = v21 * v16;
        *(float *)&a5 = x;
      }
      else
      {
        *(float *)&a5 = (float)v18;
        y = (float)(v19 / v16) * a3->y;
        *((float *)&a5 + 1) = y;
      }
    }
    v25 = 0LL;
    wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(&v25);
    v11 = CVisualSurface::CreateCVI(this, &v25);
    v10 = (struct CCachedVisualImage **)v25;
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 353LL;
      goto LABEL_17;
    }
    v11 = CCachedVisualImage::UpdateFromVisualSurface(
            (__int64)v25,
            *((struct CResource **)this + 7),
            (float *)this + 16,
            (float *)this + 18,
            (float *)&a5,
            1);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 362LL;
      goto LABEL_17;
    }
    a5 = v10;
    if ( v10 )
      CMILCOMBase::InternalAddRef((CMILCOMBase *)v10);
    detail::vector_facade<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::emplace_back<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>>(
      (_QWORD *)this + 12,
      (CRenderTargetBitmap **)&a5);
    a4->x = x;
    a4->y = y;
  }
  v22 = v10;
  v10 = 0LL;
  v12 = 0;
  *v5 = (struct CCachedVisualImage *)v22;
LABEL_22:
  if ( v10 )
    CRenderTargetBitmap::Release((CRenderTargetBitmap *)v10);
  return v12;
}
