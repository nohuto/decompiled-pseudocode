/*
 * XREFs of ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x18009897C
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180098880 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801BDFB4 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionSurfaceInfo@@@Z @ 0x180057BB8 (--4-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompo.c)
 *     ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z @ 0x18009791C (-UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180098DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVICompositionSurfaceInfoListener@@_K0@Z @ 0x180099070 (-reserve_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVIComposi.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::SetSurfaceInfo(
        CCompositionSurfaceBitmap *this,
        struct CCompositionSurfaceInfo *a2)
{
  __int64 *v2; // r14
  CCompositionSurfaceInfo *v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (__int64 *)((char *)this + 96);
  v4 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 12);
  if ( v4 != a2 )
  {
    if ( v4 )
      CCompositionSurfaceInfo::UnRegisterBitmapNotifier(v4, (CCompositionSurfaceBitmap *)((char *)this + 80));
    wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::operator=(v2, (__int64)a2);
    if ( *v2 )
    {
      *(_QWORD *)detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::reserve_region(
                   *v2 + 48,
                   (__int64)(*(_QWORD *)(*v2 + 56) - *(_QWORD *)(*v2 + 48)) >> 3) = (char *)this + 80;
      v6 = *((_QWORD *)this + 6);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 40);
        if ( v7 )
          (*(void (__fastcall **)(struct CCompositionSurfaceInfo *, _QWORD))(*(_QWORD *)a2 + 312LL))(
            a2,
            *(unsigned int *)(v7 + 128));
      }
    }
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
}
