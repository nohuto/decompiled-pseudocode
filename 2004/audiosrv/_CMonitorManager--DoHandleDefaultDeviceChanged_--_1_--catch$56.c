/*
 * XREFs of _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::catch$56 @ 0x1800FC39E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::catch_56(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 160);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 264) = *v3;
  return 0LL;
}
