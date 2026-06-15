/*
 * XREFs of sub_180062D08 @ 0x180062D08
 * Callers:
 *     sub_180062950 @ 0x180062950 (sub_180062950.c)
 * Callees:
 *     sub_180062DCC @ 0x180062DCC (sub_180062DCC.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 */

__int64 sub_180062D08()
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x20) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 31LL, &unk_180171E90);
  }
  if ( !ConvertStringSidToSidW(L"S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775", &SidToCheck) )
    goto LABEL_11;
  if ( !ConvertStringSidToSidW(L"S-1-5-80-1580948945-3239616721-2529237571-3761093093-1214243633", &hMem) )
  {
    LocalFree(SidToCheck);
LABEL_11:
    SidToCheck = 0LL;
    hMem = 0LL;
    return 0LL;
  }
  if ( (unsigned int)sub_180062DCC() )
  {
    RtlAcquireResourceExclusive(&Resource, 1u);
    _InterlockedIncrement((volatile signed __int32 *)lpBaseAddress + 1);
    _InterlockedIncrement((volatile signed __int32 *)lpMem + 1);
    RtlReleaseResource(&Resource);
  }
  return 0LL;
}
