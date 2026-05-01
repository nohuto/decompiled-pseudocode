/*
 * XREFs of ?get@?$runtime_class_name@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1804665CC
 * Callers:
 *     ?GetRuntimeClassName@?$implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@EEBA?AUhstring@2@XZ @ 0x180463C50 (-GetRuntimeClassName@-$implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundati.c)
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1804643DC (-NonDelegatingGetRuntimeClassName@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOp.c)
 * Callees:
 *     WINRT_WindowsCreateString @ 0x18008E961 (WINRT_WindowsCreateString.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B25C8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

HSTRING *__fastcall winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::get(
        HSTRING *a1)
{
  HRESULT v2; // eax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = 0LL;
  v2 = WINRT_WindowsCreateString(L"Windows.Foundation.IAsyncOperation`1<UInt32>", 0x2Cu, &string);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  *a1 = string;
  return a1;
}
