/*
 * XREFs of sub_1800107F0 @ 0x1800107F0
 * Callers:
 *     sub_1800102C0 @ 0x1800102C0 (sub_1800102C0.c)
 *     sub_180010410 @ 0x180010410 (sub_180010410.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_1800107F0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Gaming.Preview.GamesEnumeration.GameListEntry", 0x35u, a2);
}
