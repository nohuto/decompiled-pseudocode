/*
 * XREFs of ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18039C7F4
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18007E670 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     _lambda_19fa672f96dcf57a0fd0c24f9d8c8782_::operator() @ 0x1800B7640 (_lambda_19fa672f96dcf57a0fd0c24f9d8c8782_--operator().c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18039C760 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x180471DB0 (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x180471DD8 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x180472244 (-IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall TabletModePositionerHelpers::IsOperableWindow(TabletModePositionerHelpers *this, HWND a2)
{
  HWND v3; // rdx
  char v4; // bl
  HWND v5; // rdx
  HWND v6; // rdx

  v4 = 0;
  if ( IsWindow((HWND)this)
    && ApplicationViewHelpers::CanResizeWindow(this, v3)
    && ApplicationViewHelpers::CanMaximizeWindow(this, v5) )
  {
    return !ApplicationViewHelpers::IsWindowInHighZOrderBand(this, v6);
  }
  return v4;
}
