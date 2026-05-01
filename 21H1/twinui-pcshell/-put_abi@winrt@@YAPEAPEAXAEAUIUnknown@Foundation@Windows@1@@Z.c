/*
 * XREFs of ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x18040BEDC
 * Callers:
 *     ??$wait_get@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUWindowTabDataModel@Shell@UI@Internal@Windows@1@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@61@@Z @ 0x1800B3B9C (--$wait_get@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@.c)
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800B75C4 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___lambda_9149871aec59121227803e9d8e93736d___::Invoke @ 0x1800B8370 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--UI.c)
 *     ??D?$fast_iterator@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUWindowTabView@Shell@UI@Internal@Windows@2@XZ @ 0x1800BEBF4 (--D-$fast_iterator@U-$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@F.c)
 *     ??$wait_get@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUIRandomAccessStreamReference@Streams@Storage@Windows@1@AEBU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@51@@Z @ 0x1800C0EDC (--$wait_get@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Fou.c)
 *     ??$wait_get@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@1@AEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@51@@Z @ 0x1800C0FB4 (--$wait_get@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800C9008 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 */

void **__fastcall winrt::put_abi(winrt *this, struct IUnknown *a2)
{
  if ( *(_QWORD *)this )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)this);
  return (void **)this;
}
