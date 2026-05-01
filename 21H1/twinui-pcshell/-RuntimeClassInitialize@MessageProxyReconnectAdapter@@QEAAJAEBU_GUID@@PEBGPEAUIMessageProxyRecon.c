/*
 * XREFs of ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180443C28
 * Callers:
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAVTabTipAdapter@KeyboardHosting@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0PP@G$$QEAPEAVTabTipAdapter@KeyboardHosting@@@Z @ 0x180336A98 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAVTabTipAdapter@Key.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18008550C (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804436C8 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180443DB4 (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::RuntimeClassInitialize(
        MessageProxyReconnectAdapter *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner *a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rbx
  int started; // eax
  __int64 v10; // rdx
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const wchar_t *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  if ( a3 )
  {
    if ( !a4 )
    {
      v6 = 60LL;
      goto LABEL_3;
    }
    *(struct _GUID *)((char *)this + 24) = *a2;
    v7 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(
           (MessageProxyReconnectAdapter *)((char *)this + 88),
           &v14);
    if ( v7 < 0 )
    {
      v6 = 63LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 6) = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
    v7 = CoreUICreate((char *)this + 72);
    if ( v7 < 0 )
    {
      v6 = 66LL;
      goto LABEL_4;
    }
    v12[0] = 0LL;
    v8 = *((_QWORD *)this + 9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
    started = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 40LL))(v8, v12);
    v7 = started;
    if ( started >= 0 )
    {
      started = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12[0] + 56LL))(v12[0]);
      v7 = started;
      if ( started >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
        started = CoreUIFactoryCreate((char *)this + 56);
        v7 = started;
        if ( started >= 0 )
        {
          started = MessageProxyReconnectAdapter::AttemptPullProxy(this);
          v7 = started;
          if ( started >= 0 )
          {
            if ( *((_QWORD *)this + 8)
              || (started = MessageProxyReconnectAdapter::StartConnectionRetryTimer(this), v7 = started, started >= 0) )
            {
              v7 = 0;
              goto LABEL_24;
            }
            v10 = 81LL;
          }
          else
          {
            v10 = 77LL;
          }
        }
        else
        {
          v10 = 75LL;
        }
      }
      else
      {
        v10 = 73LL;
      }
    }
    else
    {
      v10 = 72LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)started);
LABEL_24:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
    return (unsigned int)v7;
  }
  v6 = 59LL;
LABEL_3:
  v7 = -2147024809;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
