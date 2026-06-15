/*
 * XREFs of _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$5 @ 0x14002D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x14003CD28 (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 68) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 68) &= ~2u;
    return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 224);
  }
  return result;
}
