/*
 * XREFs of _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x18040BB60
 * Callers:
 *     ?GetGraphicsCaptureItemForAllDisplays@ScreenClippingBrokerImpl@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18040BD00 (-GetGraphicsCaptureItemForAllDisplays@ScreenClippingBrokerImpl@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18018E8E8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::Graphics::Capture::GraphicsCaptureItem_IGraphicsCaptureItemInterop_::call__lambda_2c048fadf96b8b63389f9249f9153b42__&_ @ 0x18040B818 (winrt--impl--factory_cache_entry_winrt--Windows--Graphics--Capture--GraphicsCaptureItem_IGraphic.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18040BF00 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall anonymous_namespace_::CreateGraphicsCaptureItem(_QWORD *a1, __int64 a2)
{
  signed int v3; // eax
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  winrt::impl::factory_cache_entry_winrt::Windows::Graphics::Capture::GraphicsCaptureItem_IGraphicsCaptureItemInterop_::call__lambda_2c048fadf96b8b63389f9249f9153b42____(
    (__int64)a1,
    &v5);
  *a1 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, _QWORD *))(*(_QWORD *)v5 + 32LL))(
         v5,
         0LL,
         &winrt::impl::guid_storage<winrt::Windows::Graphics::Capture::IGraphicsCaptureItem>::value,
         a1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v5);
  return a1;
}
