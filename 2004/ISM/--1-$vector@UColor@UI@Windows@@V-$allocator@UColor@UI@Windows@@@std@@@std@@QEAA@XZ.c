/*
 * XREFs of ??1?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x180089E4C
 * Callers:
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$5 @ 0x180051426 (_GameInputProcessor--GameInputProcessor_--_1_--dtor$5.c)
 *     _MPCRawInputProvider::FlushQueuedDeviceChanges_::_1_::dtor$1 @ 0x18008A6F5 (_MPCRawInputProvider--FlushQueuedDeviceChanges_--_1_--dtor$1.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$1 @ 0x1800A20EE (_LampArrayDevice--ProcessLampState_--_1_--dtor$1.c)
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$4 @ 0x1800AF961 (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$4.c)
 *     _MPCInputRouter::Update3DFocusWNF_::_1_::dtor$0 @ 0x1800B9615 (_MPCInputRouter--Update3DFocusWNF_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$0 @ 0x1800BD9F8 (_ViewHierarchyWithWindowManager--GetAllAncestors_--_1_--dtor$0.c)
 *     _InputAttemptedTargetManager::ProcessInputAttempt_::_1_::dtor$0 @ 0x1801039C1 (_InputAttemptedTargetManager--ProcessInputAttempt_--_1_--dtor$0.c)
 *     _ButtonRecognizer::FindExactComboButtonMatch_::_1_::dtor$0 @ 0x180173490 (_ButtonRecognizer--FindExactComboButtonMatch_--_1_--dtor$0.c)
 *     _ButtonRecognizer::IsComboButtonCandidate_::_1_::dtor$0 @ 0x18017388F (_ButtonRecognizer--IsComboButtonCandidate_--_1_--dtor$0.c)
 *     _ButtonRecognizer::RegisterComboButton_::_1_::dtor$0 @ 0x180173E33 (_ButtonRecognizer--RegisterComboButton_--_1_--dtor$0.c)
 *     _GameInputProcessor::_GameInputProcessor_::_1_::dtor$5 @ 0x18017BD55 (_GameInputProcessor--_GameInputProcessor_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Windows::UI::Color>::~vector<Windows::UI::Color>(__int64 a1)
{
  std::vector<Windows::UI::Color>::_Tidy(a1);
}
