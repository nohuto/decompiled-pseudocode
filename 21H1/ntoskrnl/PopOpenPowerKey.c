/*
 * XREFs of PopOpenPowerKey @ 0x1403A484C
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x14075FFE4 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x14076068C (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x140764D14 (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x14077B590 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14077CA28 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14077CB0C (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x1408DC57C (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x1403A4870 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
