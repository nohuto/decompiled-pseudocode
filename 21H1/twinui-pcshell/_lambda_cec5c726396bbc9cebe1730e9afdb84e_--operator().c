/*
 * XREFs of _lambda_cec5c726396bbc9cebe1730e9afdb84e_::operator() @ 0x1803C9C10
 * Callers:
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803CA140 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 * Callees:
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18002C9BC (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800431B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180047E3C (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z @ 0x1803CB648 (-IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z.c)
 *     ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@PEAUIUnknown@@@Z @ 0x1803CBEB8 (-PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicatio.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_cec5c726396bbc9cebe1730e9afdb84e_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, GUID *, struct IUnknown **); // rbx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  CDesktopPositioner *v7; // rbx
  int v8; // eax
  int v9; // eax
  struct IApplicationViewOperation *v10; // rbx
  int updated; // eax
  CDesktopPositioner *v12; // rcx
  __int64 v13; // rdx
  unsigned __int8 v15[8]; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v16; // [rsp+38h] [rbp-28h] BYREF
  struct IApplicationViewOperation *v17; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+48h] [rbp-18h] BYREF
  struct IUnknown *v19; // [rsp+50h] [rbp-10h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v16 = 0LL;
  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v2 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  v4 = v3(v2, *(unsigned int *)a1[1], &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v16->lpVtbl[9].QueryInterface)(v16, &v18);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 895LL;
      goto LABEL_5;
    }
    v17 = 0LL;
    v7 = (CDesktopPositioner *)a1[2];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    v8 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(
           v7,
           (struct IApplicationView *)v16,
           &v17);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x382,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_27:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      goto LABEL_28;
    }
    v20 = 0LL;
    v19 = v16;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
      0,
      3u);
    v9 = SHIsSameObject(v16, v19);
    v10 = v17;
    if ( v9 )
    {
      updated = CDesktopPositioner::PositionViewForPositionerHandoff(a1[2], v16, v17);
      v5 = updated;
      if ( updated < 0 )
      {
        v13 = 915LL;
        goto LABEL_24;
      }
      if ( v18 )
      {
        updated = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v10 + 96LL))(
                    v10,
                    1LL);
        v5 = updated;
        if ( updated < 0 )
        {
          v13 = 921LL;
          goto LABEL_24;
        }
      }
    }
    else
    {
      (*(void (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v17 + 96LL))(v17, 0LL);
    }
    v15[0] = 0;
    if ( *(_DWORD *)a1[4] == 4
      && (int)CDesktopPositioner::IsWindowMinimizing(v12, (struct IUnknown *)*a1[6], v15) >= 0
      && v15[0]
      && (updated = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v10 + 96LL))(
                      v10,
                      0LL),
          v5 = updated,
          updated < 0) )
    {
      v13 = 946LL;
    }
    else
    {
      updated = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationViewOperation *))v16->lpVtbl[13].AddRef)(
                  v16,
                  v10);
      v5 = updated;
      if ( updated >= 0 )
      {
        updated = CDesktopPositioner::_UpdateViewTabState((CDesktopPositioner *)a1[2], (struct IApplicationView *)v16);
        v5 = updated;
        if ( updated >= 0 )
        {
          v5 = 0;
          goto LABEL_26;
        }
        v13 = 952LL;
      }
      else
      {
        v13 = 949LL;
      }
    }
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)updated);
LABEL_26:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    goto LABEL_27;
  }
  v6 = 892LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v5;
}
