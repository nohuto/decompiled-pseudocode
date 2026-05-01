/*
 * XREFs of ??$wait_get@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhstring@1@AEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@@Z @ 0x18009542C
 * Callers:
 *     ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1800662D0 (-TryGetCortanaAumid@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1801C7A58 (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18033C468 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 * Callees:
 *     ??$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@I@Z @ 0x1800661F4 (--$wait_for_completed@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@.c)
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@Uhstring@4@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800954D0 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@Uhstring@winrt@@@Fou.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18018E8E8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = *a2;
  if ( *a2 )
  {
    v8 = 0LL;
    (**(void (__fastcall ***)(__int64, const wchar_t *, __int64 *))v4)(v4, L"6", &v8);
    v4 = v8;
  }
  v9 = v4;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 56LL))(v4, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v9);
  if ( !v7 )
    winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>>(a2);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>,winrt::hstring>::GetResults(
    a2,
    a1);
  return a1;
}
