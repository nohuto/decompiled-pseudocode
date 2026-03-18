/*
 * XREFs of ?PurgeUnusedResources@CVisualSurface@@AEAAXXZ @ 0x1801F6684
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEAPEAVCCachedVisualImage@@@Z @ 0x1801F6068 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180178348 (-clear@-$vector_facade@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801F5CD8 (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@-$vector_fa.c)
 *     ??$swap_helper@$03@?$expandable_buffer_base@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03@detail@@QEAA_NAEAV01@@Z @ 0x1801F5DF4 (--$swap_helper@$03@-$expandable_buffer_base@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_po.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801F6A64 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall CVisualSurface::PurgeUnusedResources(CVisualSurface *this)
{
  __int64 **v1; // rsi
  CRenderTargetBitmap **v2; // rbx
  CRenderTargetBitmap **v3; // rdi
  CRenderTargetBitmap *v4; // rax
  __int64 *v5; // rcx
  __int64 *v6; // rcx
  __int64 *v7; // rcx
  __int64 *v8; // rcx
  bool v9; // zf
  __int64 *v10; // rdi
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  CRenderTargetBitmap *v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-40h]
  __int64 *v17; // [rsp+38h] [rbp-38h]
  _BYTE v18[32]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h] BYREF

  v15 = (__int64 *)v18;
  v1 = (__int64 **)((char *)this + 96);
  v2 = (CRenderTargetBitmap **)*((_QWORD *)this + 12);
  v3 = (CRenderTargetBitmap **)*((_QWORD *)this + 13);
  v16 = (__int64 *)v18;
  v17 = &v19;
  while ( v2 != v3 )
  {
    v4 = *v2;
    if ( *((int *)*v2 + 2) > 1 )
    {
      *v2 = 0LL;
      v14 = v4;
      detail::vector_facade<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::emplace_back<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>>(
        &v15,
        &v14);
    }
    ++v2;
  }
  if ( &v15 != v1 )
  {
    v5 = *v1;
    if ( *v1 != (__int64 *)(v1 + 3) && v15 != (__int64 *)v18 )
    {
      *v1 = v15;
      v15 = v5;
      v6 = v1[1];
      v1[1] = v16;
      v16 = v6;
      v7 = v1[2];
      v1[2] = v17;
      v17 = v7;
LABEL_10:
      detail::vector_facade<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::clear(&v15);
      goto LABEL_11;
    }
    if ( detail::expandable_buffer_base<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4>::swap_helper<4>(
           v1,
           (__int64)&v15)
      || detail::expandable_buffer_base<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4>::swap_helper<4>(
           &v15,
           (__int64)v1) )
    {
      goto LABEL_10;
    }
    v10 = v16;
    v11 = v15;
    detail::vector_facade<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::clear(v1);
    v12 = detail::vector_facade<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::reserve_region(
            v1,
            0LL,
            v10 - v11)
        - (_QWORD)v11;
    while ( v11 != v10 )
    {
      v13 = *v11;
      *v11 = 0LL;
      *(__int64 *)((char *)v11++ + v12) = v13;
    }
  }
LABEL_11:
  detail::vector_facade<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::clear(&v15);
  v8 = v15;
  v9 = v15 == (__int64 *)v18;
  v15 = 0LL;
  if ( v9 )
    v8 = 0LL;
  operator delete(v8);
}
