/*
 * XREFs of _ThreadpoolTimerHelpers::KeepAliveTimer::KeepAliveTimer_::_1_::dtor$2 @ 0x1801699C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ThreadpoolTimerHelpers::KeepAliveTimer::KeepAliveTimer_::_1_::dtor_2(
        __int64 a1,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    (BamoImpl::BamoMPCConstantManagerClientProxyImpl *)(*((_QWORD *)a2 + 6) + 24LL),
    a2);
}
