/*
 * XREFs of sub_18000D610 @ 0x18000D610
 * Callers:
 *     sub_180010430 @ 0x180010430 (sub_180010430.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18000D610(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>",
           0x63u,
           a2);
}
