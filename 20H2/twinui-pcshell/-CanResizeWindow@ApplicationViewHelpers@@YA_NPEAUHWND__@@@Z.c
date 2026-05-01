/*
 * XREFs of ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1804716D8
 * Callers:
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18039BF34 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x1803DBBF0 (-IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ApplicationViewHelpers::CanResizeWindow(ApplicationViewHelpers *this, HWND a2)
{
  return (GetWindowLongPtrW((HWND)this, -16) & 0x40000) != 0;
}
