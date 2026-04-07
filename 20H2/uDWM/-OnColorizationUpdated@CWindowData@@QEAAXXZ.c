/*
 * XREFs of ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18003E468
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000ECD0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010A50 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001879C (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001996C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18003E2FC (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ @ 0x180051838 (-UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CWindowData::OnColorizationUpdated(CWindowData *this)
{
  CVisual *v2; // rcx
  CWindowIconic *v3; // rcx

  v2 = (CVisual *)*((_QWORD *)this + 48);
  if ( v2 )
    CVisual::SetDirtyFlags(v2, 0x100000);
  v3 = (CWindowIconic *)*((_QWORD *)this + 53);
  if ( v3 )
    CWindowIconic::OnColorizationUpdated(v3, 1);
}
