/*
 * XREFs of KiIsKvaShadowNeededForTsa @ 0x1403F322C
 * Callers:
 *     KiDetectKvaLeakage @ 0x14099D588 (KiDetectKvaLeakage.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403ADD1C (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsTsaMitigationDesired @ 0x1403F33D0 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x1403F33EC (KiIsTsaMitigationSupported.c)
 */

_BOOL8 __fastcall KiIsKvaShadowNeededForTsa(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v3 = 0LL;
  KiDetectHardwareSpecControlFeatures(a1, 0, (__int64)&v3, 0LL);
  return (v3 & 0x2000000) != 0
      && (unsigned int)KiIsTsaMitigationDesired()
      && (unsigned int)KiIsTsaMitigationSupported(a1);
}
