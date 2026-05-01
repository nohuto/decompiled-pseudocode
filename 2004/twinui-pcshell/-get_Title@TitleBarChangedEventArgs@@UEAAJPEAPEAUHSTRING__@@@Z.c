/*
 * XREFs of ?get_Title@TitleBarChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18008A300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall TitleBarChangedEventArgs::get_Title(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[8], a2);
}
