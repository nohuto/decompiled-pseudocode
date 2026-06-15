/*
 * XREFs of _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$8 @ 0x1400483F6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x14003CD28 (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 104));
  }
  return result;
}
