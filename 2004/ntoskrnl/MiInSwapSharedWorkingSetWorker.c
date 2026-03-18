/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x1408D6500
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiGetProcessPartition @ 0x1402AD1E0 (MiGetProcessPartition.c)
 *     MiProcessWsInSwapSupport @ 0x14030E55C (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     EtwTraceWorkingSetSwap @ 0x1406D01E0 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406D05FC (MiFreeWorkingSetSwapContext.c)
 */

LONG_PTR __fastcall MiInSwapSharedWorkingSetWorker(__int64 a1)
{
  __int64 v1; // rdi
  __int64 ProcessPartition; // rax
  _OWORD v5[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v6; // [rsp+40h] [rbp-40h]
  _OWORD v7[3]; // [rsp+48h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v6 = 0LL;
  memset(v7, 0, sizeof(v7));
  memset(v5, 0, sizeof(v5));
  KiStackAttachProcess((_KPROCESS *)v1, 0LL, (__int64)v7);
  LODWORD(v5[0]) = 1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 3, (__int64)v5);
  _InterlockedExchange((volatile __int32 *)(v1 + 2272), 1000);
  MiProcessWsInSwapSupport(*(_QWORD *)(a1 + 8), 1u);
  _InterlockedExchange((volatile __int32 *)(v1 + 2272), 0);
  LODWORD(v6) = -1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 1, (__int64)v5);
  KiUnstackDetachProcess((__int64)v7, 0LL);
  ProcessPartition = MiGetProcessPartition(v1);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext(ProcessPartition, a1);
  return ObfDereferenceObjectWithTag((PVOID)v1, 0x73576D4Du);
}
