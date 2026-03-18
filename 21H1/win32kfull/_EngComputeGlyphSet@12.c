/*
 * XREFs of _EngComputeGlyphSet@12 @ 0xDFC3C
 * Callers:
 *     ?UmfdEscEngComputeGlyphSet@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xDFBB0 (-UmfdEscEngComputeGlyphSet@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     _NtGdiEngComputeGlyphSet@12 @ 0x217A62 (_NtGdiEngComputeGlyphSet@12.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _cUnicodeRangesSupported@20 @ 0xDFCB6 (_cUnicodeRangesSupported@20.c)
 *     _cComputeGlyphSet@20 @ 0xDFE5A (_cComputeGlyphSet@20.c)
 */

FD_GLYPHSET *__stdcall EngComputeGlyphSet(INT nCodePage, INT nFirstChar, INT cChars)
{
  FD_GLYPHSET *v4; // ebx
  char *v5; // edi
  FD_GLYPHSET *v6; // eax
  INT cCharsa; // [esp+18h] [ebp+10h]

  v4 = 0;
  if ( (unsigned int)cChars <= 0xFFFF )
  {
    v5 = (char *)PALLOCMEM2(3 * cChars, 1936484167, 1);
    if ( v5 )
    {
      cCharsa = cUnicodeRangesSupported(cChars, v5, &v5[2 * cChars]);
      v6 = (FD_GLYPHSET *)EngAllocMem(0, 4 * (cChars + 2 * (cCharsa + 2)), 0x736C6747u);
      v4 = v6;
      if ( v6 )
        cComputeGlyphSet(cChars, cCharsa, v6);
      Win32FreePool(v5);
    }
  }
  return v4;
}
