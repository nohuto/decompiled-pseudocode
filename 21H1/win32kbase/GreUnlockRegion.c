/*
 * XREFs of GreUnlockRegion @ 0x1C00D0060
 * Callers:
 *     <none>
 * Callees:
 *     HmgUnlock @ 0x1C003F794 (HmgUnlock.c)
 */

__int64 __fastcall GreUnlockRegion(unsigned int a1)
{
  return HmgUnlock(a1);
}
