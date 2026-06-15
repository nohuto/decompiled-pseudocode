/*
 * XREFs of _CMonitorManager::HandleDeviceRemoved_::_1_::catch$10 @ 0x1800FC6EF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::HandleDeviceRemoved_::_1_::catch_10(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 160) = *v3;
  return 0LL;
}
