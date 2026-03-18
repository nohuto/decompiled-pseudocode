/*
 * XREFs of IsKeyboardDelegationEnabledForThread @ 0x1C00772C0
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0075F50 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01A8F6C (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IsKeyboardDelegationEnabledForThread(InputDelegation *a1, const struct tagTHREADINFO *a2)
{
  return (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0
      && InputDelegation::IsDelegationEnabledForThread(a1, a2);
}
