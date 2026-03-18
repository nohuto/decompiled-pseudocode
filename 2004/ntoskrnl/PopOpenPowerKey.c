/*
 * XREFs of PopOpenPowerKey @ 0x1403A5434
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x1407618C4 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x140761F6C (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x1407666D4 (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x140783F90 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x140785428 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14078550C (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x1408DD8EC (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x1403A5458 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
