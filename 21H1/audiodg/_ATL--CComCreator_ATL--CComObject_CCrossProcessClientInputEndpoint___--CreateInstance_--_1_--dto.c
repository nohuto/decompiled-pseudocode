/*
 * XREFs of _ATL::CComCreator_ATL::CComObject_CCrossProcessClientInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x1400547EB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComCreator_ATL::CComObject_CCrossProcessClientInputEndpoint___::CreateInstance_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  CCrossProcessClientOutputEndpoint::operator delete(*(void **)(a2 + 32));
}
