/*
 * XREFs of sub_18002F6D0 @ 0x18002F6D0
 * Callers:
 *     sub_1800373B0 @ 0x1800373B0 (sub_1800373B0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18002F6D0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.Collections.IMapView`2<String, Object>", 0x39u, a2);
}
