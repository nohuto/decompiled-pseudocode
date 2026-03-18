/*
 * XREFs of _QueryRegistryFontMapperFamilyFallbackListRoutine@24 @ 0x293FDF
 * Callers:
 *     <none>
 * Callees:
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YGJPAKPAPAU_FONTMAPPERFAMILYFALLBACK@@0PBU0@@Z @ 0x1FC68C (--$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YGJPAKPAPAU_FONTMAPPERFA.c)
 */

int __stdcall QueryRegistryFontMapperFamilyFallbackListRoutine(
        WCHAR *a1,
        int a2,
        WCHAR *a3,
        int a4,
        unsigned int *a5,
        int a6)
{
  WCHAR v7[66]; // [esp+10h] [ebp-88h] BYREF

  memset(v7, 0, 0x80u);
  cCapString(&v7[32], a3, 32);
  cCapString(v7, a1, 32);
  return AllocAndCopyRegistryEntries<_FONTMAPPERFAMILYFALLBACK,1179012423>(a5, v7);
}
