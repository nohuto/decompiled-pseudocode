/*
 * XREFs of MiInitializeDynamicVa @ 0x140B29DA0
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiCountBootDriverRegions @ 0x140B29E10 (MiCountBootDriverRegions.c)
 *     MiAssignSessionRanges @ 0x140B29EB4 (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_140C51C10.Header.Size = 6;
  qword_140C51C28 = 0LL;
  LOWORD(stru_140C51C10.Header.Lock) = 0;
  stru_140C51C10.Header.SignalState = 0;
  stru_140C51C10.Header.WaitListHead.Blink = &stru_140C51C10.Header.WaitListHead;
  stru_140C51C10.Header.WaitListHead.Flink = &stru_140C51C10.Header.WaitListHead;
  MiAssignSessionRanges();
  qword_140C53F28 = MiCountBootDriverRegions();
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}
