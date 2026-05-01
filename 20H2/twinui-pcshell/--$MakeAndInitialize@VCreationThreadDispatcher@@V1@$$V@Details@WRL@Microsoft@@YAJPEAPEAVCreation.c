/*
 * XREFs of ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801E6A38
 * Callers:
 *     _lambda_78c4d568eef31da123ac7a5ea8376aa4_::operator() @ 0x1800D1364 (_lambda_78c4d568eef31da123ac7a5ea8376aa4_--operator().c)
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801E9DD8 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ @ 0x1801F41F8 (-RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@ImmersiveShellStressTool@@QEAAJXZ @ 0x180216694 (-RuntimeClassInitialize@ImmersiveShellStressTool@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ @ 0x1802423AC (-RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ.c)
 *     _lambda_74683e00bb44ac1c285a2f54870ed16f_::operator() @ 0x180293E1C (_lambda_74683e00bb44ac1c285a2f54870ed16f_--operator().c)
 *     ??$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA?AV?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@XZ @ 0x180322B74 (--$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA-AV-$ComPtr@VCreationThreadDis.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x180370484 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18038A490 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139D9C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ??0CreationThreadDispatcher@@QEAA@XZ @ 0x1801E71AC (--0CreationThreadDispatcher@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E87F0 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x1801EA348 (-RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(
        CreationThreadDispatcher **a1)
{
  CreationThreadDispatcher *v2; // rax
  int v3; // ebx
  CreationThreadDispatcher *v4; // rdi
  volatile int *v5; // rdx
  CreationThreadDispatcher *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (CreationThreadDispatcher *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v7 = CreationThreadDispatcher::CreationThreadDispatcher(v2);
    v4 = v7;
    v3 = CreationThreadDispatcher::RuntimeClassInitialize(v7);
    if ( v3 >= 0 )
    {
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
          (__int64)v4,
          v5);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
