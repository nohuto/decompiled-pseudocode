/*
 * XREFs of ??1?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAA@XZ @ 0x18012C5E8
 * Callers:
 *     _InputConfigContextProvider::RegisterSystemContextObserver_::_1_::dtor$0 @ 0x1800517CF (_InputConfigContextProvider--RegisterSystemContextObserver_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::OnInputConfigMessageReceived_::_1_::dtor$0 @ 0x1800517E1 (_InputConfigContextProvider--OnInputConfigMessageReceived_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$0 @ 0x18012D383 (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$1 @ 0x18012D38F (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$1.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$2 @ 0x18012D39B (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$2.c)
 *     _VirtualTouchpadContextProvider::Broadcast_::_1_::dtor$2 @ 0x180145CCA (_VirtualTouchpadContextProvider--Broadcast_--_1_--dtor$2.c)
 *     _DisplayOcclusionContextProvider::Broadcast_::_1_::dtor$2 @ 0x180147067 (_DisplayOcclusionContextProvider--Broadcast_--_1_--dtor$2.c)
 *     _GazeProcessor::OnDeviceUpdate_::_1_::dtor$0 @ 0x180188EDA (_GazeProcessor--OnDeviceUpdate_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>(
        __int64 a1)
{
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::_Destroy(a1);
}
