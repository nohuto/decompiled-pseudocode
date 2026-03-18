/*
 * XREFs of MmInSwapVirtualAddresses @ 0x140980040
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x14037592C (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiProcessWsInSwapSupport @ 0x14025EC08 (MiProcessWsInSwapSupport.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiContractWsSwapPageFile @ 0x1406EC1C4 (MiContractWsSwapPageFile.c)
 *     EtwTraceWorkingSetSwap @ 0x1406EC338 (EtwTraceWorkingSetSwap.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  MiProcessWsInSwapSupport((__int64)P, 2);
  ExFreePoolWithTag(P, 0);
  MiContractWsSwapPageFile(ProcessPartition);
  LODWORD(v7) = 0;
  EtwTraceWorkingSetSwap(Process, 1, (__int64)v6);
  return 0LL;
}
