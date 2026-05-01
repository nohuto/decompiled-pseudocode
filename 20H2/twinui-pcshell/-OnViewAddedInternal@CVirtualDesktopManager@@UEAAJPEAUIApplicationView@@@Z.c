/*
 * XREFs of ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18007C630
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18007C660 (-OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 */

__int64 __fastcall CVirtualDesktopManager::OnViewAddedInternal(
        struct IVirtualDesktop **this,
        struct IApplicationView *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CVirtualDesktopManager::OnViewAddedInternal((CVirtualDesktopManager *)this, a2, this[19]);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x220,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
