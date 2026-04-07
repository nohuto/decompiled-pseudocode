/*
 * XREFs of ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x1800299A8
 * Callers:
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x18000F2CC (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002AC84 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180044420 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180027974 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 */

void __fastcall CTopLevelWindow::NotifyMouseLeave(CTopLevelWindow *this)
{
  CTopLevelWindow::UpdateCapturedButton(this, 0);
  CTopLevelWindow::ChangeMouseOver(this, 0LL);
}
