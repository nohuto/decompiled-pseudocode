/*
 * XREFs of sub_18000D880 @ 0x18000D880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18000D880(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>",
           0x61u,
           a2);
}
