/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1408F16C0
 * Callers:
 *     PopFanUpdateRunningState @ 0x1407C0868 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x1408F1770 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x1405710DC (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140C22F88;
  if ( qword_140C22F88 < (unsigned __int64)qword_140C22F90 )
    v0 = qword_140C22F90;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140C22F90) / 0x989680uLL);
}
