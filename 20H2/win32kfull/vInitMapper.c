/*
 * XREFs of vInitMapper @ 0x1C0394D30
 * Callers:
 *     <none>
 * Callees:
 *     InitializeDefaultFamilyFonts @ 0x1C039320C (InitializeDefaultFamilyFonts.c)
 *     InitializeFontSignatures @ 0x1C0394D4C (InitializeFontSignatures.c)
 */

int vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
