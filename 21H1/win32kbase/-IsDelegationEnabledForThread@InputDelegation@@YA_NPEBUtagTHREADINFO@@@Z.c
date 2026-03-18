/*
 * XREFs of ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01B104C
 * Callers:
 *     IsKeyboardDelegationEnabledForThread @ 0x1C000FA80 (IsKeyboardDelegationEnabledForThread.c)
 *     IsSpatialDelegationEnabledForThread @ 0x1C0062830 (IsSpatialDelegationEnabledForThread.c)
 *     NtUserGetKeyState @ 0x1C0073EA0 (NtUserGetKeyState.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputDelegation::IsDelegationEnabledForThread(PETHREAD *this, const struct tagTHREADINFO *a2)
{
  return ((unsigned int)PsGetThreadProcessId(*this) & 0xFFFFFFFC) == InputDelegation::CInputDelegationInfo::gInstance;
}
