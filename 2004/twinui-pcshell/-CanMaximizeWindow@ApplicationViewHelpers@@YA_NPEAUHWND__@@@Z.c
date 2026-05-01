/*
 * XREFs of ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x180471DB0
 * Callers:
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18039C7F4 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x1803DC510 (-IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180471D84 (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ApplicationViewHelpers::CanMaximizeWindow(ApplicationViewHelpers *this, HWND a2)
{
  return ((unsigned int)GetWindowLongPtrW((HWND)this, -16) >> 16) & 1;
}
