/*
 * XREFs of SearchInCHSBaseFontFileNameSuffixes @ 0xDF340
 * Callers:
 *     ?IsCHSBaseFont@@YGHPBGI@Z @ 0xDF198 (-IsCHSBaseFont@@YGHPBGI@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall SearchInCHSBaseFontFileNameSuffixes(PCUNICODE_STRING String1, PCUNICODE_STRING String2, unsigned int a3)
{
  int v3; // esi

  v3 = 0;
  if ( !a3 )
    return -1;
  while ( !RtlEqualUnicodeString(String1, String2, 0) )
  {
    ++String2;
    if ( ++v3 >= a3 )
      return -1;
  }
  return v3;
}
