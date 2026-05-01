/*
 * XREFs of sub_180025580 @ 0x180025580
 * Callers:
 *     sub_1800250B0 @ 0x1800250B0 (sub_1800250B0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_180025580(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Gaming.Preview.GamesEnumeration.GameListFactoryServerImpl", 0x41u, a2);
}
