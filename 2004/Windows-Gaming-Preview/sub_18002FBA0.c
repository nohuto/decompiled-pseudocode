/*
 * XREFs of sub_18002FBA0 @ 0x18002FBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18002FBA0(__int64 a1, HSTRING *a2)
{
  return WindowsDuplicateString(*(HSTRING *)(a1 + 64), a2);
}
