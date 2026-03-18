/*
 * XREFs of ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x18005D7D0
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x18005D920 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCachedVisualImage@@@Z @ 0x18005DA34 (--4-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCachedVisu.c)
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005DD10 (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1800E412C (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@-$vector_.c)
 *     floor @ 0x1801018EC (floor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USourceCVI@CVisualSurface@@@2@V?$basic_iterator@$$CBUSourceCVI@CVisualSurface@@@2@@Z @ 0x180203188 (-erase@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurface@@$03$.c)
 */

__int64 __fastcall CVisualSurface::GetOrCreateCVIForRealizationSize(
        CVisualSurface *this,
        const struct D2D_VECTOR_2F *a2,
        struct CCachedVisualImage **a3)
{
  float x; // xmm0_4
  int v7; // r13d
  double v8; // xmm0_8
  struct CCachedVisualImage *v9; // rbx
  struct CCachedVisualImage *v10; // rax
  struct CComposition *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  struct CCachedVisualImage *v14; // rbx
  unsigned __int64 CurrentFrameId; // rax
  __int64 v17; // rdi
  char v18[16]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  struct CCachedVisualImage *v20; // [rsp+70h] [rbp+40h] BYREF
  struct CCachedVisualImage *v21; // [rsp+78h] [rbp+48h] BYREF
  struct CCachedVisualImage *v22; // [rsp+88h] [rbp+58h] BYREF

  x = a2->x;
  v20 = 0LL;
  v7 = (int)floor(x + 0.5);
  v8 = floor(a2->y + 0.5);
  v9 = (struct CCachedVisualImage *)*((_QWORD *)this + 14);
  while ( v9 != *((struct CCachedVisualImage **)this + 15) )
  {
    v17 = *(_QWORD *)v9;
    (**(void (__fastcall ***)(__int64, struct CCachedVisualImage **))(*(_QWORD *)v9 + 72LL))(*(_QWORD *)v9 + 72LL, &v21);
    if ( (struct CCachedVisualImage *)__PAIR64__((int)v8, v7) == v21 )
    {
      wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::operator=(&v20, v17);
      *((_QWORD *)v9 + 1) = GetCurrentFrameId();
      goto LABEL_10;
    }
    if ( *(int *)(v17 + 8) > 1 || GetCurrentFrameId() - *((_QWORD *)v9 + 1) <= 0xA )
    {
LABEL_10:
      v9 = (struct CCachedVisualImage *)((char *)v9 + 16);
    }
    else
    {
      v22 = v9;
      v9 = *(struct CCachedVisualImage **)detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::erase(
                                            (char *)this + 112,
                                            v18,
                                            &v22);
    }
  }
  v10 = v20;
  if ( v20 )
    goto LABEL_6;
  v11 = (struct CComposition *)*((_QWORD *)this + 2);
  v21 = 0LL;
  v12 = CCachedVisualImage::CreateForVisualSurface(v11, &v21);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)v12);
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v21);
  }
  else
  {
    v14 = v21;
    wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::operator=(&v20, v21);
    v21 = 0LL;
    v22 = v14;
    CurrentFrameId = GetCurrentFrameId();
    detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::emplace_back<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,unsigned __int64>(
      (char *)this + 112,
      &v22,
      CurrentFrameId);
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v21);
    v10 = v20;
LABEL_6:
    v20 = 0LL;
    v13 = 0;
    *a3 = v10;
  }
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v20);
  return v13;
}
