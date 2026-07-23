/*
 * XREFs of MiReserveLowPrioritySystemPtes @ 0x14052AB44
 * Callers:
 *     MiZeroLargePage @ 0x1402353D8 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x140297360 (MiZeroInParallelWorker.c)
 *     MiCopyToUserVa @ 0x140319288 (MiCopyToUserVa.c)
 * Callees:
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReserveLowPrioritySystemPtes(unsigned int a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  return MiReservePtes((__int64)&qword_140C4EF80, a1, a3, a4);
}
