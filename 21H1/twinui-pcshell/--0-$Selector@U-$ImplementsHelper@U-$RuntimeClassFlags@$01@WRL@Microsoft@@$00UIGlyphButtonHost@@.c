/*
 * XREFs of ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIGlyphButtonHost@@UIScrollButtonContainer@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCMultitaskingViewElementBase@@@Details@23@UIGlyphButtonHost@@UIScrollButtonContainer@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180399470
 * Callers:
 *     ??0CScrollButtonContainer@@QEAA@XZ @ 0x1803994B8 (--0CScrollButtonContainer@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800BAF18 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IGlyphButtonHost,IScrollButtonContainer>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IGlyphButtonHost,IScrollButtonContainer>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IGlyphButtonHost,IScrollButtonContainer>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IGlyphButtonHost,IScrollButtonContainer>>(
        __int64 a1)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  *(_QWORD *)a1 = &IAppViewDataSourceAdapter::`vftable';
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  return a1;
}
