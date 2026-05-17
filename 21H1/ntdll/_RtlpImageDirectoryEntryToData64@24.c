/*
 * XREFs of _RtlpImageDirectoryEntryToData64@24 @ 0x4B2A7346
 * Callers:
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _RtlpImageDirectoryEntryToDataEx@20 @ 0x4B2BE470 (_RtlpImageDirectoryEntryToDataEx@20.c)
 * Callees:
 *     _RtlAddressInSectionTable@12 @ 0x4B2B95F0 (_RtlAddressInSectionTable@12.c)
 */

int __fastcall RtlpImageDirectoryEntryToData64(int a1, char a2, unsigned __int16 a3, _DWORD *a4, int a5, _DWORD *a6)
{
  unsigned int v6; // edi
  int v8; // eax

  if ( (unsigned int)a3 < *(_DWORD *)(a5 + 132) )
  {
    v6 = *(_DWORD *)(a5 + 8 * a3 + 136);
    if ( !v6 )
      return -1073741822;
    *a4 = *(_DWORD *)(a5 + 8 * a3 + 140);
    if ( a2 || v6 < *(_DWORD *)(a5 + 84) )
    {
      *a6 = v6 + a1;
      return 0;
    }
    v8 = RtlAddressInSectionTable(a5, a1, v6);
    *a6 = v8;
    if ( v8 )
      return 0;
  }
  return -1073741811;
}
