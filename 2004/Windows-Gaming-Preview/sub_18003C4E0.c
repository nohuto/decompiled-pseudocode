/*
 * XREFs of sub_18003C4E0 @ 0x18003C4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18003C4E0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration", 0x41u, a2);
}
