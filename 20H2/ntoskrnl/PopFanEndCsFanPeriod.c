/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1408F3EC0
 * Callers:
 *     PopFanUpdateRunningState @ 0x1407BC468 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x1408F3F70 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x14056F6CC (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140C22E88;
  if ( qword_140C22E88 < (unsigned __int64)qword_140C22E90 )
    v0 = qword_140C22E90;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140C22E90) / 0x989680uLL);
}
