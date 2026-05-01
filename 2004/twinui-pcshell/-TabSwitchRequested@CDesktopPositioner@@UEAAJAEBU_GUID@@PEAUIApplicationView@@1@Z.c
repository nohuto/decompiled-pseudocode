/*
 * XREFs of ?TabSwitchRequested@CDesktopPositioner@@UEAAJAEBU_GUID@@PEAUIApplicationView@@1@Z @ 0x1803EE880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803F0BC0 (-find@-$_Tree@V-$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V-$ComPtr@.c)
 */

__int64 __fastcall CDesktopPositioner::TabSwitchRequested(
        CDesktopPositioner *this,
        const struct _GUID *a2,
        struct IApplicationView *a3,
        struct IApplicationView *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  bool v9; // r15
  int v10; // ebp
  __int64 v11; // rbx
  int v12; // ebx
  __int64 v13; // rdx
  char v15; // al
  __int64 v16; // rcx
  bool v17; // zf
  __int64 (__fastcall *v18)(__int64, struct IApplicationView *, _QWORD); // rax
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+28h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 56) & -(__int64)(this != (CDesktopPositioner *)128));
  v9 = 1;
  v10 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v8, 1);
  v20 = (__int128)*a2;
  std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::find(
    (char *)this + 208,
    &v19);
  v11 = v19;
  if ( v19 == *((_QWORD *)this + 26) )
  {
    v12 = -2147023728;
    v13 = 411LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v12);
    if ( v10 >= 0 )
      LeaveCriticalSection(v8);
    return (unsigned int)v12;
  }
  if ( a3 )
    v9 = (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**(_QWORD **)(v19 + 48) + 64LL))(
           *(_QWORD *)(v19 + 48),
           a3) != 0;
  v15 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**(_QWORD **)(v11 + 48) + 64LL))(
          *(_QWORD *)(v11 + 48),
          a4);
  if ( v9 )
  {
    v16 = *(_QWORD *)(v11 + 48);
    v17 = v15 == 0;
    v18 = *(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v16 + 40LL);
    if ( v17 )
    {
      v12 = v18(v16, 0LL, 0LL);
      if ( v12 < 0 )
      {
        v13 = 429LL;
        goto LABEL_3;
      }
    }
    else
    {
      v12 = v18(v16, a4, 0LL);
      if ( v12 < 0 )
      {
        v13 = 423LL;
        goto LABEL_3;
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a4 + 56LL))(a4);
  }
  if ( v10 >= 0 )
    LeaveCriticalSection(v8);
  return 0LL;
}
