/*
 * XREFs of ??0CGlyphButtonElement@@QEAA@XZ @ 0x1803B2180
 * Callers:
 *     ??$MakeAndInitialize@VCGlyphButtonElement@@V1@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@AEAIAEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlyphButtonElement@@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@AEAIAEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1803B2048 (--$MakeAndInitialize@VCGlyphButtonElement@@V1@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x180394EA8 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIScrollButtonContainerHost@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCMultitaskingViewElementBase@@@Details@23@UIScrollButtonContainerHost@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1803A8670 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIScrollButtonConta.c)
 */

CGlyphButtonElement *__fastcall CGlyphButtonElement::CGlyphButtonElement(CGlyphButtonElement *this)
{
  CMultitaskingViewElementBase::CMultitaskingViewElementBase(this);
  *(_QWORD *)this = &CMultitaskingViewButtonElement::`vftable';
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollButtonContainerHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IScrollButtonContainerHost>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollButtonContainerHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IScrollButtonContainerHost>>((CGlyphButtonElement *)((char *)this + 216));
  *((_DWORD *)this + 57) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewButtonElement,IGlyphButton>::`vftable'{for `Microsoft::WRL::Details::Selector<CMultitaskingViewButtonElement,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewButtonElement>,IGlyphButton>>'};
  *((_QWORD *)this + 27) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewButtonElement,IGlyphButton>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IGlyphButton>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewButtonElement>,IGlyphButton>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_BYTE *)this + 412) = 1;
  *(_QWORD *)this = &CGlyphButtonElement::`vftable'{for `Microsoft::WRL::Details::Selector<CMultitaskingViewButtonElement,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewButtonElement>,IGlyphButton>>'};
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_DWORD *)this + 100) = 0;
  *((_DWORD *)this + 101) = 0;
  *((_QWORD *)this + 27) = &CGlyphButtonElement::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IGlyphButton>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewButtonElement>,IGlyphButton>>'};
  return this;
}
