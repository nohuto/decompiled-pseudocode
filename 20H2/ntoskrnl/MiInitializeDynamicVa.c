/*
 * XREFs of MiInitializeDynamicVa @ 0x140A6ADFC
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiCountBootRegions @ 0x140A6AEB4 (MiCountBootRegions.c)
 *     MiAssignSessionRanges @ 0x140A6AF64 (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_140C4E208.Header.Size = 6;
  qword_140C4E220 = 0LL;
  LOWORD(stru_140C4E208.Header.Lock) = 0;
  stru_140C4E208.Header.SignalState = 0;
  stru_140C4E208.Header.WaitListHead.Blink = &stru_140C4E208.Header.WaitListHead;
  stru_140C4E208.Header.WaitListHead.Flink = &stru_140C4E208.Header.WaitListHead;
  MiAssignSessionRanges();
  qword_140C4F828 = MiCountBootRegions(
                      8 * (((unsigned __int64)qword_140C4FA08 >> 39) & 0x1FF) - 0x90482413000LL,
                      8 * (((unsigned __int64)(qword_140C4FA08 + 0x7FFFFFFFFFLL) >> 39) & 0x1FF) - 0x90482413000LL,
                      3LL);
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}
