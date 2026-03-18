/*
 * XREFs of KiIsKvaShadowNeededForBranchConfusion @ 0x1403F1D28
 * Callers:
 *     KiDetectKvaLeakage @ 0x14099F8D0 (KiDetectKvaLeakage.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8164 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1403F1C64 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1403F1CBC (KiIsBranchConfusionMitigationSupported.c)
 */

_BOOL8 __fastcall KiIsKvaShadowNeededForBranchConfusion(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  KiDetectHardwareSpecControlFeatures(a1, 0, &v4, 0LL);
  return (v4 & 0x8000) != 0
      && (unsigned int)KiIsBranchConfusionMitigationDesired(a1, &v4)
      && KiIsBranchConfusionMitigationSupported(v2, &v4);
}
