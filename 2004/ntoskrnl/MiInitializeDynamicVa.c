/*
 * XREFs of MiInitializeDynamicVa @ 0x140A63B2C
 * Callers:
 *     MiInitNucleus @ 0x140A3D174 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiCountBootRegions @ 0x140A63BE4 (MiCountBootRegions.c)
 *     MiAssignSessionRanges @ 0x140A63C94 (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_140C4E188.Header.Size = 6;
  qword_140C4E1A0 = 0LL;
  LOWORD(stru_140C4E188.Header.Lock) = 0;
  stru_140C4E188.Header.SignalState = 0;
  stru_140C4E188.Header.WaitListHead.Blink = &stru_140C4E188.Header.WaitListHead;
  stru_140C4E188.Header.WaitListHead.Flink = &stru_140C4E188.Header.WaitListHead;
  MiAssignSessionRanges();
  qword_140C4F7A8 = MiCountBootRegions(
                      8 * (((unsigned __int64)qword_140C4F988 >> 39) & 0x1FF) - 0x90482413000LL,
                      8 * (((unsigned __int64)(qword_140C4F988 + 0x7FFFFFFFFFLL) >> 39) & 0x1FF) - 0x90482413000LL,
                      3LL);
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}
