/*
 * XREFs of ?iXlateBGRTo565@@YIKPAU_XLATEOBJ@@K@Z @ 0xB56D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall iXlateBGRTo565(struct _XLATEOBJ *a1, unsigned int a2)
{
  return (a2 & 0xF8 | ((a2 & 0xFC00 | ((unsigned int)&loc_1EFFFF + 1) & (a2 >> 3)) >> 2)) >> 3;
}
