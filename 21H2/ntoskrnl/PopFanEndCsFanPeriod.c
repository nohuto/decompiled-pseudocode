/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1408F1820
 * Callers:
 *     PopFanUpdateRunningState @ 0x1407C0D88 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x1408F18D0 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x14057131C (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140C235E8;
  if ( qword_140C235E8 < (unsigned __int64)qword_140C235F0 )
    v0 = qword_140C235F0;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140C235F0) / 0x989680uLL);
}
