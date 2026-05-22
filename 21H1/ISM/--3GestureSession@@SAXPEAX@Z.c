/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x180064C18
 * Callers:
 *     _DWMCursorBroker::Create_::_1_::dtor$1 @ 0x18004E281 (_DWMCursorBroker--Create_--_1_--dtor$1.c)
 *     _ButtonProcessor::Create_::_1_::dtor$0 @ 0x18004E4DA (_ButtonProcessor--Create_--_1_--dtor$0.c)
 *     _DockDeviceCollection::Create_::_1_::dtor$1 @ 0x18004E8D1 (_DockDeviceCollection--Create_--_1_--dtor$1.c)
 *     _Win32kInterop::Create_::_1_::dtor$0 @ 0x18004E9A1 (_Win32kInterop--Create_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::Create_::_1_::dtor$0 @ 0x18004EA60 (_ContextualProcessorBuffer--Create_--_1_--dtor$0.c)
 *     _AugmentedInputDeviceCollection::Create_::_1_::dtor$1 @ 0x18004EABE (_AugmentedInputDeviceCollection--Create_--_1_--dtor$1.c)
 *     _KeyboardModifierState::Create_::_1_::dtor$0 @ 0x18004ED7A (_KeyboardModifierState--Create_--_1_--dtor$0.c)
 *     _NonPointerProcessor::OnTargetWithFocusChanged_::_1_::dtor$0 @ 0x18004FE20 (_NonPointerProcessor--OnTargetWithFocusChanged_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::Create_::_1_::dtor$1 @ 0x18005083E (_InputConfigContextProvider--Create_--_1_--dtor$1.c)
 *     _MobileButtonDeviceCollection::Create_::_1_::dtor$1 @ 0x180097EDE (_MobileButtonDeviceCollection--Create_--_1_--dtor$1.c)
 *     _ConsumerControlDeviceCollection::Create_::_1_::dtor$1 @ 0x1800997AE (_ConsumerControlDeviceCollection--Create_--_1_--dtor$1.c)
 *     _MPCInputRouter::GetMPCTarget_::_1_::dtor$1 @ 0x1800B80E0 (_MPCInputRouter--GetMPCTarget_--_1_--dtor$1.c)
 *     _MPCInputRouter::Initialize3DComponents_::_1_::dtor$3 @ 0x1800B88C0 (_MPCInputRouter--Initialize3DComponents_--_1_--dtor$3.c)
 *     _MPCInputRouter::OnExclusiveModeStateChangedInputThread_::_1_::dtor$2 @ 0x1800B9571 (_MPCInputRouter--OnExclusiveModeStateChangedInputThread_--_1_--dtor$2.c)
 *     _MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor$2 @ 0x1800B9E5B (_MPCInputRouter--UpdateFocusedInputTarget3D_--_1_--dtor$2.c)
 *     _DragNDropProcessor::Create_::_1_::dtor$1 @ 0x1800F8EFE (_DragNDropProcessor--Create_--_1_--dtor$1.c)
 *     _ResizeProcessor::Create_::_1_::dtor$1 @ 0x1800FE03B (_ResizeProcessor--Create_--_1_--dtor$1.c)
 *     _ControllerProcessor::Create_::_1_::dtor$0 @ 0x180120CBF (_ControllerProcessor--Create_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::Create_::_1_::dtor$0 @ 0x18012CCCC (_ISMHeatFrameworkHost--Create_--_1_--dtor$0.c)
 *     _DWMInputRouter::Create_::_1_::dtor$1 @ 0x1801382FB (_DWMInputRouter--Create_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::Create_::_1_::dtor$1 @ 0x180145D70 (_VirtualTouchpadContextProvider--Create_--_1_--dtor$1.c)
 *     _ButtonRecognizer::Create_::_1_::dtor$1 @ 0x180173433 (_ButtonRecognizer--Create_--_1_--dtor$1.c)
 *     _DragNDropProcessorLegacy::Create_::_1_::dtor$1 @ 0x180174EA3 (_DragNDropProcessorLegacy--Create_--_1_--dtor$1.c)
 *     _InputForwardProcessor::Create_::_1_::dtor$1 @ 0x180176B53 (_InputForwardProcessor--Create_--_1_--dtor$1.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$0 @ 0x18017AC35 (_EdgyProcessorTarget--Initialize_--_1_--dtor$0.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$3 @ 0x18017AC41 (_EdgyProcessorTarget--Initialize_--_1_--dtor$3.c)
 *     _GazeProcessor::Create_::_1_::dtor$0 @ 0x180188B7B (_GazeProcessor--Create_--_1_--dtor$0.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$0 @ 0x1801997D6 (_TouchProcessor--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
