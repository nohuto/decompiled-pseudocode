/*
 * XREFs of ?iXlateBGRTo555@@YIKPAU_XLATEOBJ@@K@Z @ 0xB56B2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall iXlateBGRTo555(struct _XLATEOBJ *a1, unsigned int a2)
{
  return (a2 & 0xF8 | ((a2 & 0xF800 | ((unsigned int)&loc_1EFFFF + 1) & (a2 >> 3)) >> 3)) >> 3;
}
