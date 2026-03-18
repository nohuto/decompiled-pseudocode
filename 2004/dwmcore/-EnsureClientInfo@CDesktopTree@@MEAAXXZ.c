/*
 * XREFs of ?EnsureClientInfo@CDesktopTree@@MEAAXXZ @ 0x1800C2430
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x1800C2550 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     ?clear@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C26FC (-clear@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_e.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x1800C2724 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00V.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopTree::EnsureClientInfo(CDesktopTree *this)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r14
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v6; // rbp
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 5893) )
  {
    v2 = (_QWORD *)((char *)this + 5920);
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::clear((char *)this + 5920);
    v3 = *((_QWORD *)this + 716);
    v4 = *((_QWORD *)this + 717);
    while ( v3 != v4 )
    {
      v7 = 0LL;
      v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(_QWORD *)v3
                                                           + 8LL
                                                           + *(int *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + 4LL));
      if ( (**v5)(v5, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v7) >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
        if ( v6 )
          *(_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                       v2,
                       (__int64)(v2[1] - *v2) >> 3) = v6;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v7);
      v3 += 8LL;
    }
    if ( *((_BYTE *)this + 5893) )
    {
      CVisualTree::UpdateClientBounds(this);
      *((_BYTE *)this + 5893) = 0;
    }
  }
}
