/*
 * XREFs of IsKeyboardDelegationEnabledForThread @ 0x1C000FA80
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C000F3B0 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01B104C (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IsKeyboardDelegationEnabledForThread(InputDelegation *a1, const struct tagTHREADINFO *a2)
{
  return (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0
      && InputDelegation::IsDelegationEnabledForThread(a1, a2);
}
