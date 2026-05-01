/*
 * XREFs of ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180052E00
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800189F8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800530CC (-SetZBand@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x180053140 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnViewCreated(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  int v4; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  HWND v6; // rax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CSingleViewShellExperience::SetPreferentialRMSettings((char *)this + 16, 1LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3BB,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      v9);
  v6 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v5);
  if ( v6 && !SetPropW(v6, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C7,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)0x80004005LL,
      v9);
    return 2147500037LL;
  }
  else
  {
    v7 = CActionCenterExperienceManager::SetZBand((CActionCenterExperienceManager *)((char *)this - 104));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3CA,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        v9);
    return 0LL;
  }
}
