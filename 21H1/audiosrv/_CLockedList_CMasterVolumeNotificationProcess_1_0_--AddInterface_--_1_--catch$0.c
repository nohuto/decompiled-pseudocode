/*
 * XREFs of _CLockedList_CMasterVolumeNotificationProcess_1_0_::AddInterface_::_1_::catch$0 @ 0x18007C5AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLockedList_CMasterVolumeNotificationProcess_1_0_::AddInterface_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 112) = *v3;
  return 0LL;
}
