/*
 * XREFs of sub_18002CBE0 @ 0x18002CBE0
 * Callers:
 *     sub_1800376B0 @ 0x1800376B0 (sub_1800376B0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18002CBE0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.Collections.IMap`2<String, Object>", 0x35u, a2);
}
