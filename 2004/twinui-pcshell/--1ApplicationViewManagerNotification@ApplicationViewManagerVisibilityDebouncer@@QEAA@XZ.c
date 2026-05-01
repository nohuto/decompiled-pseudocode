/*
 * XREFs of ??1ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ @ 0x1801910AC
 * Callers:
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$17 @ 0x180100DF0 (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$17.c)
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$9 @ 0x180100E10 (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$9.c)
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$10 @ 0x180100E30 (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$10.c)
 *     _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$1 @ 0x180191B0E (_ApplicationViewManagerVisibilityDebouncer--ProcessPendingNotifications_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$6 @ 0x1802B4B53 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$6.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$7 @ 0x1802B4B5F (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$7.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::~ApplicationViewManagerNotification(
        ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
