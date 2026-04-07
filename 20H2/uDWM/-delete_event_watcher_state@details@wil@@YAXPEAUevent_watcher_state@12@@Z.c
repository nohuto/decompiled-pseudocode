/*
 * XREFs of ?delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z @ 0x180080AB0
 * Callers:
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18004AE18 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180080094 (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180080230 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

void __fastcall wil::details::delete_event_watcher_state(
        wil::details *this,
        struct wil::details::event_watcher_state *a2)
{
  if ( this )
    wil::details::event_watcher_state::`scalar deleting destructor'(this, a2);
}
