/*
 * XREFs of vInitMapper @ 0x1C0395D30
 * Callers:
 *     <none>
 * Callees:
 *     InitializeDefaultFamilyFonts @ 0x1C039420C (InitializeDefaultFamilyFonts.c)
 *     InitializeFontSignatures @ 0x1C0395D4C (InitializeFontSignatures.c)
 */

int vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
