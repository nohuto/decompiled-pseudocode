/*
 * XREFs of sub_180013580 @ 0x180013580
 * Callers:
 *     sub_180015C80 @ 0x180015C80 (sub_180015C80.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_180013580(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.Collections.IVector`1<String>", 0x30u, a2);
}
