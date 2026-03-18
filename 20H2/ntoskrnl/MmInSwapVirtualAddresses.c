/*
 * XREFs of MmInSwapVirtualAddresses @ 0x140730660
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x14025E160 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14027C520 (MiGetProcessPartition.c)
 *     MiProcessWsInSwapSupport @ 0x140339CEC (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     EtwTraceWorkingSetSwap @ 0x1406F07D8 (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x1406F0C78 (MiContractWsSwapPageFile.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
