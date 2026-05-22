/*
 * XREFs of _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$3 @ 0x1801744EF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor_3(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::~unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>(
    (wil::details **)(*(_QWORD *)(a2 + 48) + 40LL),
    a2,
    a3);
}
