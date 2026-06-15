/*
 * XREFs of _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$7 @ 0x18003C594
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCellularHostProcess@CProcess@@UEAAX_N@Z @ 0x1800051E0 (-SetCellularHostProcess@CProcess@@UEAAX_N@Z.c)
 */

void __fastcall TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  CProcess::SetCellularHostProcess(*(CProcess **)(a2 + 72));
}
