/*
 * XREFs of _RtlpEnsureTailingSlashAndAddToList@8 @ 0x4B33D020
 * Callers:
 *     _RtlpLookupSafeCurDirList@0 @ 0x4B33D088 (_RtlpLookupSafeCurDirList@0.c)
 * Callees:
 *     _RtlUnicodeStringCopy@8 @ 0x4B2DDBF1 (_RtlUnicodeStringCopy@8.c)
 *     _RtlUnicodeStringCatString@8 @ 0x4B33CE74 (_RtlUnicodeStringCatString@8.c)
 *     _RtlpAllocateDirPrefixBlock@4 @ 0x4B33CFE7 (_RtlpAllocateDirPrefixBlock@4.c)
 */

int __fastcall RtlpEnsureTailingSlashAndAddToList(int a1, int a2)
{
  _WORD *DirPrefixBlock; // eax
  _DWORD *v5; // esi
  _DWORD *v7; // eax

  if ( *(_WORD *)(*(_DWORD *)(a2 + 4) + 2 * (unsigned __int16)((*(_WORD *)a2 >> 1) - 1)) == 92
    || RtlUnicodeStringCatString((unsigned __int16 *)a2) >= 0 )
  {
    DirPrefixBlock = RtlpAllocateDirPrefixBlock(*(_WORD *)a2 + 2);
    v5 = DirPrefixBlock;
    if ( !DirPrefixBlock )
      return -1073741801;
    RtlUnicodeStringCopy(DirPrefixBlock + 4);
    v7 = *(_DWORD **)(a1 + 4);
    if ( *v7 != a1 )
      __fastfail(3u);
    *v5 = a1;
    v5[1] = v7;
    *v7 = v5;
    *(_DWORD *)(a1 + 4) = v5;
  }
  return 0;
}
