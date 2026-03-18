/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1408EE2B0
 * Callers:
 *     PopFanUpdateRunningState @ 0x1407AE528 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x1408EE360 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x14056BC9C (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140C23C08;
  if ( qword_140C23C08 < (unsigned __int64)qword_140C23C10 )
    v0 = qword_140C23C10;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140C23C10) / 0x989680uLL);
}
