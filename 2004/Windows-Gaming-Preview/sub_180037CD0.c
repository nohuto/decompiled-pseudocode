/*
 * XREFs of sub_180037CD0 @ 0x180037CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_180037CD0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Gaming.Preview.GamesEnumeration.TileAppDisplayInfoServer", 0x40u, a2);
}
