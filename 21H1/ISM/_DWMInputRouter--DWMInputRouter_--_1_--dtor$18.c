/*
 * XREFs of _DWMInputRouter::DWMInputRouter_::_1_::dtor$18 @ 0x18004F2D1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::DWMInputRouter_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  return wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::~unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>(*(_QWORD *)(a2 + 112) + 480LL);
}
