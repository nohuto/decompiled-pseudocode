/*
 * XREFs of sub_1801344A8 @ 0x1801344A8
 * Callers:
 *     sub_18007C532 @ 0x18007C532 (sub_18007C532.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_1801344A8(HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
