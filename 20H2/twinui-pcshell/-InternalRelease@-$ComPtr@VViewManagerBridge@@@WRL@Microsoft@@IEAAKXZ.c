/*
 * XREFs of ?InternalRelease@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ @ 0x1802A3AE0
 * Callers:
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAVViewManagerBridge@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18029E498 (--$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 *     ??1?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAA@XZ @ 0x18029FF4C (--1-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x1802A030C (--1ViewEventDispatcher@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x1802A5974 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 *     _lambda_f2f8653dbdef2d27cb8873abae1874da_::_lambda_invoker_cdecl_ @ 0x1802BA720 (_lambda_f2f8653dbdef2d27cb8873abae1874da_--_lambda_invoker_cdecl_.c)
 *     ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x1802C1408 (-RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802A5340 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVi_ea_1802A5340.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewManagerBridge>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
