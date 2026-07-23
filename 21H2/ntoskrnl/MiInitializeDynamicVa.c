/*
 * XREFs of MiInitializeDynamicVa @ 0x140A6936C
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiCountBootRegions @ 0x140A69424 (MiCountBootRegions.c)
 *     MiAssignSessionRanges @ 0x140A694D4 (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_140C4E3C8.Header.Size = 6;
  qword_140C4E3E0 = 0LL;
  LOWORD(stru_140C4E3C8.Header.Lock) = 0;
  stru_140C4E3C8.Header.SignalState = 0;
  stru_140C4E3C8.Header.WaitListHead.Blink = &stru_140C4E3C8.Header.WaitListHead;
  stru_140C4E3C8.Header.WaitListHead.Flink = &stru_140C4E3C8.Header.WaitListHead;
  MiAssignSessionRanges();
  qword_140C4F9E8 = MiCountBootRegions(
                      8 * (((unsigned __int64)qword_140C4FBC8 >> 39) & 0x1FF) - 0x90482413000LL,
                      8 * (((unsigned __int64)(qword_140C4FBC8 + 0x7FFFFFFFFFLL) >> 39) & 0x1FF) - 0x90482413000LL,
                      3LL);
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}
