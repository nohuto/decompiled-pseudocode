/*
 * XREFs of ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180467D2C
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180467538 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180467778 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::StopConnectionRetryTimer(MessageProxyReconnectAdapter *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 80);
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x133,
        (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
        (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  }
  return 0LL;
}
