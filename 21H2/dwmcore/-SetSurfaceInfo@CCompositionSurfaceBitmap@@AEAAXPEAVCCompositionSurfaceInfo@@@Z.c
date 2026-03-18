/*
 * XREFs of ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C78C0
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x1800C77C0 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18020FDD0 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z @ 0x1800C76C4 (-UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z.c)
 *     ??4?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionSurfaceInfo@@@Z @ 0x1800C7988 (--4-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompo.c)
 *     ?reserve_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVICompositionSurfaceInfoListener@@_K0@Z @ 0x1800C79F0 (-reserve_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVIComposi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::SetSurfaceInfo(
        CCompositionSurfaceBitmap *this,
        struct CCompositionSurfaceInfo *a2)
{
  char *v2; // rsi
  CCompositionSurfaceInfo *v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (char *)this + 104;
  v4 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 13);
  if ( v4 != a2 )
  {
    if ( v4 )
      CCompositionSurfaceInfo::UnRegisterBitmapNotifier(v4, (CCompositionSurfaceBitmap *)((char *)this + 88));
    wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::operator=(v2, a2);
    if ( *(_QWORD *)v2 )
    {
      *(_QWORD *)detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::reserve_region(
                   *(_QWORD *)v2 + 48LL,
                   (__int64)(*(_QWORD *)(*(_QWORD *)v2 + 56LL) - *(_QWORD *)(*(_QWORD *)v2 + 48LL)) >> 3) = (char *)this + 88;
      v6 = *((_QWORD *)this + 6);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 48);
        if ( v7 )
          (*(void (__fastcall **)(struct CCompositionSurfaceInfo *, _QWORD))(*(_QWORD *)a2 + 408LL))(
            a2,
            *(unsigned int *)(v7 + 128));
      }
    }
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
}
