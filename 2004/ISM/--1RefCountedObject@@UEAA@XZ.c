/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x18001B9B8
 * Callers:
 *     _ContextualProcessorBuffer::ContextualProcessorBuffer_::_1_::dtor$0 @ 0x180048FDC (_ContextualProcessorBuffer--ContextualProcessorBuffer_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x18004E516 (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$0 @ 0x18004E6D4 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$0.c)
 *     _KeyboardModifierState::KeyboardModifierState_::_1_::dtor$0 @ 0x18004E970 (_KeyboardModifierState--KeyboardModifierState_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x18004EB25 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x18004EEC8 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _NonPointerProcessor::OnTargetWithFocusChanged_::_1_::dtor$1 @ 0x18004F850 (_NonPointerProcessor--OnTargetWithFocusChanged_--_1_--dtor$1.c)
 *     _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$0 @ 0x1800501FA (_DWMFocusedInputTarget--DWMFocusedInputTarget_--_1_--dtor$0.c)
 *     _InputStateManager::InputStateManager_::_1_::dtor$0 @ 0x1800504A3 (_InputStateManager--InputStateManager_--_1_--dtor$0.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$0 @ 0x1800513B8 (_GameInputProcessor--GameInputProcessor_--_1_--dtor$0.c)
 *     _MPCTarget::MPCTarget_::_1_::dtor$0 @ 0x1800BA54F (_MPCTarget--MPCTarget_--_1_--dtor$0.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$0 @ 0x1800F7FF1 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$0.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$0 @ 0x1800FD57A (_ResizeProcessor--ResizeProcessor_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x18012BFE8 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _ButtonRecognizer::ButtonRecognizer_::_1_::dtor$0 @ 0x180172C57 (_ButtonRecognizer--ButtonRecognizer_--_1_--dtor$0.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$0 @ 0x1801744BF (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$0.c)
 *     _InputForwardProcessor::InputForwardProcessor_::_1_::dtor$0 @ 0x1801764E4 (_InputForwardProcessor--InputForwardProcessor_--_1_--dtor$0.c)
 *     _GameInputProcessor::_GameInputProcessor_::_1_::dtor$0 @ 0x18017BD05 (_GameInputProcessor--_GameInputProcessor_--_1_--dtor$0.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$1 @ 0x180199372 (_TouchProcessor--Initialize_--_1_--dtor$1.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x180199BAA (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
