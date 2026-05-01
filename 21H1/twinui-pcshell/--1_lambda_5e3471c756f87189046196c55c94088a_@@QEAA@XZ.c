/*
 * XREFs of ??1_lambda_5e3471c756f87189046196c55c94088a_@@QEAA@XZ @ 0x18018A9D8
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x180096DF0 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     __lambda_4f9db91f7b3ef4e45d712402b4d08f96_::operator()_::_1_::dtor$0 @ 0x18023C41E (__lambda_4f9db91f7b3ef4e45d712402b4d08f96_--operator()_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::SubscribeToViewChangeNotifications_::_1_::dtor$0 @ 0x180240917 (_PeoplePaneViewManager--SubscribeToViewChangeNotifications_--_1_--dtor$0.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_5e3471c756f87189046196c55c94088a____::_1_::dtor$0 @ 0x1802D5067 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_5e3471c756f87189046196c55c94088.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef____::_1_::dtor$0 @ 0x1802D527D (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1e.c)
 *     _MonitorFrame::BeginInvokeAnimation_::_1_::dtor$1 @ 0x1802DDCAD (_MonitorFrame--BeginInvokeAnimation_--_1_--dtor$1.c)
 *     _MonitorFrame::DestroyInternal_::_1_::dtor$1 @ 0x1802DF6F9 (_MonitorFrame--DestroyInternal_--_1_--dtor$1.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$19 @ 0x18032608E (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$19.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall _lambda_5e3471c756f87189046196c55c94088a_::~_lambda_5e3471c756f87189046196c55c94088a_(
        _lambda_5e3471c756f87189046196c55c94088a_ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
