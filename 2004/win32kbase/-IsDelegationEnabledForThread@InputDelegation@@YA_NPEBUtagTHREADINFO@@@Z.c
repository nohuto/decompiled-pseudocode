/*
 * XREFs of ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01AB2EC
 * Callers:
 *     IsSpatialDelegationEnabledForThread @ 0x1C006DB50 (IsSpatialDelegationEnabledForThread.c)
 *     NtUserGetKeyState @ 0x1C00ACAB0 (NtUserGetKeyState.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C00AD900 (IsKeyboardDelegationEnabledForThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputDelegation::IsDelegationEnabledForThread(PETHREAD *this, const struct tagTHREADINFO *a2)
{
  return ((unsigned int)PsGetThreadProcessId(*this) & 0xFFFFFFFC) == InputDelegation::CInputDelegationInfo::gInstance;
}
