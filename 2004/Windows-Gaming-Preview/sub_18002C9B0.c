/*
 * XREFs of sub_18002C9B0 @ 0x18002C9B0
 * Callers:
 *     sub_1800375A0 @ 0x1800375A0 (sub_1800375A0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18002C9B0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.Collections.IVector`1<Guid>", 0x2Eu, a2);
}
