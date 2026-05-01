/*
 * XREFs of ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAVViewManagerBridge@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18029ED88
 * Callers:
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x1802A6264 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18016B094 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewMana.c)
 *     ??0ViewManagerBridge@@QEAA@XZ @ 0x1802A062C (--0ViewManagerBridge@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAAXPEAVViewManagerBridge@@@Z @ 0x1802A2318 (-Attach@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAAXPEAVViewManagerBridge@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ @ 0x1802A43D0 (-InternalRelease@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x1802C1CF8 (-RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewManagerBridge,ViewManagerBridge,ViewEventDispatcher *>(
        ViewManagerBridge **a1,
        struct ViewEventDispatcher **a2)
{
  ViewManagerBridge *v4; // rax
  int v5; // edi
  ViewManagerBridge *v6; // rax
  struct ViewEventDispatcher *v7; // rdx
  ViewManagerBridge *v8; // rbx
  volatile int *v9; // rdx
  ViewManagerBridge *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (ViewManagerBridge *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ViewManagerBridge::ViewManagerBridge(v4);
    v11 = 0LL;
    Microsoft::WRL::ComPtr<ViewManagerBridge>::Attach(&v11, v6);
    v7 = *a2;
    v8 = v11;
    v5 = ViewManagerBridge::RuntimeClassInitialize(v11, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::InternalAddRef(
          (__int64)v8,
          v9);
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<ViewManagerBridge>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
