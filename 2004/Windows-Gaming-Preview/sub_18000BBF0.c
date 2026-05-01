/*
 * XREFs of sub_18000BBF0 @ 0x18000BBF0
 * Callers:
 *     sub_1800103D0 @ 0x1800103D0 (sub_1800103D0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18000BBF0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Foundation.Collections.IVector`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>",
           0x5Fu,
           a2);
}
