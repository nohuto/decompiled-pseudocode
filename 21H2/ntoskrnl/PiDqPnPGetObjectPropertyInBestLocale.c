/*
 * XREFs of PiDqPnPGetObjectPropertyInBestLocale @ 0x14062DBA4
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x14062F90C (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x140771334 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408A4640 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x1406288A8 (PnpFreeDevProperty.c)
 *     PiDqPnPGetObjectProperty @ 0x14062CDA4 (PiDqPnPGetObjectProperty.c)
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
