/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_5ec6f88e9203a288a6d7bbdb0202202b___1_IInspectable___IInspectable___::Invoke @ 0x180474A50
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18000EF14 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1800133E0 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_5ec6f88e9203a288a6d7bbdb0202202b___1_IInspectable___IInspectable___::Invoke(
        __int64 a1,
        __int64 a2,
        struct IInspectable *a3)
{
  __int64 v3; // rbx
  struct IInspectable *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  v3 = a1 + 16;
  ExperienceManagerUtils::AsStrong<IInspectable>(&v5, (Microsoft::WRL::WeakRef *)(a1 + 16));
  if ( v5 )
    CSingleViewShellExperience::UnboostPriority(*(_QWORD *)(v3 + 8), 0);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  return 0LL;
}
