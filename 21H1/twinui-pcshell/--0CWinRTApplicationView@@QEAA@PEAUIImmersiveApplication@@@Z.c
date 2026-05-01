/*
 * XREFs of ??0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z @ 0x18000E348
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x18000BBB0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18000E400 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCApplicationViewBase@@UIWinRTApplicat.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

CWinRTApplicationView *__fastcall CWinRTApplicationView::CWinRTApplicationView(
        CWinRTApplicationView *this,
        struct IImmersiveApplication *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &CWinRTApplicationView::`vftable'{for `IApplicationView'};
  *((_QWORD *)this + 1) = &CWinRTApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>'};
  *((_QWORD *)this + 2) = &CWinRTApplicationView::`vftable'{for `IApplicationViewBase'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewWithEnterpriseId>'};
  *((_QWORD *)this + 18) = &CWinRTApplicationView::`vftable';
  *((_QWORD *)this + 19) = &CWinRTApplicationView::`vftable'{for `IWinRTApplicationView'};
  *((_QWORD *)this + 20) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 26) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_BYTE *)this + 216) = 0;
  *(_QWORD *)((char *)this + 220) = 0LL;
  *((_BYTE *)this + 228) = 0;
  *((_QWORD *)this + 29) = 0LL;
  return this;
}
