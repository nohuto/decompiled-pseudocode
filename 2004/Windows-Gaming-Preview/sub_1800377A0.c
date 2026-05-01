/*
 * XREFs of sub_1800377A0 @ 0x1800377A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_1800377A0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Gaming.Preview.GamesEnumeration.GameConfigAppDisplayInfoServer", 0x46u, a2);
}
