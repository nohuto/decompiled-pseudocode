/*
 * XREFs of _PREALLOCMEM2@20 @ 0xEA002
 * Callers:
 *     ??$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YGJPAKPAPAU_FONTSUB@@0PBU0@@Z @ 0xE2F7A (--$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YGJPAKPAPAU_FONTSUB@@0PBU0@@Z.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YGJPAKPAPAU_FONTMAPPERFAMILYFALLBACK@@0PBU0@@Z @ 0x1FC68C (--$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YGJPAKPAPAU_FONTMAPPERFA.c)
 *     _vInitFontSubTable@0 @ 0x293130 (_vInitFontSubTable@0.c)
 *     _vInitFontMapperFamilyFallbackTable@0 @ 0x293242 (_vInitFontMapperFamilyFallbackTable@0.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

char *__fastcall PREALLOCMEM2(const void *a1, size_t a2, size_t Size, int a4, int a5)
{
  char *v6; // eax
  char *v7; // ebx

  v6 = (char *)PALLOCMEM2(Size, a4, 0);
  v7 = v6;
  if ( v6 )
  {
    if ( a2 >= Size )
      a2 = Size;
    memcpy(v6, a1, a2);
    Win32FreePool(a1);
    memset(&v7[a2], 0, Size - a2);
  }
  return v7;
}
