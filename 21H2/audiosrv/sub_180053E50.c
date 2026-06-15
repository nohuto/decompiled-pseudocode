/*
 * XREFs of sub_180053E50 @ 0x180053E50
 * Callers:
 *     sub_1800017D0 @ 0x1800017D0 (sub_1800017D0.c)
 * Callees:
 *     sub_180010FD8 @ 0x180010FD8 (sub_180010FD8.c)
 */

int *sub_180053E50()
{
  dword_18019E740 = 72;
  qword_18019E778 = 0LL;
  dword_18019E780 = 0;
  dword_18019E784 = 0;
  qword_18019E770 = 0LL;
  *(_OWORD *)&stru_18019E748.DebugInfo = 0LL;
  stru_18019E748.SpinCount = 0LL;
  *(_OWORD *)&stru_18019E748.OwningThread = 0LL;
  if ( (int)sub_180010FD8(&stru_18019E748) < 0 )
  {
    dword_18019E740 = 0;
    byte_18019E5E0 = 1;
  }
  return &dword_18019E740;
}
