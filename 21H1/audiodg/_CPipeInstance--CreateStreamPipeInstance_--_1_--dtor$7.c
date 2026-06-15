/*
 * XREFs of _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$7 @ 0x140022460
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x1400324D4 (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateStreamPipeInstance_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 68) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 68) &= ~2u;
    return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 344);
  }
  return result;
}
