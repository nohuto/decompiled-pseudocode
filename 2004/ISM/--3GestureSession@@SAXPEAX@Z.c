/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x180064628
 * Callers:
 *     _DWMCursorBroker::Create_::_1_::dtor$1 @ 0x18004DC91 (_DWMCursorBroker--Create_--_1_--dtor$1.c)
 *     _ButtonProcessor::Create_::_1_::dtor$0 @ 0x18004DEEA (_ButtonProcessor--Create_--_1_--dtor$0.c)
 *     _DockDeviceCollection::Create_::_1_::dtor$1 @ 0x18004E2E1 (_DockDeviceCollection--Create_--_1_--dtor$1.c)
 *     _Win32kInterop::Create_::_1_::dtor$0 @ 0x18004E3B1 (_Win32kInterop--Create_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::Create_::_1_::dtor$0 @ 0x18004E470 (_ContextualProcessorBuffer--Create_--_1_--dtor$0.c)
 *     _AugmentedInputDeviceCollection::Create_::_1_::dtor$1 @ 0x18004E4CE (_AugmentedInputDeviceCollection--Create_--_1_--dtor$1.c)
 *     _KeyboardModifierState::Create_::_1_::dtor$0 @ 0x18004E78A (_KeyboardModifierState--Create_--_1_--dtor$0.c)
 *     _NonPointerProcessor::OnTargetWithFocusChanged_::_1_::dtor$0 @ 0x18004F830 (_NonPointerProcessor--OnTargetWithFocusChanged_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::Create_::_1_::dtor$1 @ 0x18005024E (_InputConfigContextProvider--Create_--_1_--dtor$1.c)
 *     _MobileButtonDeviceCollection::Create_::_1_::dtor$1 @ 0x180097A1E (_MobileButtonDeviceCollection--Create_--_1_--dtor$1.c)
 *     _ConsumerControlDeviceCollection::Create_::_1_::dtor$1 @ 0x1800992EE (_ConsumerControlDeviceCollection--Create_--_1_--dtor$1.c)
 *     _MPCInputRouter::GetMPCTarget_::_1_::dtor$1 @ 0x1800B7C20 (_MPCInputRouter--GetMPCTarget_--_1_--dtor$1.c)
 *     _MPCInputRouter::Initialize3DComponents_::_1_::dtor$3 @ 0x1800B8400 (_MPCInputRouter--Initialize3DComponents_--_1_--dtor$3.c)
 *     _MPCInputRouter::OnExclusiveModeStateChangedInputThread_::_1_::dtor$2 @ 0x1800B90B1 (_MPCInputRouter--OnExclusiveModeStateChangedInputThread_--_1_--dtor$2.c)
 *     _MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor$2 @ 0x1800B999B (_MPCInputRouter--UpdateFocusedInputTarget3D_--_1_--dtor$2.c)
 *     _DragNDropProcessor::Create_::_1_::dtor$1 @ 0x1800F8A3E (_DragNDropProcessor--Create_--_1_--dtor$1.c)
 *     _ResizeProcessor::Create_::_1_::dtor$1 @ 0x1800FDB7B (_ResizeProcessor--Create_--_1_--dtor$1.c)
 *     _ControllerProcessor::Create_::_1_::dtor$0 @ 0x1801207FF (_ControllerProcessor--Create_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::Create_::_1_::dtor$0 @ 0x18012C80C (_ISMHeatFrameworkHost--Create_--_1_--dtor$0.c)
 *     _DWMInputRouter::Create_::_1_::dtor$1 @ 0x180137E3B (_DWMInputRouter--Create_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::Create_::_1_::dtor$1 @ 0x1801458B0 (_VirtualTouchpadContextProvider--Create_--_1_--dtor$1.c)
 *     _ButtonRecognizer::Create_::_1_::dtor$1 @ 0x180172F73 (_ButtonRecognizer--Create_--_1_--dtor$1.c)
 *     _DragNDropProcessorLegacy::Create_::_1_::dtor$1 @ 0x1801749E3 (_DragNDropProcessorLegacy--Create_--_1_--dtor$1.c)
 *     _InputForwardProcessor::Create_::_1_::dtor$1 @ 0x180176693 (_InputForwardProcessor--Create_--_1_--dtor$1.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$0 @ 0x18017A775 (_EdgyProcessorTarget--Initialize_--_1_--dtor$0.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$3 @ 0x18017A781 (_EdgyProcessorTarget--Initialize_--_1_--dtor$3.c)
 *     _GazeProcessor::Create_::_1_::dtor$0 @ 0x1801886BB (_GazeProcessor--Create_--_1_--dtor$0.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$0 @ 0x180199366 (_TouchProcessor--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
