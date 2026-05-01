/*
 * XREFs of ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x180088C20
 * Callers:
 *     ?KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x180088C10 (-KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D47F0 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180012E48 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSingleViewShellExperience::KeepAlive(CSingleViewShellExperience *this)
{
  _DWORD *v1; // rax
  ExperienceManagerUtils *v2; // rdx
  int v3; // eax
  int v4; // ebx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_DWORD *)((char *)this + 72);
  v2 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( (*((_BYTE *)this + 132) & 0x40) != 0 )
  {
    if ( *v1 )
    {
      *v1 = 3;
    }
    else
    {
      v6 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView((__int64)v1, v2, 3u);
      v4 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x80,
          (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
          (const char *)(unsigned int)v6);
LABEL_13:
        if ( v4 >= 0 )
          return 0LL;
        v7 = 934LL;
LABEL_17:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v7,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v4);
        return 0LL;
      }
    }
    v4 = 0;
    goto LABEL_13;
  }
  if ( *v1 )
  {
    *v1 = 4;
    goto LABEL_4;
  }
  v3 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView((__int64)v1, v2, 4u);
  v4 = v3;
  if ( v3 >= 0 )
  {
LABEL_4:
    v4 = 0;
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
    (const char *)(unsigned int)v3);
LABEL_5:
  if ( v4 < 0 )
  {
    v7 = 938LL;
    goto LABEL_17;
  }
  return 0LL;
}
