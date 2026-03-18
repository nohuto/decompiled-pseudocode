/*
 * XREFs of MmCombineIdenticalPages @ 0x140722BCC
 * Callers:
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 * Callees:
 *     MiGetThreadPartition @ 0x1403649E4 (MiGetThreadPartition.c)
 *     MiCombineIdenticalPages @ 0x140722C1C (MiCombineIdenticalPages.c)
 */

__int64 __fastcall MmCombineIdenticalPages(__int64 a1)
{
  __int64 ThreadPartition; // rax
  unsigned int v3; // edx
  __int64 v4; // r8
  __int64 v5; // r9
  char PreviousMode; // [rsp+20h] [rbp-18h]

  ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  return MiCombineIdenticalPages(ThreadPartition, a1, v3, v4, PreviousMode, v5);
}
