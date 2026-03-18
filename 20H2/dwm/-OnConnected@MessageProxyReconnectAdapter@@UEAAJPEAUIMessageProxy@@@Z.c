/*
 * XREFs of ?OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x14000C680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000BE28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::OnConnected(
        MessageProxyReconnectAdapter *this,
        struct IMessageProxy *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**((_QWORD **)this + 5) + 32LL))(
         *((_QWORD *)this + 5),
         a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)v2);
  return 0LL;
}
