/*
 * XREFs of ?AreEqual@ViewModeHelpers@Cortana@@YA_NPEBG_K01@Z @ 0x18004F9EC
 * Callers:
 *     ?GetMainViewMode@ViewModeHelpers@Cortana@@YA?AW4MainViewMode@12@PEBG_K01@Z @ 0x18004F8D8 (-GetMainViewMode@ViewModeHelpers@Cortana@@YA-AW4MainViewMode@12@PEBG_K01@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Cortana::ViewModeHelpers::AreEqual(
        Cortana::ViewModeHelpers *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  return (unsigned int)_o__wcsnicmp(this) == 0;
}
