/*
 * XREFs of winrt::impl::factory_cache_entry_winrt::Windows::Graphics::Capture::GraphicsCaptureItem_IGraphicsCaptureItemInterop_::call__lambda_2c048fadf96b8b63389f9249f9153b42__&_ @ 0x18042EB48
 * Callers:
 *     _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x18042EE90 (_anonymous_namespace_--CreateGraphicsCaptureItem.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180060B80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x180091E7D (WINRT_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIGraphicsCaptureItemInterop@@@winrt@@YA?AU?$com_ptr@UIGraphicsCaptureItemInterop@@@0@AEBUhstring@param@0@@Z @ 0x18042ECD8 (--$get_activation_factory@UIGraphicsCaptureItemInterop@@@winrt@@YA-AU-$com_ptr@UIGraphicsCapture.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18042F20C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::factory_cache_entry_winrt::Windows::Graphics::Capture::GraphicsCaptureItem_IGraphicsCaptureItemInterop_::call__lambda_2c048fadf96b8b63389f9249f9153b42____(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v5; // rax
  bool v6; // si
  __int64 v7; // rcx
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING string[4]; // [rsp+48h] [rbp-28h] BYREF

  v10 = a2;
  _InterlockedIncrement64(&qword_1805CD498);
  v3 = `winrt::impl::call_factory<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop,_lambda_2c048fadf96b8b63389f9249f9153b42_>'::`2'::factory;
  if ( `winrt::impl::call_factory<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop,_lambda_2c048fadf96b8b63389f9249f9153b42_>'::`2'::factory )
  {
    *a2 = `winrt::impl::call_factory<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop,_lambda_2c048fadf96b8b63389f9249f9153b42_>'::`2'::factory;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    _InterlockedDecrement64(&qword_1805CD498);
  }
  else
  {
    _InterlockedDecrement64(&qword_1805CD498);
    v12[0] = L"Windows.Graphics.Capture.GraphicsCaptureItem";
    v12[1] = 44LL;
    winrt::param::hstring::hstring(string, (__int64)v12);
    winrt::get_activation_factory<IGraphicsCaptureItemInterop>(&v9, string);
    v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v9;
    if ( v9 )
    {
      v11 = 0LL;
      (**v9)(v9, &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value, &v11);
      v5 = v11;
    }
    else
    {
      v5 = 0LL;
    }
    v10 = (_QWORD *)v5;
    v6 = v5 != 0;
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v10);
    if ( v6 )
    {
      _InterlockedIncrement64(&qword_1805CD498);
      v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v9;
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop,_lambda_2c048fadf96b8b63389f9249f9153b42_>'::`2'::factory,
              (signed __int64)v9,
              0LL) )
      {
        v9 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1805CD4A0);
        v4 = 0LL;
      }
      v7 = `winrt::impl::call_factory<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop,_lambda_2c048fadf96b8b63389f9249f9153b42_>'::`2'::factory;
      *a2 = `winrt::impl::call_factory<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop,_lambda_2c048fadf96b8b63389f9249f9153b42_>'::`2'::factory;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      _InterlockedDecrement64(&qword_1805CD498);
    }
    else
    {
      *a2 = v4;
      if ( v4 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v4)[1])(v4);
    }
    if ( v4 )
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v9);
  }
  return a2;
}
