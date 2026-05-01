/*
 * XREFs of ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180012918
 * Callers:
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800127B8 (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800128DC (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180013110 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x180084150 (-RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x180088530 (-KeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?DisableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18045077C (-DisableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@Vie.c)
 *     ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1804507F4 (-EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@View.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020098 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(
        __int64 a1,
        ExperienceManagerUtils *a2,
        unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  HWND v10; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    v10 = ExperienceManagerUtils::WindowFromViewWrapper(a2, a2);
    PostMessageW(v10, 0x10u, 0LL, 0LL);
  }
  v6 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, _QWORD))(*(_QWORD *)a2 + 392LL))(a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (unsigned int)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
      (const char *)(unsigned int)v6,
      v11);
    return v7;
  }
  else
  {
    v8 = 4;
    if ( a3 != 5 )
      v8 = a3;
    *(_DWORD *)(a1 + 4) = v8;
    return 0LL;
  }
}
