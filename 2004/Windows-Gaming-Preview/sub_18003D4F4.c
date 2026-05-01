/*
 * XREFs of sub_18003D4F4 @ 0x18003D4F4
 * Callers:
 *     sub_180046D96 @ 0x180046D96 (sub_180046D96.c)
 *     sub_180046DA8 @ 0x180046DA8 (sub_180046DA8.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18003D4F4(HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
