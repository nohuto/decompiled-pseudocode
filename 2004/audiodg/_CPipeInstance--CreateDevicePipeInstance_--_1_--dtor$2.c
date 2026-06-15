/*
 * XREFs of _CPipeInstance::CreateDevicePipeInstance_::_1_::dtor$2 @ 0x1400225E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x1400324D4 (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateDevicePipeInstance_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 72) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 72) &= ~1u;
    return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 256);
  }
  return result;
}
