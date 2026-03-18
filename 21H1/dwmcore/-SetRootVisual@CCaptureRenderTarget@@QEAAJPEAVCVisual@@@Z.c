/*
 * XREFs of ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18018C2F4
 * Callers:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801BACAC (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?ProcessSetRoot@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETROOT@@@Z @ 0x1801BAE24 (-ProcessSetRoot@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SET.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801BB050 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x180006838 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRoot@CRenderTarget@@MEAAJPEAVCVisual@@@Z @ 0x180187150 (-SetRoot@CRenderTarget@@MEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::SetRootVisual(CCaptureRenderTarget *this, struct CVisual *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v4 = CRenderTarget::SetRoot(this, a2);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x98u, 0LL);
  else
    wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((__int64 *)this + 250, (__int64)a2);
  return v6;
}
