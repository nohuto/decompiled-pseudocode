/*
 * XREFs of HvlRescindEnlightenments @ 0x1402521B8
 * Callers:
 *     KiEnableKvaShadowing @ 0x1409A0790 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

void HvlRescindEnlightenments()
{
  _InterlockedOr(&HvlpRescindedEnlightenments, 1u);
  _InterlockedAnd(&HvlEnlightenments, 0xFFFFFFFE);
  _InterlockedAnd((volatile signed __int32 *)&HvlpEnlightenments, 0xFFFFFFFE);
}
