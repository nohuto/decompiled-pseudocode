/*
 * XREFs of ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x14000CD70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000735C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000BE28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000C33C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::s_AttemptPullProxy(MessageProxyReconnectAdapter *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v2 = MessageProxyReconnectAdapter::AttemptPullProxy(a1);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA5,
        (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
        (const char *)(unsigned int)v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
