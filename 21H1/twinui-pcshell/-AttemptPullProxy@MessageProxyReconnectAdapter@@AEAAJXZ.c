/*
 * XREFs of ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804436C8
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180443C28 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180443F10 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18011C58C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180129748 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804437CC (-CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180443EBC (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::AttemptPullProxy(MessageProxyReconnectAdapter *this)
{
  unsigned int RemoteProxy; // eax
  int v3; // ebx
  __int64 v4; // rdx
  const char *v6; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    (void *)0xAF,
    (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)0x8000FFFFLL,
    *((_QWORD *)this + 8) != 0LL,
    (bool)"Not expecting to pull a proxy when we have one",
    v6);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
  ++*((_DWORD *)this + 10);
  RemoteProxy = MessageProxyReconnectAdapter::CreateRemoteProxy(this);
  v3 = RemoteProxy;
  if ( RemoteProxy )
  {
    if ( ((RemoteProxy + 2018375675) & 0xFFFFFFFB) != 0 )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        223LL,
        (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
        (const char *)RemoteProxy);
    }
    else if ( *((_DWORD *)this + 10) >= MessageProxyReconnectAdapter::ms_uiProxyConnectionAttemptLimit )
    {
      if ( MessageProxyReconnectAdapter::ms_uiProxyConnectionAttemptLimit )
      {
        MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
        if ( v3 < 0 )
        {
          v4 = 218LL;
          goto LABEL_4;
        }
      }
    }
  }
  else
  {
    v3 = MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
    if ( v3 < 0 )
    {
      v4 = 201LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
  return 0LL;
}
