/*
 * XREFs of towlower @ 0x1403D07A0
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x14093F694 (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x14094D4D8 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x14094EADC (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x14094EBB0 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x14094F05C (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x14094F1E0 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x14094F280 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1403D136C (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
