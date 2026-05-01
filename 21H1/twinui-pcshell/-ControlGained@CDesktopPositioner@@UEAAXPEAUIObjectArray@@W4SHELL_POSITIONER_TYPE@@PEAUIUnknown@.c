/*
 * XREFs of ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803CA140
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C3A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800431B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x180128848 (-HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ.c)
 *     _lambda_cec5c726396bbc9cebe1730e9afdb84e_::operator() @ 0x1803C9C10 (_lambda_cec5c726396bbc9cebe1730e9afdb84e_--operator().c)
 *     ?SetActiveTabsOnTabletModeExit@CDesktopPositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x1803CCDB4 (-SetActiveTabsOnTabletModeExit@CDesktopPositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803D04A0 (-DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CDesktopPositioner::ControlGained(
        __int64 a1,
        __int64 a2,
        int a3,
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
  __int64 v26; // rdx
  CDesktopPositioner *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  int (__fastcall *v30)(__int64, __int64, void **); // rdi
  int v31; // eax
  void *v33; // [rsp+20h] [rbp-61h] BYREF
  unsigned int i; // [rsp+28h] [rbp-59h] BYREF
  unsigned int v35; // [rsp+2Ch] [rbp-55h] BYREF
  struct IAppLayout *v36; // [rsp+30h] [rbp-51h] BYREF
  __int64 v37; // [rsp+38h] [rbp-49h] BYREF
  __int64 v38; // [rsp+40h] [rbp-41h] BYREF
  __int64 v39; // [rsp+48h] [rbp-39h] BYREF
  int (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-31h] BYREF
  __int64 v41; // [rsp+58h] [rbp-29h] BYREF
  __int64 v42; // [rsp+60h] [rbp-21h] BYREF
  __int64 *v43[13]; // [rsp+68h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  int v45; // [rsp+F0h] [rbp+6Fh] BYREF

  v45 = a3;
  v41 = a2;
  v40 = a4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u);
  if ( CDesktopPositioner::HasWindowingEnvironmentManager(v6, v5, v7) )
  {
    v33 = 0LL;
    v8 = *(_QWORD *)(a1 + 184);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v8 + 32LL);
    v33 = 0LL;
    v10 = v9(v8, 1LL, &v33);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x33C,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v33 + 40LL))(v33, 3LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x33D,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v33);
  }
  v36 = 0LL;
  v39 = 0LL;
  if ( v40 )
  {
    v12 = **v40;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
    if ( v12(v40, &GUID_0480d776_b053_4a1f_945d_fac2debae8e6, &v39) >= 0 )
    {
      v38 = 0LL;
      v13 = v39;
      v14 = *(__int64 (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v39 + 24LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
      v15 = v14(v13, &v38, &i);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x357,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v15);
LABEL_26:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
        goto LABEL_27;
      }
      if ( i )
        goto LABEL_26;
      v33 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
      v17 = DesktopOperation_CreateInstance(v16, &v33);
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
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
        goto LABEL_26;
      }
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v33 + 24LL))(v33, v38);
      v17 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v33 + 40LL))(v33);
      v18 = retaddr;
      if ( v17 < 0 )
      {
        v19 = 862LL;
        goto LABEL_16;
      }
      v37 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      active = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v33)(
                 v33,
                 &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
                 &v37);
      v21 = retaddr;
      if ( active >= 0 )
      {
        v23 = v37;
        v24 = *(__int64 (__fastcall **)(__int64, struct IAppLayout **))(*(_QWORD *)v37 + 48LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
        v25 = v24(v23, &v36);
        if ( v25 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x363,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v25);
        active = CDesktopPositioner::SetActiveTabsOnTabletModeExit((CDesktopPositioner *)(a1 - 136), v36);
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
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      goto LABEL_25;
    }
  }
LABEL_27:
  v42 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0,
    3u);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v41 + 24LL))(v41, &v35);
  for ( i = 0; i < v35; ++i )
  {
    v43[0] = &v41;
    v43[1] = (__int64 *)&i;
    v43[2] = (__int64 *)(a1 - 136);
    v43[3] = &v42;
    v43[4] = (__int64 *)&v45;
    v43[5] = (__int64 *)&v36;
    v43[6] = (__int64 *)&v40;
    lambda_cec5c726396bbc9cebe1730e9afdb84e_::operator()(v43);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u);
  if ( CDesktopPositioner::HasWindowingEnvironmentManager(v27, v26, v28) )
  {
    v33 = 0LL;
    v29 = *(_QWORD *)(a1 + 184);
    v30 = *(int (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v29 + 32LL);
    v33 = 0LL;
    if ( v30(v29, 2LL, &v33) >= 0 )
    {
      v31 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v33 + 40LL))(v33, 0LL);
      if ( v31 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3C4,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v31);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v33);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
}
