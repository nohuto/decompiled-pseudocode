/*
 * XREFs of _CAudioSessionStore::OpenSessionKey_::_1_::catch$50 @ 0x18007BAE1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionStore::OpenSessionKey_::_1_::catch_50(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 112);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 76) = *v3;
  return 0LL;
}
