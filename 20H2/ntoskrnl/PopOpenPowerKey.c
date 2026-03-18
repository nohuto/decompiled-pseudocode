/*
 * XREFs of PopOpenPowerKey @ 0x1403A7834
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x14076FED4 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x14077057C (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x140775704 (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x140791980 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x140793178 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14079325C (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x1408E372C (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x1403A7858 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
