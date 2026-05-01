/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__MFURank__ @ 0x1800474F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__MFURank__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005AEE0);
  qword_18005AEE0 = 0LL;
  return result;
}
