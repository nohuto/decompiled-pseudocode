/*
 * XREFs of ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180467078
 * Callers:
 *     ?OnDisconnected@TabTipAdapter@KeyboardHosting@@UEAAJPEAUIMessageProxy@@@Z @ 0x18035E380 (-OnDisconnected@TabTipAdapter@KeyboardHosting@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180365B8C (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18046762C (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::Dispose(MessageProxyReconnectAdapter *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *((_QWORD *)this + 8);
    if ( v5
      && (v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 64LL))(v5, (char *)this + 8), v7 = v6, v6 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
      *((_QWORD *)this + 6) = 0LL;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
