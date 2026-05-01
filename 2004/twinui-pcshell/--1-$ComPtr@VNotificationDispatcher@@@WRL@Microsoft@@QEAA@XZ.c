/*
 * XREFs of ??1?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x180146E50
 * Callers:
 *     _CApplicationManager::_HandleCreation_EnsureApplicationView_::_1_::dtor$2 @ 0x180100132 (_CApplicationManager--_HandleCreation_EnsureApplicationView_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleCreation_EnsureApplicationView_::_1_::dtor$3 @ 0x180100144 (_CApplicationManager--_HandleCreation_EnsureApplicationView_--_1_--dtor$3.c)
 *     _NotificationDispatcher::WndProc_::_1_::dtor$0 @ 0x180103791 (_NotificationDispatcher--WndProc_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<NotificationDispatcher>::~ComPtr<NotificationDispatcher>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(a1);
}
