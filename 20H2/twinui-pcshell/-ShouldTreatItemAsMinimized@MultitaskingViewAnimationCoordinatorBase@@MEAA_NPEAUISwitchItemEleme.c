/*
 * XREFs of ?ShouldTreatItemAsMinimized@MultitaskingViewAnimationCoordinatorBase@@MEAA_NPEAUISwitchItemElement@@@Z @ 0x1803B14F0
 * Callers:
 *     ?ShouldTreatItemAsMinimized@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocationAnimationCoordinator@@@@UEAA_NPEAUISwitchItemElement@@@Z @ 0x18039D1D0 (-ShouldTreatItemAsMinimized@-$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocation.c)
 *     ?ShouldTreatItemAsMinimized@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@UEAA_NPEAUISwitchItemElement@@@Z @ 0x18039D6D0 (-ShouldTreatItemAsMinimized@-$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?IsCloaked@MultitaskingViewAnimationCoordinatorBase@@IEAA_NPEAUHWND__@@@Z @ 0x1803B10B8 (-IsCloaked@MultitaskingViewAnimationCoordinatorBase@@IEAA_NPEAUHWND__@@@Z.c)
 */

char __fastcall MultitaskingViewAnimationCoordinatorBase::ShouldTreatItemAsMinimized(
        MultitaskingViewAnimationCoordinatorBase *this,
        struct ISwitchItemElement *a2)
{
  char v4; // bl
  HWND v6; // rax
  HWND v7; // rax
  MultitaskingViewAnimationCoordinatorBase *v8; // rcx

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *))(*(_QWORD *)this + 104LL))(this) )
    return 0;
  if ( *((_BYTE *)this + 168) )
    return 1;
  v6 = (HWND)(*(__int64 (__fastcall **)(struct ISwitchItemElement *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( IsIconic(v6) )
    return 1;
  v7 = (HWND)(*(__int64 (__fastcall **)(struct ISwitchItemElement *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( MultitaskingViewAnimationCoordinatorBase::IsCloaked(v8, v7) )
    return 1;
  return v4;
}
