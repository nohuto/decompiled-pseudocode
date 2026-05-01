/*
 * XREFs of ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18007A13C
 * Callers:
 *     CVirtualDesktopManager::_OnViewAdded__lambda_bebd0e8b231a0deebea19a688ef01941___ @ 0x1800BA6B8 (CVirtualDesktopManager--_OnViewAdded__lambda_bebd0e8b231a0deebea19a688ef01941___.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_d29dcbd5ea21ea421d385d1150c3a2fa___ @ 0x1800BA830 (CVirtualDesktopManager--_OnViewAdded__lambda_d29dcbd5ea21ea421d385d1150c3a2fa___.c)
 *     ?CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z @ 0x1800BAD30 (-CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z.c)
 *     ?MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18043AAA0 (-MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PE.c)
 *     ?MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18043AB50 (-MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnViewRemovedFromSwitchersInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18043AC60 (-OnViewRemovedFromSwitchersInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18043AD30 (-PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18043B130 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18043E630 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?ViewVisibilityUpdatedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18043EA40 (-ViewVisibilityUpdatedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18043EB68 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18043EC00 (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::_UpdateViewVisibility(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  char v6; // si
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 24LL))(*((_QWORD *)this + 13));
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, bool))(*(_QWORD *)a2 + 96LL))(a2, 2LL, v6 == 0);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x259,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  else
  {
    if ( v6 )
    {
      v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 336LL))(a2, &v12);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x262,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v9);
      }
      else if ( v12 )
      {
        (*(void (__fastcall **)(_QWORD, struct IApplicationView *, struct IVirtualDesktop *))(**((_QWORD **)this + 13)
                                                                                            + 104LL))(
          *((_QWORD *)this + 13),
          a2,
          a3);
      }
    }
    return 0LL;
  }
}
