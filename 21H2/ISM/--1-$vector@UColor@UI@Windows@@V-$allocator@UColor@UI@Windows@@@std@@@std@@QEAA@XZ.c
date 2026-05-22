/*
 * XREFs of ??1?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x18008A20C
 * Callers:
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$5 @ 0x18005202A (_GameInputProcessor--GameInputProcessor_--_1_--dtor$5.c)
 *     _MPCRawInputProvider::FlushQueuedDeviceChanges_::_1_::dtor$1 @ 0x18008AAB5 (_MPCRawInputProvider--FlushQueuedDeviceChanges_--_1_--dtor$1.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$1 @ 0x1800A24AE (_LampArrayDevice--ProcessLampState_--_1_--dtor$1.c)
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$4 @ 0x1800AFD21 (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$4.c)
 *     _MPCInputRouter::Update3DFocusWNF_::_1_::dtor$0 @ 0x1800B99D5 (_MPCInputRouter--Update3DFocusWNF_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$0 @ 0x1800BDDB8 (_ViewHierarchyWithWindowManager--GetAllAncestors_--_1_--dtor$0.c)
 *     _InputAttemptedTargetManager::ProcessInputAttempt_::_1_::dtor$0 @ 0x180103D91 (_InputAttemptedTargetManager--ProcessInputAttempt_--_1_--dtor$0.c)
 *     _ButtonRecognizer::FindExactComboButtonMatch_::_1_::dtor$0 @ 0x1801738B0 (_ButtonRecognizer--FindExactComboButtonMatch_--_1_--dtor$0.c)
 *     _ButtonRecognizer::IsComboButtonCandidate_::_1_::dtor$0 @ 0x180173CAF (_ButtonRecognizer--IsComboButtonCandidate_--_1_--dtor$0.c)
 *     _ButtonRecognizer::RegisterComboButton_::_1_::dtor$0 @ 0x180174253 (_ButtonRecognizer--RegisterComboButton_--_1_--dtor$0.c)
 *     _GameInputProcessor::_GameInputProcessor_::_1_::dtor$5 @ 0x18017C175 (_GameInputProcessor--_GameInputProcessor_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Windows::UI::Color>::~vector<Windows::UI::Color>(__int64 a1)
{
  std::vector<Windows::UI::Color>::_Tidy(a1);
}
