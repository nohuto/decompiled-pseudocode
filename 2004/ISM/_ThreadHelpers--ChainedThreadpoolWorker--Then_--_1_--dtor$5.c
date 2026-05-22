/*
 * XREFs of _ThreadHelpers::ChainedThreadpoolWorker::Then_::_1_::dtor$5 @ 0x1801661FB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ThreadHelpers::ChainedThreadpoolWorker::Then_::_1_::dtor_5(
        __int64 a1,
        BamoImpl::BamoMPCConstantManagerClientProxyImpl **a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    a2[12],
    (struct Microsoft::BamoImpl::BamoProxyImpl *)a2);
}
