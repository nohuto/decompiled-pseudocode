/*
 * XREFs of ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801A5FC0
 * Callers:
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801C8B90 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 * Callees:
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18001DFD8 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::UpdateMPOCaps(CDirectFlipInfo **this)
{
  int updated; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  updated = COverlayContext::UpdateMPOCaps(this + 5);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0LL, updated, 0xB9u);
  return v3;
}
