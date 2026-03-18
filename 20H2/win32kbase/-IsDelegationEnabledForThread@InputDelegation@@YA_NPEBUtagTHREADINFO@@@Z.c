/*
 * XREFs of ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01A8F6C
 * Callers:
 *     IsSpatialDelegationEnabledForThread @ 0x1C0032A50 (IsSpatialDelegationEnabledForThread.c)
 *     NtUserGetKeyState @ 0x1C00764D0 (NtUserGetKeyState.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C00772C0 (IsKeyboardDelegationEnabledForThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputDelegation::IsDelegationEnabledForThread(PETHREAD *this, const struct tagTHREADINFO *a2)
{
  return ((unsigned int)PsGetThreadProcessId(*this) & 0xFFFFFFFC) == InputDelegation::CInputDelegationInfo::gInstance;
}
