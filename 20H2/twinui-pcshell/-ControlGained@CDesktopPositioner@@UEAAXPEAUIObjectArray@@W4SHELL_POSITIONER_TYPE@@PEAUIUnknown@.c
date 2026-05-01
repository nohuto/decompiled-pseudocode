/*
 * XREFs of ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803EA860
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003ADB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180050118 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x18014CDD8 (-HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ.c)
 *     _lambda_cec5c726396bbc9cebe1730e9afdb84e_::operator() @ 0x1803EA330 (_lambda_cec5c726396bbc9cebe1730e9afdb84e_--operator().c)
 *     ?SetActiveTabsOnTabletModeExit@CDesktopPositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x1803ED4D4 (-SetActiveTabsOnTabletModeExit@CDesktopPositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803F0AF0 (-DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CDesktopPositioner::ControlGained(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int (__fastcall ***a4)(_QWORD, GUID *, __int64 *))
{
  __int64 v5; // rdx
  CDesktopPositioner *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, void **); // rdi
  int v10; // eax
  int v11; // eax
  int (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *, unsigned int *); // rdi
  int v15; // eax
  const struct _GUID *v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  int active; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, struct IAppLayout **); // rdi
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rdx
  CDesktopPositioner *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbx
  int (__fastcall *v31)(__int64, __int64, void **); // rdi
  int v32; // eax
  void *v34; // [rsp+20h] [rbp-61h] BYREF
  unsigned int i; // [rsp+28h] [rbp-59h] BYREF
  unsigned int v36; // [rsp+2Ch] [rbp-55h] BYREF
  struct IAppLayout *v37; // [rsp+30h] [rbp-51h] BYREF
  __int64 v38; // [rsp+38h] [rbp-49h] BYREF
  __int64 v39; // [rsp+40h] [rbp-41h] BYREF
  __int64 v40; // [rsp+48h] [rbp-39h] BYREF
  int (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-31h] BYREF
  __int64 v42; // [rsp+58h] [rbp-29h] BYREF
  __int64 v43; // [rsp+60h] [rbp-21h] BYREF
  __int64 *v44[13]; // [rsp+68h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  int v46; // [rsp+F0h] [rbp+6Fh] BYREF

  v46 = a3;
  v42 = a2;
  v41 = a4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u,
    a3);
  if ( CDesktopPositioner::HasWindowingEnvironmentManager(v6, v5, v7) )
  {
    v34 = 0LL;
    v8 = *(_QWORD *)(a1 + 184);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v8 + 32LL);
    v34 = 0LL;
    v10 = v9(v8, 1LL, &v34);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x33C,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v34 + 40LL))(v34, 3LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x33D,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v34);
  }
  v37 = 0LL;
  v40 = 0LL;
  if ( v41 )
  {
    v12 = **v41;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
    if ( v12(v41, &GUID_0480d776_b053_4a1f_945d_fac2debae8e6, &v40) >= 0 )
    {
      v39 = 0LL;
      v13 = v40;
      v14 = *(__int64 (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v40 + 24LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
      v15 = v14(v13, &v39, &i);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x357,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v15);
LABEL_26:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
        goto LABEL_27;
      }
      if ( i )
        goto LABEL_26;
      v34 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
      v17 = DesktopOperation_CreateInstance(v16, &v34);
      v18 = retaddr;
      if ( v17 < 0 )
      {
        v19 = 859LL;
LABEL_16:
        wil::details::in1diag3::_Log_Hr(
          v18,
          (void *)v19,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v17);
LABEL_25:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
        goto LABEL_26;
      }
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v34 + 24LL))(v34, v39);
      v17 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v34 + 40LL))(v34);
      v18 = retaddr;
      if ( v17 < 0 )
      {
        v19 = 862LL;
        goto LABEL_16;
      }
      v38 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
      active = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v34)(
                 v34,
                 &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
                 &v38);
      v21 = retaddr;
      if ( active >= 0 )
      {
        v23 = v38;
        v24 = *(__int64 (__fastcall **)(__int64, struct IAppLayout **))(*(_QWORD *)v38 + 48LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
        v25 = v24(v23, &v37);
        if ( v25 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x363,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v25);
        active = CDesktopPositioner::SetActiveTabsOnTabletModeExit((CDesktopPositioner *)(a1 - 136), v37);
        v21 = retaddr;
        if ( active >= 0 )
          goto LABEL_24;
        v22 = 869LL;
      }
      else
      {
        v22 = 865LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v21,
        (void *)v22,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)active);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
      goto LABEL_25;
    }
  }
LABEL_27:
  v43 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0,
    3u);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v42 + 24LL))(v42, &v36);
  for ( i = 0; i < v36; ++i )
  {
    v44[0] = &v42;
    v44[1] = (__int64 *)&i;
    v44[2] = (__int64 *)(a1 - 136);
    v44[3] = &v43;
    v44[4] = (__int64 *)&v46;
    v44[5] = (__int64 *)&v37;
    v44[6] = (__int64 *)&v41;
    lambda_cec5c726396bbc9cebe1730e9afdb84e_::operator()(v44);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u,
    v26);
  if ( CDesktopPositioner::HasWindowingEnvironmentManager(v28, v27, v29) )
  {
    v34 = 0LL;
    v30 = *(_QWORD *)(a1 + 184);
    v31 = *(int (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v30 + 32LL);
    v34 = 0LL;
    if ( v31(v30, 2LL, &v34) >= 0 )
    {
      v32 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v34 + 40LL))(v34, 0LL);
      if ( v32 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3C4,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v32);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v34);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
}
