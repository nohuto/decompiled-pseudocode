/*
 * XREFs of ?GetRuntimeClassName@?$implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@EEBA?AUhstring@2@XZ @ 0x1804634B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$runtime_class_name@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x180465E4C (-get@-$runtime_class_name@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@SA-AUhst.c)
 */

__int64 __fastcall winrt::implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Foundation::IAsyncInfo>::GetRuntimeClassName(
        __int64 a1,
        __int64 a2)
{
  winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get(a2);
  return a2;
}
