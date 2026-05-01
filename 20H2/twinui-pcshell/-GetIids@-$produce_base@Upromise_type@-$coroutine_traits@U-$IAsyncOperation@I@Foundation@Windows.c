/*
 * XREFs of ?GetIids@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180463120
 * Callers:
 *     <none>
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x18008E333 (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1800F03F3 (memmove_0.c)
 */

__int64 __fastcall winrt::impl::produce_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::GetIids(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void *v4; // rax
  unsigned int v5; // ebx

  *a2 = 2;
  v4 = _Platform_CoTaskMemAlloc(0x20uLL);
  *a3 = v4;
  v5 = 0;
  if ( v4 )
    memmove_0(
      v4,
      &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Foundation::IAsyncInfo>>::value,
      0x20uLL);
  else
    return (unsigned int)-2147024882;
  return v5;
}
