/*
 * XREFs of ??1?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@QEAA@XZ @ 0x18012C080
 * Callers:
 *     _ISMHeatFrameworkHost::BroadcastContextMessage_::_1_::dtor$0 @ 0x18012C663 (_ISMHeatFrameworkHost--BroadcastContextMessage_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::variant<std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage>::~variant<std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage>(
        __int64 a1,
        __int64 a2)
{
  std::_Variant_raw_visit1<2>::_Visit<_lambda_7c9a1ed22efa7e719e5ba754edc265b7_,std::_Variant_storage_<0,std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage> &>(
    *(char *)(a1 + 64) + 1,
    a2,
    a1);
}
