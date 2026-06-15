/*
 * XREFs of _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$7 @ 0x14003DB6F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x1400324D4 (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~4u;
    return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 64));
  }
  return result;
}
