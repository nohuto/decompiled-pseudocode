/*
 * XREFs of _lambda_7814559f2e5978e3931afcf6062d6abe_::operator() @ 0x1801AE95C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_7814559f2e5978e3931afcf6062d6abe___::Invoke @ 0x1801AFB30 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AD97C (--$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@.c)
 *     ?SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z @ 0x1801B1040 (-SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z.c)
 *     ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x1801B24B0 (-put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B25C8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_7814559f2e5978e3931afcf6062d6abe_::operator()(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  int v6; // eax
  int v7; // eax
  CActionCenterExperienceManager *v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+48h] [rbp+10h]
  __int64 *v12; // [rsp+50h] [rbp+18h]
  struct IInspectable *v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a2;
  v13 = 0LL;
  Microsoft::WRL::WeakRef::As<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
    (Microsoft::WRL::WeakRef *)(a1 + 1),
    &v13);
  if ( v13 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)*a3 + 48LL))(*a3, &v10);
    if ( v6 < 0 )
      winrt::throw_hresult((unsigned int)v6);
    if ( !v10 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)*a3 + 56LL))(*a3, &v10);
      if ( v7 < 0 )
        winrt::throw_hresult((unsigned int)v7);
      v8 = (CActionCenterExperienceManager *)(*a1 + 24LL);
      if ( v10 == 1 )
        CActionCenterExperienceManager::SetVisibilityWithoutAnimations(v8, 0);
      else
        CActionCenterExperienceManager::put_IsVisible(v8, 0);
    }
  }
  result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( *a2 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(a2);
  if ( *a3 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(a3);
  return result;
}
