/*
 * XREFs of PiDqPnPGetObjectPropertyInBestLocale @ 0x14064565C
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x140645738 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x14076CE54 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408A6F10 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     PiDqPnPGetObjectProperty @ 0x1406401C4 (PiDqPnPGetObjectProperty.c)
 *     PnpFreeDevProperty @ 0x140641D00 (PnpFreeDevProperty.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyInBestLocale(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        NTSTRSAFE_PCWSTR a6,
        _OWORD *a7)
{
  __int64 v12; // rax
  __int64 result; // rax

  *a7 = 0LL;
  a7[1] = 0LL;
  a7[2] = 0LL;
  while ( *a6 )
  {
    result = PiDqPnPGetObjectProperty(a1, a2, a3, a4, a5, a6, a7);
    if ( (int)result < 0 || *((_DWORD *)a7 + 8) )
      return result;
    PnpFreeDevProperty((__int64)a7, 0x58706E50u);
    v12 = -1LL;
    do
      ++v12;
    while ( a6[v12] );
    a6 += v12 + 1;
  }
  return PiDqPnPGetObjectProperty(a1, a2, a3, a4, a5, 0LL, a7);
}
