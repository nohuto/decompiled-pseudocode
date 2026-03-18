/*
 * XREFs of ?DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x180005AD0
 * Callers:
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180005100 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x1800081E8 (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     ??0?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIResource@@@Z @ 0x1800088CC (--0-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIResource@@@Z.c)
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x180008908 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DD.c)
 *     ?IsXbox@CD3DDevice@@QEBA_NXZ @ 0x180066F20 (-IsXbox@CD3DDevice@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CD3DDevice::DelayUnpinResources(CD3DDevice *this, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 i; // r15
  __int64 v8; // rbp
  int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a5; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned __int64)(unsigned int)i >= *a5 )
    {
      gsl::details::terminate(this);
      JUMPOUT(0x180005BBELL);
    }
    v8 = *(_QWORD *)(a5[1] + 8 * i);
    v9 = CD3DDevice::IsXbox(this) ? 3 : 1;
    v10 = detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::reserve_region(
            (char *)this + 1200,
            (__int64)(*((_QWORD *)this + 151) - *((_QWORD *)this + 150)) >> 5);
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::com_ptr_t<IDXGIResource,wil::err_returncode_policy>(
      v10,
      v8);
    wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
      v10 + 8,
      a2);
    v11 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 16) = a3;
    *(_DWORD *)(v10 + 24) = a4;
    *(_DWORD *)(v10 + 28) = v9;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 176LL))(v11);
  }
}
