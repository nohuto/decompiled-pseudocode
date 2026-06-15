/*
 * XREFs of sub_1800533B8 @ 0x1800533B8
 * Callers:
 *     sub_1800015E0 @ 0x1800015E0 (sub_1800015E0.c)
 * Callees:
 *     sub_180052FF4 @ 0x180052FF4 (sub_180052FF4.c)
 *     sub_180053428 @ 0x180053428 (sub_180053428.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

// Hidden C++ exception states: #wind=3
char *sub_1800533B8()
{
  struct _FILETIME v0; // rcx

  InitializeCriticalSectionEx(&stru_18019EF98, 0, 0);
  sub_180053428(&unk_18019EFC0);
  qword_18019F068 = 0LL;
  memset(&word_18019F528, 0, 0x208uLL);
  sub_180052FF4(v0);
  return &byte_18019EF90;
}
