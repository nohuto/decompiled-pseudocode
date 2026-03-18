/*
 * XREFs of ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F565C
 * Callers:
 *     ?Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E91F0 (-Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?CheckOcclusionState@CVisualCapture@@UEAAJXZ @ 0x1801F56A4 (-CheckOcclusionState@CVisualCapture@@UEAAJXZ.c)
 *     ?Present@CVisualCapture@@UEAAJ_N@Z @ 0x1801F5BE0 (-Present@CVisualCapture@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F5C30 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

void __fastcall CVisualCapture::CheckForCaptureCompleted(CVisualCapture *this)
{
  void *v2; // rcx

  if ( !*((_BYTE *)this + 1929) )
  {
    v2 = (void *)*((_QWORD *)this + 240);
    if ( v2 )
    {
      if ( !WaitForSingleObject(v2, 0) )
        CVisualCapture::SendCaptureCompleted(this);
    }
  }
}
