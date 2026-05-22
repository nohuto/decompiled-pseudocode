/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x180064568
 * Callers:
 *     _DWMCursorBroker::Create_::_1_::dtor$1 @ 0x18004DC41 (_DWMCursorBroker--Create_--_1_--dtor$1.c)
 *     _ButtonProcessor::Create_::_1_::dtor$0 @ 0x18004DE9A (_ButtonProcessor--Create_--_1_--dtor$0.c)
 *     _DockDeviceCollection::Create_::_1_::dtor$1 @ 0x18004E291 (_DockDeviceCollection--Create_--_1_--dtor$1.c)
 *     _Win32kInterop::Create_::_1_::dtor$0 @ 0x18004E361 (_Win32kInterop--Create_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::Create_::_1_::dtor$0 @ 0x18004E420 (_ContextualProcessorBuffer--Create_--_1_--dtor$0.c)
 *     _AugmentedInputDeviceCollection::Create_::_1_::dtor$1 @ 0x18004E47E (_AugmentedInputDeviceCollection--Create_--_1_--dtor$1.c)
 *     _KeyboardModifierState::Create_::_1_::dtor$0 @ 0x18004E73A (_KeyboardModifierState--Create_--_1_--dtor$0.c)
 *     _NonPointerProcessor::OnTargetWithFocusChanged_::_1_::dtor$0 @ 0x18004F7E0 (_NonPointerProcessor--OnTargetWithFocusChanged_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::Create_::_1_::dtor$1 @ 0x1800501FE (_InputConfigContextProvider--Create_--_1_--dtor$1.c)
 *     _MobileButtonDeviceCollection::Create_::_1_::dtor$1 @ 0x18009797E (_MobileButtonDeviceCollection--Create_--_1_--dtor$1.c)
 *     _ConsumerControlDeviceCollection::Create_::_1_::dtor$1 @ 0x18009924E (_ConsumerControlDeviceCollection--Create_--_1_--dtor$1.c)
 *     _MPCInputRouter::GetMPCTarget_::_1_::dtor$1 @ 0x1800B7B80 (_MPCInputRouter--GetMPCTarget_--_1_--dtor$1.c)
 *     _MPCInputRouter::Initialize3DComponents_::_1_::dtor$3 @ 0x1800B8360 (_MPCInputRouter--Initialize3DComponents_--_1_--dtor$3.c)
 *     _MPCInputRouter::OnExclusiveModeStateChangedInputThread_::_1_::dtor$2 @ 0x1800B9011 (_MPCInputRouter--OnExclusiveModeStateChangedInputThread_--_1_--dtor$2.c)
 *     _MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor$2 @ 0x1800B98FB (_MPCInputRouter--UpdateFocusedInputTarget3D_--_1_--dtor$2.c)
 *     _DragNDropProcessor::Create_::_1_::dtor$1 @ 0x1800F89AE (_DragNDropProcessor--Create_--_1_--dtor$1.c)
 *     _ResizeProcessor::Create_::_1_::dtor$1 @ 0x1800FDAEB (_ResizeProcessor--Create_--_1_--dtor$1.c)
 *     _ControllerProcessor::Create_::_1_::dtor$0 @ 0x18012076F (_ControllerProcessor--Create_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::Create_::_1_::dtor$0 @ 0x18012C77C (_ISMHeatFrameworkHost--Create_--_1_--dtor$0.c)
 *     _DWMInputRouter::Create_::_1_::dtor$1 @ 0x180137DAB (_DWMInputRouter--Create_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::Create_::_1_::dtor$1 @ 0x180145820 (_VirtualTouchpadContextProvider--Create_--_1_--dtor$1.c)
 *     _ButtonRecognizer::Create_::_1_::dtor$1 @ 0x180172EE3 (_ButtonRecognizer--Create_--_1_--dtor$1.c)
 *     _DragNDropProcessorLegacy::Create_::_1_::dtor$1 @ 0x180174953 (_DragNDropProcessorLegacy--Create_--_1_--dtor$1.c)
 *     _InputForwardProcessor::Create_::_1_::dtor$1 @ 0x180176603 (_InputForwardProcessor--Create_--_1_--dtor$1.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$0 @ 0x18017A6E5 (_EdgyProcessorTarget--Initialize_--_1_--dtor$0.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$3 @ 0x18017A6F1 (_EdgyProcessorTarget--Initialize_--_1_--dtor$3.c)
 *     _GazeProcessor::Create_::_1_::dtor$0 @ 0x18018862B (_GazeProcessor--Create_--_1_--dtor$0.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$0 @ 0x1801992D6 (_TouchProcessor--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
