/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__AumId__ @ 0x1800474C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__AumId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005AED8);
  qword_18005AED8 = 0LL;
  return result;
}
