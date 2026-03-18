/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1409990E8
 * Callers:
 *     PopFanUpdateCsState @ 0x1409994F8 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x140999574 (PopFanUpdateRunningState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x1405D1330 (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140C22310;
  if ( qword_140C22310 < (unsigned __int64)qword_140C22318 )
    v0 = qword_140C22318;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140C22318) / 0x989680uLL);
}
