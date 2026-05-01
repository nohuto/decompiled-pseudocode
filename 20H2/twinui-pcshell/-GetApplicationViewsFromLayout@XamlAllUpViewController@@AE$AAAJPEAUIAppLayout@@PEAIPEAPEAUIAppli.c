/*
 * XREFs of ?GetApplicationViewsFromLayout@XamlAllUpViewController@@AE$AAAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x180319A50
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x180319D84 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlAllUpViewController::GetApplicationViewsFromLayout(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4,
        _QWORD *a5)
{
  _QWORD *v8; // r13
  int v9; // esi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, GUID *, __int64 *); // rdi
  int v14; // eax
  __int64 (__fastcall *v15)(__int64, __int64, __int64, GUID *, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, GUID *, _QWORD **); // rdi
  int v19; // eax
  __int64 v20; // rax
  _QWORD *v21; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v24; // [rsp+70h] [rbp+40h] BYREF
  __int64 v25; // [rsp+78h] [rbp+48h] BYREF

  v24 = a1;
  *a4 = 0LL;
  v8 = a5;
  *a5 = 0LL;
  *a3 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  if ( v9 )
  {
    v25 = 0LL;
    a5 = 0LL;
    v24 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v11 = v10(a2, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v24);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        278LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v12 = v24;
    v13 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v24 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v14 = v13(v12, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v25);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        279LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    if ( v9 == 2 )
    {
      v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v16 = v15(a2, 1LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v24);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          283LL,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      v17 = v24;
      v18 = *(__int64 (__fastcall **)(__int64, GUID *, _QWORD **))(*(_QWORD *)v24 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
      v19 = v18(v17, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &a5);
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          284LL,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
          (const char *)(unsigned int)v19);
        __debugbreak();
      }
    }
    v20 = v25;
    v25 = 0LL;
    *a4 = v20;
    v21 = a5;
    a5 = 0LL;
    *v8 = v21;
    *a3 = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  }
  return 0LL;
}
