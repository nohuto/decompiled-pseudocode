/*
 * XREFs of _GreDereferenceObject@8 @ 0x206B0
 * Callers:
 *     ?CleanupShape@SFMLOGICALSURFACE@@QAEXPAVSURFACE@@@Z @ 0x205FE (-CleanupShape@SFMLOGICALSURFACE@@QAEXPAVSURFACE@@@Z.c)
 *     _DeleteOrSetRedirectionBitmap@12 @ 0x20636 (_DeleteOrSetRedirectionBitmap@12.c)
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 *     ?UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z @ 0x5DF78 (-UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z @ 0x775F8 (-_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z.c)
 *     ?CleanupCursorObject@@YGXPAUtagCURSOR@@@Z @ 0x787CC (-CleanupCursorObject@@YGXPAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     ?bValid@SURFREF@@QBEHXZ @ 0xA8E4A (-bValid@SURFREF@@QBEHXZ.c)
 *     ?bDeleteSurface@SURFREF@@QAEHW4_CLEANUPTYPE@@H@Z @ 0xF6E04 (-bDeleteSurface@SURFREF@@QAEHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0SURFREF@@QAE@PAUHSURF__@@@Z @ 0x1CCD1B (--0SURFREF@@QAE@PAUHSURF__@@@Z.c)
 */

int __fastcall GreDereferenceObject(HSURF a1, int a2)
{
  int v4; // esi
  _BYTE v6[4]; // [esp+Ch] [ebp-4h] BYREF

  SURFREF::SURFREF((SURFREF *)v6, a1);
  if ( SURFREF::bValid((SURFREF *)v6) )
  {
    v4 = 0;
    if ( ((unsigned int)a1 & 0x800000) != 0 )
    {
      SURFREF::vUnlock((SURFREF *)v6);
    }
    else if ( !HmgShareUnlockRemoveObject(a1, 0, 1, a2, 5) || !SURFREF::bDeleteSurface(v6, 0, 1) )
    {
      v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741816;
  }
  SURFREF::vUnlock((SURFREF *)v6);
  return v4;
}
