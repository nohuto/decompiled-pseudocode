/*
 * XREFs of _EngCreatePalette@24 @ 0xEDFBA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HPALETTE __stdcall EngCreatePalette(
        ULONG iMode,
        ULONG cColors,
        ULONG *pulColors,
        FLONG flRed,
        FLONG flGreen,
        FLONG flBlue)
{
  return __imp__EngCreatePalette@24(iMode, cColors, pulColors, flRed, flGreen, flBlue);
}
