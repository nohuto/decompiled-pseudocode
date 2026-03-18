/*
 * XREFs of MiInitializeDynamicVa @ 0x140A6093C
 * Callers:
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiCountBootRegions @ 0x140A609F4 (MiCountBootRegions.c)
 *     MiAssignSessionRanges @ 0x140A60AA4 (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_140C4E2C8.Header.Size = 6;
  qword_140C4E2E0 = 0LL;
  LOWORD(stru_140C4E2C8.Header.Lock) = 0;
  stru_140C4E2C8.Header.SignalState = 0;
  stru_140C4E2C8.Header.WaitListHead.Blink = &stru_140C4E2C8.Header.WaitListHead;
  stru_140C4E2C8.Header.WaitListHead.Flink = &stru_140C4E2C8.Header.WaitListHead;
  MiAssignSessionRanges();
  qword_140C4F8E8 = MiCountBootRegions(
                      8 * (((unsigned __int64)qword_140C4FAC8 >> 39) & 0x1FF) - 0x90482413000LL,
                      8 * (((unsigned __int64)(qword_140C4FAC8 + 0x7FFFFFFFFFLL) >> 39) & 0x1FF) - 0x90482413000LL,
                      3LL);
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}
