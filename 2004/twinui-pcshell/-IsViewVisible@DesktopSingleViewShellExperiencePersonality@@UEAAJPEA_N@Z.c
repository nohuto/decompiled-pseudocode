/*
 * XREFs of ?IsViewVisible@DesktopSingleViewShellExperiencePersonality@@UEAAJPEA_N@Z @ 0x180087DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020628 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::IsViewVisible(
        DesktopSingleViewShellExperiencePersonality *this,
        bool *a2)
{
  HWND v3; // rax
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               *(ExperienceManagerUtils **)(*((_QWORD *)this + 1) + 24LL),
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( v3 )
  {
    pvAttribute = 0;
    if ( DwmGetWindowAttribute(v3, 0xEu, &pvAttribute, 4u) >= 0 )
      *a2 = pvAttribute == 0;
  }
  return 0LL;
}
