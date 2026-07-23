/*
 * XREFs of _NtCompareSigningLevels@8 @ 0x4B2F3340
 * Callers:
 *     _LdrpSetModuleSigningLevel@20 @ 0x4B333D52 (_LdrpSetModuleSigningLevel@20.c)
 *     _LdrpValidateIntegrityContinuity@12 @ 0x4B333DBC (_LdrpValidateIntegrityContinuity@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  return Wow64SystemServiceCall();
}
