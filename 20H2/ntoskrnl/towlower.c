/*
 * XREFs of towlower @ 0x1403D3430
 * Callers:
 *     EtwpCovSampCheckForSegments @ 0x140945454 (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x140953298 (ExpParseArcPathName.c)
 *     ExpTranslateBootEntryNameToId @ 0x14095489C (ExpTranslateBootEntryNameToId.c)
 *     ExpTranslateDriverEntryNameToId @ 0x140954970 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x140954E1C (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x140954FA0 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x140955040 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1403D3FFC (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
