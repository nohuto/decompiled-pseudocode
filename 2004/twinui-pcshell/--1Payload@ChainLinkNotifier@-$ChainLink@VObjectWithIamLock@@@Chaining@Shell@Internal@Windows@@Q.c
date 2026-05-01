/*
 * XREFs of ??1Payload@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x18017A460
 * Callers:
 *     _SystemTray::TrayInfoTipDisplayInfo::InitProperties_::_1_::dtor$1 @ 0x18037CAC1 (_SystemTray--TrayInfoTipDisplayInfo--InitProperties_--_1_--dtor$1.c)
 *     _CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2_IVirtualDesktopNotification_IVirtualDesktop___IVirtualDesktop____::_1_::dtor$0 @ 0x180432C90 (_CVirtualDesktopNotifications--_ForwardVirtualDesktopNotification2_IVirtualDesktopN_ea_180432C90.c)
 *     _CVirtualDesktopNotifications::_QueueNotification2_IVirtualDesktopNotification_IVirtualDesktop___IVirtualDesktop___Microsoft::WRL::ComPtr_IVirtualDesktop__Microsoft::WRL::ComPtr_IVirtualDesktop____::_1_::dtor$0 @ 0x180433086 (_CVirtualDesktopNotifications--_QueueNotification2_IVirtualDesktopNotification_IVir_ea_180433086.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
