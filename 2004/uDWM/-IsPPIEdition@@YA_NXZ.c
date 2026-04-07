/*
 * XREFs of ?IsPPIEdition@@YA_NXZ @ 0x1800307E4
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001A1E4 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180020C30 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180030630 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

bool IsPPIEdition(void)
{
  DWORD v0; // eax

  v0 = `IsPPIEdition'::`2'::s_dwProductType;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v0 = `IsPPIEdition'::`2'::s_dwProductType;
  }
  return v0 == 119;
}
