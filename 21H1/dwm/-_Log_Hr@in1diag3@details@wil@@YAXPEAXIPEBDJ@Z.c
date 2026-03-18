/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000BE28
 * Callers:
 *     ?OnConnected@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z @ 0x14000AD30 (-OnConnected@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnHotKeyAllKeysUp@HotKeyClient@@UEAAJIII_K@Z @ 0x14000AF70 (-OnHotKeyAllKeysUp@HotKeyClient@@UEAAJIII_K@Z.c)
 *     ?OnHotKeyDetected@HotKeyClient@@UEAAJIII_K@Z @ 0x14000AFC0 (-OnHotKeyDetected@HotKeyClient@@UEAAJIII_K@Z.c)
 *     ?OnProxyCreated@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z @ 0x14000B010 (-OnProxyCreated@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x14000C680 (-OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x14000C6C0 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x14000C7A0 (-OnPropertyChanged@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000CC08 (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000CD10 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x14000CD70 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x140007294 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
}
