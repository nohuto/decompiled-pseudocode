/*
 * XREFs of ?StartExtendedSwipe@TabletModeViewManager@@UEAAJUtagPOINT@@I0@Z @ 0x1803E1700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabletModeViewManager::StartExtendedSwipe(
        TabletModeViewManager *this,
        struct tagPOINT a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TabletModeViewManager::StartSwipeHelper)(
           (char *)this - 96,
           a3,
           a2,
           0LL);
}
