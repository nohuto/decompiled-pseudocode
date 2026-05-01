/*
 * XREFs of ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x1803EB4C4
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18003EB20 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x1800407AC (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ @ 0x1803EC270 (-PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ.c)
 *     ?ViewChangedTabGroup@CDesktopPositioner@@UEAAJPEAUIApplicationView@@AEBU_GUID@@W4VIEW_CHANGED_TAB_GROUP_FLAGS@@@Z @ 0x1803EE4F0 (-ViewChangedTabGroup@CDesktopPositioner@@UEAAJPEAUIApplicationView@@AEBU_GUID@@W4VIEW_CHANGED_TA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180088EB4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHandler@PEAUIInspectable@@@Fo.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$emplace@U?$pair@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@1@@Z @ 0x1803E967C (--$emplace@U-$pair@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V-$ComPtr@UIViewGroup.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803F0280 (-find@-$_Tree@V-$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V-$ComPtr@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a3,
        struct IViewGroup **a4,
        struct IApplicationView **a5)
{
  struct IApplicationView **v8; // rdi
  __int64 v9; // rax
  __int64 *v11; // r13
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  _OWORD *v16; // rdi
  _OWORD *v17; // rbx
  _OWORD *v18; // rax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(__int64, _BYTE *, _OWORD *, __int64 *); // rbx
  int v23; // eax
  CDesktopPositioner *v24; // rdi
  int v25; // eax
  int v26; // eax
  const char *v27; // r9
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v31; // [rsp+38h] [rbp-C0h] BYREF
  CDesktopPositioner *v32; // [rsp+48h] [rbp-B0h]
  _BYTE v33[24]; // [rsp+50h] [rbp-A8h] BYREF
  struct IApplicationView **v34; // [rsp+70h] [rbp-88h]
  struct IViewGroup **v35; // [rsp+78h] [rbp-80h]
  CDesktopPositioner *v36; // [rsp+80h] [rbp-78h]
  __int64 *v37; // [rsp+88h] [rbp-70h]
  char v38; // [rsp+90h] [rbp-68h]
  __int128 v39; // [rsp+98h] [rbp-60h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v35 = a4;
  v32 = this;
  v8 = a5;
  v34 = a5;
  *a4 = 0LL;
  *a5 = 0LL;
  v9 = *(_QWORD *)a3 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_NULL.Data1 )
    v9 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_NULL.Data4;
  if ( !v9 )
  {
    *(_QWORD *)&v31 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
    *(_QWORD *)&v31 = 0LL;
    *a5 = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
    return 0LL;
  }
  v30 = 0LL;
  v11 = (__int64 *)((char *)this + 336);
  std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::find(
    (char *)this + 336,
    &v31);
  if ( (_QWORD)v31 != *v11 )
  {
    v12 = *(_QWORD *)(v31 + 48);
    if ( v12 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*(_QWORD *)(v31 + 48));
      *(_QWORD *)&v31 = v30;
      v30 = v12;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v30 + 64LL))(v12, a2) )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v30 + 24LL))(v30, a2);
        v14 = v13;
        if ( v13 < 0 )
        {
          v15 = 2934LL;
LABEL_29:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v13);
          goto LABEL_30;
        }
      }
LABEL_26:
      v28 = v30;
      if ( v30 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v30 + 48LL))(v30, v8);
        v14 = v13;
        if ( v13 < 0 )
        {
          v15 = 2971LL;
          goto LABEL_29;
        }
        v28 = v30;
      }
      v30 = 0LL;
      *v35 = (struct IViewGroup *)v28;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      return 0LL;
    }
  }
  *(_QWORD *)&v31 = CDesktopPositioner::OnSelectedViewChangedForGroup;
  DWORD2(v31) = 0;
  *(_QWORD *)v33 = this;
  *(_OWORD *)&v33[8] = v31;
  v16 = 0LL;
  v17 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = 0LL;
  if ( v17 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>>((__int64)v17);
    v17[1] = *(_OWORD *)v33;
    *((_QWORD *)v17 + 4) = *(_QWORD *)&v33[16];
    *(_QWORD *)v17 = off_1804C6D28;
    v16 = v17;
    v18 = v17;
  }
  *(_QWORD *)&v31 = v16;
  if ( !v18 )
  {
    v14 = -2147024882;
    v19 = 2147942414LL;
    v20 = 2943LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v19);
LABEL_17:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
LABEL_30:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    return v14;
  }
  v21 = *((_QWORD *)this + 41);
  v22 = *(__int64 (__fastcall **)(__int64, _BYTE *, _OWORD *, __int64 *))(*(_QWORD *)v21 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  *(_OWORD *)v33 = *(_OWORD *)a3;
  v23 = v22(v21, v33, v16, &v30);
  v14 = v23;
  if ( v23 < 0 )
  {
    v19 = (unsigned int)v23;
    v20 = 2945LL;
    goto LABEL_16;
  }
  v24 = v32;
  v36 = v32;
  v37 = &v30;
  v38 = 1;
  v25 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v30 + 24LL))(v30, a2);
  v14 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB88,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v25);
    v26 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v24 + 41) + 32LL))(*((_QWORD *)v24 + 41), v30);
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB85,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v26);
    goto LABEL_17;
  }
  try
  {
    v39 = *(_OWORD *)a3;
    v40 = v30;
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
    std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::emplace<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>>>(
      v11,
      (__int64)v33,
      &v39);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
    v8 = v34;
  }
  catch ( ... )
  {
    LODWORD(v32) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xB94,
                     (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                     v27);
    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v36 + 41) + 32LL))(*((_QWORD *)v36 + 41), v30);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB85,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v29);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    return (unsigned int)v32;
  }
  goto LABEL_26;
}
