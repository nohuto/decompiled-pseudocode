/*
 * XREFs of ?find_interface@?$implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180466510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Foundation::IAsyncInfo>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = *a2 - winrt::impl::guid_storage<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::value;
  if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::value )
    v2 = a2[1] + 0x214F5D52D6871056LL;
  v3 = 0LL;
  if ( !v2 )
  {
    v4 = a1 + 16;
    return v4 & -(__int64)(a1 != 0);
  }
  v5 = *a2 - *(_QWORD *)L"6";
  if ( *a2 == *(_QWORD *)L"6" )
    v5 = a2[1] - 0x46000000000000C0LL;
  if ( !v5 )
  {
    v4 = a1 + 24;
    return v4 & -(__int64)(a1 != 0);
  }
  return v3;
}
