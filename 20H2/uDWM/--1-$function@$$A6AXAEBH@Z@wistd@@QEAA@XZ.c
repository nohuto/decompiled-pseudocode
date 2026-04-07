/*
 * XREFs of ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x18004A9B4
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18004A854 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x18004B070 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x180050904 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180080230 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180080284 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ??1?$wnf_subscription_state@H@details@wil@@UEAA@XZ @ 0x180095738 (--1-$wnf_subscription_state@H@details@wil@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function<void (int const &)>::~function<void (int const &)>(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
