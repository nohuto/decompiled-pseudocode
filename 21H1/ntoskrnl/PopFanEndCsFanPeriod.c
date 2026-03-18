/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1408ECFC0
 * Callers:
 *     PopFanUpdateRunningState @ 0x1407AB3C8 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x1408ED070 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x14056B64C (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140C22F88;
  if ( qword_140C22F88 < (unsigned __int64)qword_140C22F90 )
    v0 = qword_140C22F90;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140C22F90) / 0x989680uLL);
}
