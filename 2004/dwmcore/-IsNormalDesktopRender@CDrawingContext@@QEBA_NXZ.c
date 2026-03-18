/*
 * XREFs of ?IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ @ 0x18001BA54
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x18005778C (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsNormalDesktopRender(CDrawingContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 6) )
    return *((_BYTE *)g_pComposition + 1129) == 0;
  return v1;
}
