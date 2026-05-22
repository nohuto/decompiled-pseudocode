/*
 * XREFs of ?delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z @ 0x18008E2EC
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008D6C8 (--1-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1-del.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x18008D8D4 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUevent_watcher_state@23@@Z @ 0x18008E520 (-reset@-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1.c)
 * Callees:
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18008D734 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

void __fastcall wil::details::delete_event_watcher_state(
        wil::details *this,
        struct wil::details::event_watcher_state *a2)
{
  if ( this )
    wil::details::event_watcher_state::`scalar deleting destructor'(this, a2);
}
