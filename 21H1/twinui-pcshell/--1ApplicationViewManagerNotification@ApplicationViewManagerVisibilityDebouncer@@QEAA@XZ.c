/*
 * XREFs of ??1ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ @ 0x18016D13C
 * Callers:
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$17 @ 0x1800DBF80 (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$17.c)
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$9 @ 0x1800DBFA0 (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$9.c)
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$10 @ 0x1800DBFC0 (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$10.c)
 *     _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$1 @ 0x18016DB9E (_ApplicationViewManagerVisibilityDebouncer--ProcessPendingNotifications_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$6 @ 0x180292F13 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$6.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$7 @ 0x180292F1F (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$7.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::~ApplicationViewManagerNotification(
        ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
