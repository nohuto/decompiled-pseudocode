/*
 * XREFs of _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$5 @ 0x180041488
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<ApplicationSpecificEndpointInfo>::~ComPtr<ApplicationSpecificEndpointInfo>((_QWORD *)(a2 + 152));
}
