/*
 * XREFs of ?MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180417100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1800799AC (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18041B1B0 (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CVirtualDesktopManager::MoveViewToHolographicDesktopInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  int updated; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 136LL))(*((_QWORD *)this + 12));
  if ( updated < 0 )
  {
    v5 = 417LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CVirtualDesktopManager::_UpdateViewVisibility(
              (CVirtualDesktopManager *)((char *)this - 8),
              a2,
              *((struct IVirtualDesktop **)this + 19));
  if ( updated < 0 )
  {
    v5 = 418LL;
    goto LABEL_7;
  }
  updated = CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree(
              (CVirtualDesktopManager *)((char *)this - 8),
              a2);
  if ( updated < 0 )
  {
    v5 = 419LL;
    goto LABEL_7;
  }
  return (unsigned int)updated;
}
