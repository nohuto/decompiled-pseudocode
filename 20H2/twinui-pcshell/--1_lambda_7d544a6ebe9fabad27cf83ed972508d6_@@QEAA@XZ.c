/*
 * XREFs of ??1_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@QEAA@XZ @ 0x1802FC02C
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_0b0ea29adb38baec39914485464e8775____::_1_::dtor$0 @ 0x1802F61A4 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_0b0ea29adb38baec39914485464e877.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_7d544a6ebe9fabad27cf83ed972508d6____::_1_::dtor$0 @ 0x1802F6630 (_WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHandler--Animat.c)
 *     _MonitorFrame::DismissAnimated_::_1_::dtor$7 @ 0x180300CCB (_MonitorFrame--DismissAnimated_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall _lambda_7d544a6ebe9fabad27cf83ed972508d6_::~_lambda_7d544a6ebe9fabad27cf83ed972508d6_(
        _lambda_7d544a6ebe9fabad27cf83ed972508d6_ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
