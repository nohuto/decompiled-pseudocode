/*
 * XREFs of ?BringToFocus@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x180477380
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020628 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::BringToFocus(
        DesktopSingleViewShellExperiencePersonality *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  HWND v2; // rax

  v2 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               *(ExperienceManagerUtils **)(*((_QWORD *)this + 1) + 24LL),
               a2);
  SetFocus(v2);
  return 0LL;
}
