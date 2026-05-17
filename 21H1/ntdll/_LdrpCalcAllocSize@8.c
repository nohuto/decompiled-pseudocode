/*
 * XREFs of _LdrpCalcAllocSize@8 @ 0x4B2AA0E1
 * Callers:
 *     _RtlpIsQualifiedLanguage@12 @ 0x4B2A9F90 (_RtlpIsQualifiedLanguage@12.c)
 *     _LdrpMergeParentBaseLanguagesToList@20 @ 0x4B3516E9 (_LdrpMergeParentBaseLanguagesToList@20.c)
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 *     _RtlpAddLanguagesToMultiSZ@28 @ 0x4B35313F (_RtlpAddLanguagesToMultiSZ@28.c)
 * Callees:
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 */

int __fastcall LdrpCalcAllocSize(unsigned int a1, unsigned int a2)
{
  RtlULongLongToUInt(a2 * a1, (a2 * (unsigned __int64)a1) >> 32);
  return 0;
}
