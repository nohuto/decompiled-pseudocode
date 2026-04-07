/*
 * XREFs of ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800135F8
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001996C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180028A04 (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18003E2FC (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x180051DF0 (-BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800248DC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow::OnBlurBehindUpdated(CTopLevelWindow *this)
{
  CRenderDataVisual *v2; // rcx

  v2 = (CRenderDataVisual *)*((_QWORD *)this + 37);
  if ( v2 )
    CRenderDataVisual::ClearInstructions(v2);
  CVisual::SetDirtyFlags(this, 0x80000u);
}
