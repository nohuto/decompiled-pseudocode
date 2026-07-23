/*
 * XREFs of __wcsnicmp @ 0x4B2F7AC0
 * Callers:
 *     _IsSystemRootPath@8 @ 0x4B2B8E93 (_IsSystemRootPath@8.c)
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 *     _IsProgramFilesPath@8 @ 0x4B2DAE59 (_IsProgramFilesPath@8.c)
 *     _LdrpGetFileDriverStoreRoot@12 @ 0x4B2E7D5F (_LdrpGetFileDriverStoreRoot@12.c)
 *     _RtlpHpOptIntoSegmentHeap@4 @ 0x4B358522 (_RtlpHpOptIntoSegmentHeap@4.c)
 *     _punycode_decode@32 @ 0x4B365668 (_punycode_decode@32.c)
 *     _punycode_encode@24 @ 0x4B365B90 (_punycode_encode@24.c)
 * Callees:
 *     <none>
 */

int __cdecl _wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  int v3; // esi
  int result; // eax
  const wchar_t *v5; // ecx
  unsigned __int16 v6; // dx
  wchar_t v7; // ax

  v3 = MaxCount;
  result = 0;
  if ( (_DWORD)MaxCount )
  {
    v5 = String2;
    do
    {
      v6 = *(const wchar_t *)((char *)v5 + (char *)String1 - (char *)String2);
      if ( (unsigned __int16)(v6 - 65) <= 0x19u )
        v6 += 32;
      if ( (unsigned __int16)(*v5 - 65) > 0x19u )
        v7 = *v5;
      else
        v7 = *v5 + 32;
      ++v5;
      --v3;
    }
    while ( v3 && v6 && v6 == v7 );
    return v6 - v7;
  }
  return result;
}
