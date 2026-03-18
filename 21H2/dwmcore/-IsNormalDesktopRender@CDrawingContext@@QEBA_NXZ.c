/*
 * XREFs of ?IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ @ 0x180012BB8
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800B2A90 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801B3E8C (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsNormalDesktopRender(CDrawingContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 6) )
    return *((_BYTE *)g_pComposition + 1274) == 0;
  return v1;
}
