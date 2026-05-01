/*
 * XREFs of ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x18001CEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x18001D008 (-SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020628 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158A58 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::SetDrawingRegion(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        unsigned __int8 a3)
{
  int v3; // r14d
  ExperienceManagerUtils *v6; // rcx
  HWND v7; // rbx
  int RgnBox; // eax
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  const char *v12; // r9
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rdx
  struct tagRECT rc; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = a3;
  v6 = (ExperienceManagerUtils *)*((_QWORD *)this + 9);
  if ( v6 )
    v7 = ExperienceManagerUtils::WindowFromViewWrapper(v6, a2);
  else
    v7 = 0LL;
  if ( !v7 )
    return 0LL;
  if ( !a2 )
  {
    v14 = TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(this, v7, 0LL, v3);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        (const char *)(unsigned int)v14,
        rc.left);
      return v15;
    }
    if ( SetPropW(v7, L"UIA_WindowVisibilityOverridden", 0LL) )
      return 0LL;
    v16 = 142LL;
    goto LABEL_20;
  }
  rc = 0LL;
  RgnBox = GetRgnBox((HRGN)a2, &rc);
  v9 = 2LL;
  if ( RgnBox != 1 && (RgnBox != 2 || !IsRectEmpty(&rc)) )
    v9 = 0LL;
  v10 = TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(this, v7, (HRGN)a2, v3);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v10,
      rc.left);
    return v11;
  }
  if ( !SetPropW(v7, L"UIA_WindowVisibilityOverridden", (HANDLE)v9) )
  {
    v16 = 153LL;
LABEL_20:
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      v12);
  }
  return 0LL;
}
