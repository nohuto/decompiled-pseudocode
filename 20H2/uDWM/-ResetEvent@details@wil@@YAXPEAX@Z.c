/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180080688
 * Callers:
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x180017FF0 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004A1D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?wait_callback@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180080C70 (-wait_callback@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@de.c)
 *     ?ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ @ 0x180086A14 (-ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007F1C4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  __int64 v2; // r8
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x921, v2, v3);
    __debugbreak();
  }
}
