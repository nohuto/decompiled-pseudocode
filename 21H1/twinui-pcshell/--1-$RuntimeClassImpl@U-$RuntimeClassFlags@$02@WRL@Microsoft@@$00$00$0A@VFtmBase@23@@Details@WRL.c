/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180427A7C
 * Callers:
 *     ??1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ @ 0x180427AB0 (--1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180427D10 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180079540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 32));
}
