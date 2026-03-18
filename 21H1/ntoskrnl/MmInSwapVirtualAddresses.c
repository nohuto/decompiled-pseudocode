/*
 * XREFs of MmInSwapVirtualAddresses @ 0x140720690
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x1402D10A4 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     MiProcessWsInSwapSupport @ 0x1402CCB90 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwTraceWorkingSetSwap @ 0x140655B80 (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x140655F58 (MiContractWsSwapPageFile.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInSwapVirtualAddresses(PEPROCESS Process, PVOID P)
{
  __int64 ProcessPartition; // rbx
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  memset(v6, 0, sizeof(v6));
  v7 = 0LL;
  LODWORD(v6[0]) = 2;
  EtwTraceWorkingSetSwap(Process, 3, (__int64)v6);
  ProcessPartition = MiGetProcessPartition((__int64)Process);
  MiProcessWsInSwapSupport((__int64)P, 2u);
  ExFreePoolWithTag(P, 0);
  MiContractWsSwapPageFile(ProcessPartition);
  LODWORD(v7) = 0;
  EtwTraceWorkingSetSwap(Process, 1, (__int64)v6);
  return 0LL;
}
