/*
 * XREFs of ?InternalRelease@?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180289B48
 * Callers:
 *     ?RuntimeClassInitialize@TabViewManager@@QEAAJXZ @ 0x180276AB4 (-RuntimeClassInitialize@TabViewManager@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802890F8 (--$MakeAndInitialize@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@D.c)
 *     ??$MakeAndInitializeOrThrow@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@$$V@wil@@YA?AV?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180289290 (--$MakeAndInitializeOrThrow@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@$$V@w.c)
 *     ??1?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18028972C (--1-$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18028A3F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITab_ea_18028A3F0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker>::InternalRelease(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::Release(v1);
  }
  return result;
}
