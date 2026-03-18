/*
 * XREFs of ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F0E9C
 * Callers:
 *     ?Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EA994 (-Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?CheckOcclusionState@CVisualCapture@@UEAAJXZ @ 0x1801F0EE4 (-CheckOcclusionState@CVisualCapture@@UEAAJXZ.c)
 *     ?Present@CVisualCapture@@UEAAJ_N@Z @ 0x1801F1420 (-Present@CVisualCapture@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F1470 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
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
