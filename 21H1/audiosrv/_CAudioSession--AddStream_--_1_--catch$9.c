/*
 * XREFs of _CAudioSession::AddStream_::_1_::catch$9 @ 0x18007B970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::AddStream_::_1_::catch_9(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 80);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 192) = *v3;
  return 0LL;
}
