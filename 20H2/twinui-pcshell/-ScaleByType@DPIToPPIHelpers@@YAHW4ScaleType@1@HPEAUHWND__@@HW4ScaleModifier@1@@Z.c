/*
 * XREFs of ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x18047DA4C
 * Callers:
 *     s_DrawGlyph @ 0x18047AC98 (s_DrawGlyph.c)
 *     s_OnDrawItem @ 0x18047B5B0 (s_OnDrawItem.c)
 *     s_OnMeasureItem @ 0x18047BFFC (s_OnMeasureItem.c)
 * Callees:
 *     <none>
 */

int __fastcall DPIToPPIHelpers::ScaleByType(int a1, unsigned int a2, HWND a3, int a4)
{
  if ( a1 == 1 )
    return DPIToPPIHelpers::ScaleByPPI(a2, a3, 0);
  else
    return DPIToPPIHelpers::ScaleBySpecificDPI((HWND)a2, a4, 0);
}
