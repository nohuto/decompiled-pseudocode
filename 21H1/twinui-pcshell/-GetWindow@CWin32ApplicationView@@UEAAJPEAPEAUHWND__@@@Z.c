/*
 * XREFs of ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x18004D980
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_f92d1ded2f5a789bc6502d5fa6951919___::Invoke @ 0x18004D7D0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_f92d1ded2f5a789bc6502d5fa695191.c)
 *     ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18004D850 (-GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     _lambda_7dedf9f14c3362839610df2f12c2fb98_::operator() @ 0x18016EB30 (_lambda_7dedf9f14c3362839610df2f12c2fb98_--operator().c)
 *     ?IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x180170BD0 (-IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 *     ?SetViewState@CWin32ApplicationView@@UEAAJI@Z @ 0x180171300 (-SetViewState@CWin32ApplicationView@@UEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetWindow(CWin32ApplicationView *this, HWND *a2)
{
  *a2 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
  return 0LL;
}
