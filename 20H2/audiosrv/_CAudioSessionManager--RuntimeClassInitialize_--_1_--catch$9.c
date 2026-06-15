/*
 * XREFs of _CAudioSessionManager::RuntimeClassInitialize_::_1_::catch$9 @ 0x18007A339
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::RuntimeClassInitialize_::_1_::catch_9(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 128) = *v3;
  return 0LL;
}
