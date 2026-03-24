/*
 * XREFs of ?UnpinResources@CD3DDevice@@QEAAXV?$span@PEAUIDXGIResource@@$0?0@gsl@@_N@Z @ 0x180240818
 * Callers:
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x1801F91E0 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x180025B70 (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180090244 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x18017A1D4 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x1802410D0 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DD.c)
 */

void __fastcall CD3DDevice::UnpinResources(__int64 a1, unsigned __int64 *a2, char a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // r15
  _QWORD *v6; // r14
  __int64 *v7; // rax
  unsigned __int64 CurrentFrameId; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  void (__fastcall *v13)(__int64, __int64, _QWORD); // rbx
  __int64 v14; // rax
  __int64 v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  if ( a3 )
  {
    v12 = *(_QWORD *)(a1 + 584);
    v13 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 32LL);
    v14 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, 0LL);
    v13(v12, v14, *(unsigned int *)a2);
  }
  else if ( *(_DWORD *)a2 )
  {
    v5 = *(unsigned int *)a2;
    v6 = (_QWORD *)(a1 + 1232);
    do
    {
      v7 = (__int64 *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v3);
      wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
        v15,
        *v7);
      CurrentFrameId = GetCurrentFrameId();
      v9 = (__int64)(v6[1] - *v6) >> 4;
      v10 = CurrentFrameId + 1;
      v15[1] = CurrentFrameId + 1;
      v11 = (_QWORD *)detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::reserve_region(
                        v6,
                        v9);
      wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
        v11,
        v15[0]);
      v11[1] = v10;
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v15);
      ++v3;
      --v5;
    }
    while ( v5 );
  }
}
