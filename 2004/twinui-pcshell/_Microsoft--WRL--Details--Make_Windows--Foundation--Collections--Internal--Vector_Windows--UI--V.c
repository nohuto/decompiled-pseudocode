/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion______Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____const_&_Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____::permission__::_1_::dtor$0 @ 0x1803580E2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136EC0 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Microsoft::WRL::Details::Make_Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion______Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____const___Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____::permission__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(*(__int64 **)(a2 + 80));
  }
}
