/*
 * XREFs of ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YGJPAKPAPAU_FONTMAPPERFAMILYFALLBACK@@0PBU0@@Z @ 0x1FC68C
 * Callers:
 *     _QueryRegistryFontMapperFamilyFallbackListRoutine@24 @ 0x293FDF (_QueryRegistryFontMapperFamilyFallbackListRoutine@24.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _PREALLOCMEM2@20 @ 0xEA002 (_PREALLOCMEM2@20.c)
 */

int __stdcall AllocAndCopyRegistryEntries<_FONTMAPPERFAMILYFALLBACK,1179012423>(unsigned int *a1, const void *a2)
{
  unsigned int v2; // edi
  struct _FONTMAPPERFAMILYFALLBACK *v3; // eax

  if ( gcfmffTable < *a1 )
    goto LABEL_7;
  v2 = gcfmffTable + 32;
  if ( gpfmffTable )
    v3 = (struct _FONTMAPPERFAMILYFALLBACK *)PREALLOCMEM2(
                                               gpfmffTable,
                                               gcfmffTable << 7,
                                               (gcfmffTable + 32) << 7,
                                               1179012423,
                                               (gcfmffTable + 32) << 7);
  else
    v3 = (struct _FONTMAPPERFAMILYFALLBACK *)PALLOCMEM2((gcfmffTable + 32) << 7, 1179012423, 1);
  if ( v3 )
  {
    gpfmffTable = v3;
    *a1 = v2;
LABEL_7:
    qmemcpy((char *)gpfmffTable + 128 * gcfmffTable++, a2, 0x80u);
    return 0;
  }
  return -1073741801;
}
