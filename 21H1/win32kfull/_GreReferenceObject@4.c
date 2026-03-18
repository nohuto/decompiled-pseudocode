/*
 * XREFs of _GreReferenceObject@4 @ 0x20BD0
 * Callers:
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QAEPAVSURFACE@@PAUHLSURF__@@H@Z @ 0x24B50 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QAEPAVSURFACE@@PAUHLSURF__@@H@Z.c)
 *     ?_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z @ 0x775F8 (-_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z.c)
 * Callees:
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     ?bValid@SURFREF@@QBEHXZ @ 0xA8E4A (-bValid@SURFREF@@QBEHXZ.c)
 *     ??0SURFREF@@QAE@PAUHSURF__@@@Z @ 0x1CCD1B (--0SURFREF@@QAE@PAUHSURF__@@@Z.c)
 *     ?vKeepIt@SURFREF@@QAEXXZ @ 0x1D11C7 (-vKeepIt@SURFREF@@QAEXXZ.c)
 */

int __thiscall GreReferenceObject(HSURF this)
{
  SURFREF *v1; // ecx
  int v2; // esi
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  SURFREF::SURFREF((SURFREF *)v4, this);
  v2 = SURFREF::bValid((SURFREF *)v4);
  if ( v2 )
    SURFREF::vKeepIt(v1);
  SURFREF::vUnlock((SURFREF *)v4);
  return v2 != 0 ? 0 : -1073741816;
}
