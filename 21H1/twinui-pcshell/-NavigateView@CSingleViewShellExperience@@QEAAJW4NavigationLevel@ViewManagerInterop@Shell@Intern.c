/*
 * XREFs of ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180450A88
 * Callers:
 *     ?FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ @ 0x1801ACBC0 (-FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1801B6240 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1804506B4 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800128DC (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSingleViewShellExperience::NavigateView(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    return 0LL;
  v4 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate((_DWORD *)(a1 + 72), v3, v2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x221,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
