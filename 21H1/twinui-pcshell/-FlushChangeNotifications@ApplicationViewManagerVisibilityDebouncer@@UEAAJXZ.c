/*
 * XREFs of ?FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x18016D640
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x18016E138 (-DispatchNotifications@NotificationDispatcher@@QEAAXXZ.c)
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::FlushChangeNotifications(NotificationDispatcher **this)
{
  NotificationDispatcher::DispatchNotifications(this[10]);
  return 0LL;
}
