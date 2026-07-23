/*
 * XREFs of MmCombineIdenticalPages @ 0x140726B10
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     MiGetThreadPartition @ 0x140364DF8 (MiGetThreadPartition.c)
 *     MiCombineIdenticalPages @ 0x140726B60 (MiCombineIdenticalPages.c)
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
