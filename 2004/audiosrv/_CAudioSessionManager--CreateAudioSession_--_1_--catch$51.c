/*
 * XREFs of _CAudioSessionManager::CreateAudioSession_::_1_::catch$51 @ 0x180077DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::CreateAudioSession_::_1_::catch_51(__int64 a1, __int64 a2)
{
  int *v3; // rbx
  int v4; // eax

  v3 = *(int **)(a2 + 1272);
  v4 = *v3;
  *(_DWORD *)(a2 + 544) = *v3;
  if ( v4 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 136) = *v3;
  return 0LL;
}
