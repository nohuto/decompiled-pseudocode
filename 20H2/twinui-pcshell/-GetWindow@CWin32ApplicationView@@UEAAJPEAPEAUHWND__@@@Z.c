/*
 * XREFs of ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x18000B450
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_f92d1ded2f5a789bc6502d5fa6951919___::Invoke @ 0x18000B2A0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_f92d1ded2f5a789bc6502d5fa695191.c)
 *     ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18000B320 (-GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     _lambda_7dedf9f14c3362839610df2f12c2fb98_::operator() @ 0x1801926A0 (_lambda_7dedf9f14c3362839610df2f12c2fb98_--operator().c)
 *     ?IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x1801946D0 (-IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 *     ?SetViewState@CWin32ApplicationView@@UEAAJI@Z @ 0x180194E00 (-SetViewState@CWin32ApplicationView@@UEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetWindow(CWin32ApplicationView *this, HWND *a2)
{
  *a2 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
  return 0LL;
}
