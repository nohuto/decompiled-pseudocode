/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x1408D51B0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiProcessWsInSwapSupport @ 0x1402CCB90 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwTraceWorkingSetSwap @ 0x140655B80 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x140655F9C (MiFreeWorkingSetSwapContext.c)
 */

LONG_PTR __fastcall MiInSwapSharedWorkingSetWorker(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 ProcessPartition; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h]
  _OWORD v12[3]; // [rsp+48h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  memset(v10, 0, sizeof(v10));
  KiStackAttachProcess((_KPROCESS *)v4, 0LL, (__int64)v12, a4);
  LODWORD(v10[0]) = 1;
  EtwTraceWorkingSetSwap((PEPROCESS)v4, 3, (__int64)v10);
  _InterlockedExchange((volatile __int32 *)(v4 + 2272), 1000);
  MiProcessWsInSwapSupport(*(_QWORD *)(a1 + 8), 1u);
  _InterlockedExchange((volatile __int32 *)(v4 + 2272), 0);
  LODWORD(v11) = -1;
  EtwTraceWorkingSetSwap((PEPROCESS)v4, 1, (__int64)v10);
  KiUnstackDetachProcess((__int64)v12, 0LL, v6, v7);
  ProcessPartition = MiGetProcessPartition(v4);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext(ProcessPartition, a1);
  return ObfDereferenceObjectWithTag((PVOID)v4, 0x73576D4Du);
}
