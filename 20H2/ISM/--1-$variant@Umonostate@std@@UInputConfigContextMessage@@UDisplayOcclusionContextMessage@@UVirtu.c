/*
 * XREFs of ??1?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAA@XZ @ 0x18012C098
 * Callers:
 *     _InputConfigContextProvider::RegisterSystemContextObserver_::_1_::dtor$0 @ 0x18005118F (_InputConfigContextProvider--RegisterSystemContextObserver_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::OnInputConfigMessageReceived_::_1_::dtor$0 @ 0x1800511A1 (_InputConfigContextProvider--OnInputConfigMessageReceived_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$0 @ 0x18012CE33 (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$1 @ 0x18012CE3F (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$1.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$2 @ 0x18012CE4B (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$2.c)
 *     _VirtualTouchpadContextProvider::Broadcast_::_1_::dtor$2 @ 0x18014577A (_VirtualTouchpadContextProvider--Broadcast_--_1_--dtor$2.c)
 *     _DisplayOcclusionContextProvider::Broadcast_::_1_::dtor$2 @ 0x180146B17 (_DisplayOcclusionContextProvider--Broadcast_--_1_--dtor$2.c)
 *     _GazeProcessor::OnDeviceUpdate_::_1_::dtor$0 @ 0x18018898A (_GazeProcessor--OnDeviceUpdate_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>(
        __int64 a1)
{
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::_Destroy(a1);
}
