/*
 * XREFs of VfDisableCodeIntegrityBreaks @ 0x1409C4E10
 * Callers:
 *     ViInitSystemPhase0 @ 0x140A6BFC8 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

void VfDisableCodeIntegrityBreaks()
{
  ViCiDefaultActions = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  qword_140D3F148 = ViCiDefaultActions;
}
