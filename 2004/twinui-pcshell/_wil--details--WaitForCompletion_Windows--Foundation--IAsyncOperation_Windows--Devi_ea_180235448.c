/*
 * XREFs of _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate::RuntimeClassInitialize @ 0x180235448
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::_2_::CompletionDelegate__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::_2_::CompletionDelegate_ @ 0x18022E270 (Microsoft--WRL--Details--MakeAndInitialize__wil--details--WaitForCompletion_Windows--Foundation-.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_______::_2_::CompletionDelegate__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_______::_2_::CompletionDelegate_ @ 0x180284FE0 (Microsoft--WRL--Details--MakeAndInitialize__wil--details--WaitForCompletion_Windows_ea_180284FE0.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_bool_____::_2_::CompletionDelegate__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_bool_____::_2_::CompletionDelegate_ @ 0x1802AF584 (Microsoft--WRL--Details--MakeAndInitialize__wil--details--WaitForCompletion_Windows_ea_1802AF584.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_ @ 0x18044D9D4 (Microsoft--WRL--Details--MakeAndInitialize__wil--details--WaitForCompletion_Windows_ea_18044D9D4.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139C44 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18013C9FC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 */

__int64 __fastcall wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate::RuntimeClassInitialize(
        __int64 a1)
{
  __int64 v2; // rdx
  wil::details *v3; // rcx
  wil::details *Event; // rbx
  __int64 v5; // r8
  const char *v6; // r9
  signed int LastErrorFailHr; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)(a1 + 56),
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v3, v2, v5, v6);
  }
  if ( LastErrorFailHr < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)LastErrorFailHr);
  return (unsigned int)LastErrorFailHr;
}
