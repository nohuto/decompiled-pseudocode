/*
 * XREFs of ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000CD10
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000C33C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x14000AC7C (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000BE28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v1);
  }
  return 0LL;
}
