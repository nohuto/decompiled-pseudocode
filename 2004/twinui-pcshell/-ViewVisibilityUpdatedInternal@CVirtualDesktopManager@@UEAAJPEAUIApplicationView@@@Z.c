/*
 * XREFs of ?ViewVisibilityUpdatedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18043EA40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18007A13C (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 */

__int64 __fastcall CVirtualDesktopManager::ViewVisibilityUpdatedInternal(
        struct IVirtualDesktop **this,
        struct IApplicationView *a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)(this - 1), a2, this[19]);
  v3 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29F,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
  return v3;
}
