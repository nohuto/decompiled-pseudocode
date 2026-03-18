/*
 * XREFs of towlower @ 0x1403CF960
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x14093E414 (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x14094C138 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x14094D73C (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x14094D810 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x14094DCBC (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x14094DE40 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x14094DEE0 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1403D052C (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
