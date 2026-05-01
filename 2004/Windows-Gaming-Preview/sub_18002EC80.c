/*
 * XREFs of sub_18002EC80 @ 0x18002EC80
 * Callers:
 *     sub_180037750 @ 0x180037750 (sub_180037750.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18002EC80(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.Collections.IVectorView`1<Guid>", 0x32u, a2);
}
