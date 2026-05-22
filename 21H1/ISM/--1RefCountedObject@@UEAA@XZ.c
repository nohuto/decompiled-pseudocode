/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x18001B9B8
 * Callers:
 *     _ContextualProcessorBuffer::ContextualProcessorBuffer_::_1_::dtor$0 @ 0x1800495EC (_ContextualProcessorBuffer--ContextualProcessorBuffer_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x18004EB06 (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$0 @ 0x18004ECC4 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$0.c)
 *     _KeyboardModifierState::KeyboardModifierState_::_1_::dtor$0 @ 0x18004EF60 (_KeyboardModifierState--KeyboardModifierState_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x18004F115 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x18004F4B8 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _NonPointerProcessor::OnTargetWithFocusChanged_::_1_::dtor$1 @ 0x18004FE40 (_NonPointerProcessor--OnTargetWithFocusChanged_--_1_--dtor$1.c)
 *     _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$0 @ 0x1800507EA (_DWMFocusedInputTarget--DWMFocusedInputTarget_--_1_--dtor$0.c)
 *     _InputStateManager::InputStateManager_::_1_::dtor$0 @ 0x180050A93 (_InputStateManager--InputStateManager_--_1_--dtor$0.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$0 @ 0x1800519A8 (_GameInputProcessor--GameInputProcessor_--_1_--dtor$0.c)
 *     _MPCTarget::MPCTarget_::_1_::dtor$0 @ 0x1800BAA0F (_MPCTarget--MPCTarget_--_1_--dtor$0.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$0 @ 0x1800F84B1 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$0.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$0 @ 0x1800FDA3A (_ResizeProcessor--ResizeProcessor_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x18012C4A8 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _ButtonRecognizer::ButtonRecognizer_::_1_::dtor$0 @ 0x180173117 (_ButtonRecognizer--ButtonRecognizer_--_1_--dtor$0.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$0 @ 0x18017497F (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$0.c)
 *     _InputForwardProcessor::InputForwardProcessor_::_1_::dtor$0 @ 0x1801769A4 (_InputForwardProcessor--InputForwardProcessor_--_1_--dtor$0.c)
 *     _GameInputProcessor::_GameInputProcessor_::_1_::dtor$0 @ 0x18017C1C5 (_GameInputProcessor--_GameInputProcessor_--_1_--dtor$0.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$1 @ 0x1801997E2 (_TouchProcessor--Initialize_--_1_--dtor$1.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x18019A01A (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
