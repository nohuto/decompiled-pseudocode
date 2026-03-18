/*
 * XREFs of GreUnlockRegion @ 0x1C00D0A60
 * Callers:
 *     <none>
 * Callees:
 *     HmgUnlock @ 0x1C004C1E4 (HmgUnlock.c)
 */

__int64 __fastcall GreUnlockRegion(unsigned int a1)
{
  return HmgUnlock(a1);
}
