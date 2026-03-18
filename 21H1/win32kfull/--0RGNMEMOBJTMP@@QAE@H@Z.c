/*
 * XREFs of ??0RGNMEMOBJTMP@@QAE@H@Z @ 0xF6A4A
 * Callers:
 *     ?psSetupTransparentSrcSurface@@YGPAVSURFACE@@PAV1@0PAU_RECTL@@PAU_XLATEOBJ@@1AAVSURFMEM@@KK@Z @ 0x5317A (-psSetupTransparentSrcSurface@@YGPAVSURFACE@@PAV1@0PAU_RECTL@@PAU_XLATEOBJ@@1AAVSURFMEM@@KK@Z.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJTMP *__thiscall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this, int a2)
{
  RGNMEMOBJ::RGNMEMOBJ(this, 0, 1);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
