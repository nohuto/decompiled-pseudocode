/*
 * XREFs of ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@QEAA@XZ @ 0x18040F798
 * Callers:
 *     _CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2_IVirtualDesktopNotification2_IVirtualDesktop___HSTRING______::_1_::dtor$0 @ 0x18040F0B8 (_CVirtualDesktopNotifications--_ForwardVirtualDesktopNotification2_IVirtualDesktopNotification2_.c)
 *     _CVirtualDesktopNotifications::_QueueNotification2_IVirtualDesktopNotification2_IVirtualDesktop___HSTRING_____Microsoft::WRL::ComPtr_IVirtualDesktop__Microsoft::WRL::Wrappers::HString__::_1_::dtor$0 @ 0x18040F40C (_CVirtualDesktopNotifications--_QueueNotification2_IVirtualDesktopNotification2_IVirtualDesktop_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

HRESULT __fastcall std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::Wrappers::HString>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::Wrappers::HString>(
        __int64 a1)
{
  HRESULT result; // eax

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 8));
  result = WindowsDeleteString(*(HSTRING *)a1);
  *(_QWORD *)a1 = 0LL;
  return result;
}
