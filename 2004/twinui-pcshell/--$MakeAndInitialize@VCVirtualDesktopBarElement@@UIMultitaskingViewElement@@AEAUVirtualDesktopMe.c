/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopBarElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@$$QEAPEAUIObservableObjectArray@@$$QEAPEAUIVirtualDesktopElementFactory@@$$QEAPEAUISwitchThumbnailFactory@@@Z @ 0x180398C60
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1803996C0 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0CVirtualDesktopBarElement@@QEAA@XZ @ 0x180399044 (--0CVirtualDesktopBarElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1803AE994 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopBarElement,IMultitaskingViewElement,VirtualDesktopMetrics &,Geometry::CRect const &,IObservableObjectArray *,IVirtualDesktopElementFactory *,ISwitchThumbnailFactory *>(
        _QWORD *a1,
        const struct VirtualDesktopMetrics *a2,
        const struct Geometry::CRect *a3,
        struct IObservableObjectArray **a4,
        struct IVirtualDesktopElementFactory **a5,
        struct ISwitchThumbnailFactory **a6)
{
  CVirtualDesktopBarElement *v10; // rax
  int v11; // edi
  CVirtualDesktopBarElement *v12; // rbx

  *a1 = 0LL;
  v10 = (CVirtualDesktopBarElement *)operator new(0x310uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = CVirtualDesktopBarElement::CVirtualDesktopBarElement(v10);
    v11 = CVirtualDesktopBarElement::RuntimeClassInitialize(v12, a2, a3, *a4, *a5, *a6);
    if ( v11 >= 0 )
      v11 = (**(__int64 (__fastcall ***)(CVirtualDesktopBarElement *, GUID *, _QWORD *))v12)(
              v12,
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              a1);
    if ( v12 )
      (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
