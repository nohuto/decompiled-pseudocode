/*
 * XREFs of _CAppAudioSessionId::Initialize_::_1_::catch$7 @ 0x1800D361D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppAudioSessionId::Initialize_::_1_::catch_7(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 88);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 32) = *v3;
  return 0LL;
}
