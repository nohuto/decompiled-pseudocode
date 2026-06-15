/*
 * XREFs of _EndpointCollection::AddDevice_::_1_::dtor$0 @ 0x18007C76C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointCollection::AddDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 32));
}
