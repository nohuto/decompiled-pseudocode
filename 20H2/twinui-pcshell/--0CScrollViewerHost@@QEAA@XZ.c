/*
 * XREFs of ??0CScrollViewerHost@@QEAA@XZ @ 0x1803A8698
 * Callers:
 *     ??$MakeAndInitialize@VCScrollViewerHost@@V1@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollViewerHost@@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1803A858C (--$MakeAndInitialize@VCScrollViewerHost@@V1@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x180394EA8 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIScrollButtonContainerHost@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCMultitaskingViewElementBase@@@Details@23@UIScrollButtonContainerHost@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1803A8670 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIScrollButtonConta.c)
 */

CScrollViewerHost *__fastcall CScrollViewerHost::CScrollViewerHost(CScrollViewerHost *this)
{
  CScrollViewerHost *result; // rax

  CMultitaskingViewElementBase::CMultitaskingViewElementBase(this);
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollButtonContainerHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IScrollButtonContainerHost>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollButtonContainerHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IScrollButtonContainerHost>>((CScrollViewerHost *)((char *)this + 208));
  *((_DWORD *)this + 55) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IScrollButtonContainerHost>::`vftable'{for `Microsoft::WRL::Details::Selector<CMultitaskingViewElementBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IScrollButtonContainerHost>>'};
  *((_QWORD *)this + 26) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IScrollButtonContainerHost>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollButtonContainerHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IScrollButtonContainerHost>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CScrollViewerHost::`vftable'{for `Microsoft::WRL::Details::Selector<CMultitaskingViewElementBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IScrollButtonContainerHost>>'};
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 26) = &CScrollViewerHost::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollButtonContainerHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IScrollButtonContainerHost>>'};
  result = this;
  *((_QWORD *)this + 59) = 0LL;
  return result;
}
