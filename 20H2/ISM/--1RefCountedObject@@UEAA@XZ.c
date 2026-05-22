/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x18001B9E8
 * Callers:
 *     _ContextualProcessorBuffer::ContextualProcessorBuffer_::_1_::dtor$0 @ 0x180048F8C (_ContextualProcessorBuffer--ContextualProcessorBuffer_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x18004E4C6 (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$0 @ 0x18004E684 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$0.c)
 *     _KeyboardModifierState::KeyboardModifierState_::_1_::dtor$0 @ 0x18004E920 (_KeyboardModifierState--KeyboardModifierState_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x18004EAD5 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x18004EE78 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _NonPointerProcessor::OnTargetWithFocusChanged_::_1_::dtor$1 @ 0x18004F800 (_NonPointerProcessor--OnTargetWithFocusChanged_--_1_--dtor$1.c)
 *     _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$0 @ 0x1800501AA (_DWMFocusedInputTarget--DWMFocusedInputTarget_--_1_--dtor$0.c)
 *     _InputStateManager::InputStateManager_::_1_::dtor$0 @ 0x180050453 (_InputStateManager--InputStateManager_--_1_--dtor$0.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$0 @ 0x180051368 (_GameInputProcessor--GameInputProcessor_--_1_--dtor$0.c)
 *     _MPCTarget::MPCTarget_::_1_::dtor$0 @ 0x1800BA4AF (_MPCTarget--MPCTarget_--_1_--dtor$0.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$0 @ 0x1800F7F61 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$0.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$0 @ 0x1800FD4EA (_ResizeProcessor--ResizeProcessor_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x18012BF58 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _ButtonRecognizer::ButtonRecognizer_::_1_::dtor$0 @ 0x180172BC7 (_ButtonRecognizer--ButtonRecognizer_--_1_--dtor$0.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$0 @ 0x18017442F (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$0.c)
 *     _InputForwardProcessor::InputForwardProcessor_::_1_::dtor$0 @ 0x180176454 (_InputForwardProcessor--InputForwardProcessor_--_1_--dtor$0.c)
 *     _GameInputProcessor::_GameInputProcessor_::_1_::dtor$0 @ 0x18017BC75 (_GameInputProcessor--_GameInputProcessor_--_1_--dtor$0.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$1 @ 0x1801992E2 (_TouchProcessor--Initialize_--_1_--dtor$1.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x180199B1A (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
