/*
 * XREFs of _lambda_66ce9afb50b67cbc7485265ee56e16fa_::operator() @ 0x1802ECA1C
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_66ce9afb50b67cbc7485265ee56e16fa_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1802EC0B0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_66ce9afb50b67cbc7485265ee56e16fa_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802EB25C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802EBC80 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x18033BA00 (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_66ce9afb50b67cbc7485265ee56e16fa_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, GUID *, GUID *, struct IApplicationViewCollection **); // rbx
  int v4; // eax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, SID *, GUID *, struct IApplicationViewIconLoader **); // rbx
  int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, SID *, GUID *, struct IImmersiveShellHookService **); // rbx
  int v10; // eax
  int v11; // eax
  struct IAppViewDataSourceAdapter *v12; // rbx
  __int64 (__fastcall *v13)(struct IAppViewDataSourceAdapter *, GUID *, _QWORD); // rdi
  int v14; // eax
  struct IApplicationViewCollection *v15; // rbx
  struct IApplicationViewCollection *v17[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 (__fastcall ***v19)(_QWORD, __int64, __int64 *); // [rsp+70h] [rbp+28h] BYREF
  struct IAppViewDataSourceAdapter *v20; // [rsp+78h] [rbp+30h] BYREF
  struct IImmersiveShellHookService *v21; // [rsp+80h] [rbp+38h] BYREF
  struct IApplicationViewIconLoader *v22; // [rsp+88h] [rbp+40h] BYREF

  v17[0] = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v3 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, struct IApplicationViewCollection **))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
  v4 = v3(v2, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, v17);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      183LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v22 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v6 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, struct IApplicationViewIconLoader **))(*(_QWORD *)v5 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  v7 = v6(v5, &SID_ApplicationViewIconLoaderService, &GUID_f622d8ac_35d3_4374_9148_66f1f7894191, &v22);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      186LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v21 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v9 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, struct IImmersiveShellHookService **))(*(_QWORD *)v8 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v10 = v9(v8, &SID_ImmersiveShellHookService, &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4, &v21);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      189LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  v11 = AppViewDataSourceAdapter_CreateInstance(v17[0], v22, v21, 0LL, &v20);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      192LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v19 = 0LL;
  v12 = v20;
  v13 = *(__int64 (__fastcall **)(struct IAppViewDataSourceAdapter *, GUID *, _QWORD))(*(_QWORD *)v20 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  v14 = v13(v12, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v19);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      195LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = (struct IApplicationViewCollection *)__abi_winrt_cast_to(
                                               0,
                                               v19,
                                               (__int64)&_uuidof__AUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__);
  v17[1] = v15;
  __abi_winrt_ptr_assign((__int64 *)(*(_QWORD *)a1 + 72LL), (__int64)v15);
  if ( v15 )
    (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)v15 + 16LL))(v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
}
