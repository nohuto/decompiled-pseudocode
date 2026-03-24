/*
 * XREFs of MiInitializeDynamicVa @ 0x140A6836C
 * Callers:
 *     MiInitNucleus @ 0x140A42F34 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiCountBootRegions @ 0x140A68424 (MiCountBootRegions.c)
 *     MiAssignSessionRanges @ 0x140A684D4 (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_140C4E388.Header.Size = 6;
  qword_140C4E3A0 = 0LL;
  LOWORD(stru_140C4E388.Header.Lock) = 0;
  stru_140C4E388.Header.SignalState = 0;
  stru_140C4E388.Header.WaitListHead.Blink = &stru_140C4E388.Header.WaitListHead;
  stru_140C4E388.Header.WaitListHead.Flink = &stru_140C4E388.Header.WaitListHead;
  MiAssignSessionRanges();
  qword_140C4F9A8 = MiCountBootRegions(
                      8 * (((unsigned __int64)qword_140C4FB88 >> 39) & 0x1FF) - 0x90482413000LL,
                      8 * (((unsigned __int64)(qword_140C4FB88 + 0x7FFFFFFFFFLL) >> 39) & 0x1FF) - 0x90482413000LL,
                      3LL);
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}
