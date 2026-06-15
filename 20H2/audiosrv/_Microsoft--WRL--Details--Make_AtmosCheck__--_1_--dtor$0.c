/*
 * XREFs of _Microsoft::WRL::Details::Make_AtmosCheck__::_1_::dtor$0 @ 0x18007B71F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIAudioSessionStore@@@WRL@Microsoft@@QEAA@XZ @ 0x180072B64 (--1-$ComPtr@UIAudioSessionStore@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_AtmosCheck__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<IAudioSessionStore>::~ComPtr<IAudioSessionStore>(*(__int64 **)(a2 + 80));
  }
  return result;
}
