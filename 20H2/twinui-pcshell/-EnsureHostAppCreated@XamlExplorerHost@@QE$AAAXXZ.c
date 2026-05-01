/*
 * XREFs of ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1802ED254
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1802ECE84 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802EB25C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802EBC80 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA?AV?$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ @ 0x1802ED654 (-GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA-AV-$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ.c)
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1802EF640 (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall XamlExplorerHost::EnsureHostAppCreated(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 (__fastcall ****RuntimeSiteAggregator)(_QWORD, GUID *, _QWORD); // rax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD); // rdi
  __int64 (__fastcall *v5)(_QWORD, GUID *, _QWORD); // rbx
  int v6; // eax
  void *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v12)(_QWORD, __int64, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h]

  v2 = (__int64 *)(a1 + 88);
  if ( !*(_QWORD *)(a1 + 88) )
  {
    v12 = 0LL;
    RuntimeSiteAggregator = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))XamlExplorerHost::GetRuntimeSiteAggregator(
                                                                                 a1,
                                                                                 &v13);
    v4 = *RuntimeSiteAggregator;
    v5 = ***RuntimeSiteAggregator;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    v6 = v5(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v12);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        73LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v7 = Platform::Details::Heap::Allocate(0xE0uLL, 0xF8uLL);
    v13 = (__int64)v7;
    v8 = *(_QWORD *)(a1 + 40);
    v9 = __abi_winrt_cast_to(0, v12, (__int64)&_uuidof__AUIXamlMetadataProvider_Markup_Xaml_UI_Windows__);
    v14 = v9;
    v10 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp(v7, v9, v8);
    v13 = v10;
    __abi_winrt_ptr_assign(v2, v10);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
}
