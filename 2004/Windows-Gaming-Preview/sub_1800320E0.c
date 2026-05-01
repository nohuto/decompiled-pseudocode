/*
 * XREFs of sub_1800320E0 @ 0x1800320E0
 * Callers:
 *     sub_180037740 @ 0x180037740 (sub_180037740.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_1800320E0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>",
           0x6Au,
           a2);
}
