/*
 * XREFs of ?OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1803603C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAVTabTipAdapter@KeyboardHosting@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0PP@G$$QEAPEAVTabTipAdapter@KeyboardHosting@@@Z @ 0x180357628 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAVTabTipAdapter@Key.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180467B48 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnRemotePolicyIsReady(KeyboardHosting::TabTipAdapter *this)
{
  __int64 v2; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  int v6[2]; // [rsp+20h] [rbp-228h] BYREF
  wchar_t v7[256]; // [rsp+30h] [rbp-218h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  memset_0(v7, 0, 0x1FEuLL);
  GetDesktopUniqueName(L"System\\RemoteTabTipPolicy", v7, 0xFFu);
  *(_QWORD *)v6 = (char *)this - 8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[255],KeyboardHosting::TabTipAdapter *>(
         (MessageProxyReconnectAdapter **)this + 6,
         v2,
         v7,
         (struct IMessageProxyReconnectAdapterOwner **)v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6C0,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
