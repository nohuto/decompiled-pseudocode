/*
 * XREFs of floorf_0 @ 0x180056046
 * Callers:
 *     DwmpCalculateColorizationColor @ 0x18000A250 (DwmpCalculateColorizationColor.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180020670 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180020C30 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800272F4 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18003DD64 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     PacksRGBColor @ 0x180088CF0 (PacksRGBColor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf_0(float X)
{
  return floorf(X);
}
