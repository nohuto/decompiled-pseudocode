/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x180064C90
 * Callers:
 *     _DWMCursorBroker::Create_::_1_::dtor$1 @ 0x18004E863 (_DWMCursorBroker--Create_--_1_--dtor$1.c)
 *     _ButtonProcessor::Create_::_1_::dtor$0 @ 0x18004EACA (_ButtonProcessor--Create_--_1_--dtor$0.c)
 *     _DockDeviceCollection::Create_::_1_::dtor$1 @ 0x18004EEC1 (_DockDeviceCollection--Create_--_1_--dtor$1.c)
 *     _Win32kInterop::Create_::_1_::dtor$0 @ 0x18004EF91 (_Win32kInterop--Create_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::Create_::_1_::dtor$0 @ 0x18004F050 (_ContextualProcessorBuffer--Create_--_1_--dtor$0.c)
 *     _AugmentedInputDeviceCollection::Create_::_1_::dtor$1 @ 0x18004F0AE (_AugmentedInputDeviceCollection--Create_--_1_--dtor$1.c)
 *     _KeyboardModifierState::Create_::_1_::dtor$0 @ 0x18004F36A (_KeyboardModifierState--Create_--_1_--dtor$0.c)
 *     _NonPointerProcessor::OnTargetWithFocusChanged_::_1_::dtor$0 @ 0x180050410 (_NonPointerProcessor--OnTargetWithFocusChanged_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::Create_::_1_::dtor$1 @ 0x180050E2E (_InputConfigContextProvider--Create_--_1_--dtor$1.c)
 *     _MobileButtonDeviceCollection::Create_::_1_::dtor$1 @ 0x180097DDE (_MobileButtonDeviceCollection--Create_--_1_--dtor$1.c)
 *     _ConsumerControlDeviceCollection::Create_::_1_::dtor$1 @ 0x1800996AE (_ConsumerControlDeviceCollection--Create_--_1_--dtor$1.c)
 *     _MPCInputRouter::GetMPCTarget_::_1_::dtor$1 @ 0x1800B7FE0 (_MPCInputRouter--GetMPCTarget_--_1_--dtor$1.c)
 *     _MPCInputRouter::Initialize3DComponents_::_1_::dtor$3 @ 0x1800B87C0 (_MPCInputRouter--Initialize3DComponents_--_1_--dtor$3.c)
 *     _MPCInputRouter::OnExclusiveModeStateChangedInputThread_::_1_::dtor$2 @ 0x1800B9471 (_MPCInputRouter--OnExclusiveModeStateChangedInputThread_--_1_--dtor$2.c)
 *     _MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor$2 @ 0x1800B9D5B (_MPCInputRouter--UpdateFocusedInputTarget3D_--_1_--dtor$2.c)
 *     _DragNDropProcessor::Create_::_1_::dtor$1 @ 0x1800F8E0E (_DragNDropProcessor--Create_--_1_--dtor$1.c)
 *     _ResizeProcessor::Create_::_1_::dtor$1 @ 0x1800FDF4B (_ResizeProcessor--Create_--_1_--dtor$1.c)
 *     _ControllerProcessor::Create_::_1_::dtor$0 @ 0x180120C5F (_ControllerProcessor--Create_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::Create_::_1_::dtor$0 @ 0x18012CC6C (_ISMHeatFrameworkHost--Create_--_1_--dtor$0.c)
 *     _DWMInputRouter::Create_::_1_::dtor$1 @ 0x18013829B (_DWMInputRouter--Create_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::Create_::_1_::dtor$1 @ 0x180145D10 (_VirtualTouchpadContextProvider--Create_--_1_--dtor$1.c)
 *     _ButtonRecognizer::Create_::_1_::dtor$1 @ 0x180173393 (_ButtonRecognizer--Create_--_1_--dtor$1.c)
 *     _DragNDropProcessorLegacy::Create_::_1_::dtor$1 @ 0x180174E03 (_DragNDropProcessorLegacy--Create_--_1_--dtor$1.c)
 *     _InputForwardProcessor::Create_::_1_::dtor$1 @ 0x180176AB3 (_InputForwardProcessor--Create_--_1_--dtor$1.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$0 @ 0x18017AB95 (_EdgyProcessorTarget--Initialize_--_1_--dtor$0.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$3 @ 0x18017ABA1 (_EdgyProcessorTarget--Initialize_--_1_--dtor$3.c)
 *     _GazeProcessor::Create_::_1_::dtor$0 @ 0x180188ADB (_GazeProcessor--Create_--_1_--dtor$0.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$0 @ 0x180199786 (_TouchProcessor--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
