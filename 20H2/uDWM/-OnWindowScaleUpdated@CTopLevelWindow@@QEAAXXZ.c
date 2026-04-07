/*
 * XREFs of ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180015F7C
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000B6F0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180012A80 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001AC70 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B090 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CTopLevelWindow::OnWindowScaleUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x40000u);
  CVisual::SetDirtyFlags(this, 0x4000000u);
}
