/*
 * XREFs of ?OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1804171B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_bebd0e8b231a0deebea19a688ef01941___ @ 0x1800A804C (CVirtualDesktopManager--_OnViewAdded__lambda_bebd0e8b231a0deebea19a688ef01941___.c)
 */

__int64 __fastcall CVirtualDesktopManager::OnPinnedViewAddedInternal(
        struct IVirtualDesktop **this,
        struct IApplicationView *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v5[0] = this - 1;
  v5[1] = &v7;
  v2 = CVirtualDesktopManager::_OnViewAdded__lambda_bebd0e8b231a0deebea19a688ef01941___(this - 1, a2, (__int64)v5);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x235,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
