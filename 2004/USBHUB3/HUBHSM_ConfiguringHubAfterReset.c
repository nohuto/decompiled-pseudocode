/*
 * XREFs of HUBHSM_ConfiguringHubAfterReset @ 0x1C0008070
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_LogHubResetRecoveryWasInvoked @ 0x1C00775C4 (HUBFDO_LogHubResetRecoveryWasInvoked.c)
 */

__int64 __fastcall HUBHSM_ConfiguringHubAfterReset(__int64 a1)
{
  HUBFDO_LogHubResetRecoveryWasInvoked(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
