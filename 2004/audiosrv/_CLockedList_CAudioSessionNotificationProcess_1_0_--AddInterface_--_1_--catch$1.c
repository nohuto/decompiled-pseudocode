/*
 * XREFs of _CLockedList_CAudioSessionNotificationProcess_1_0_::AddInterface_::_1_::catch$1 @ 0x1800CEEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLockedList_CAudioSessionNotificationProcess_1_0_::AddInterface_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 128) = *v3;
  return 0LL;
}
