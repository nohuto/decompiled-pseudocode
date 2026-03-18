/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x14097FF40
 * Callers:
 *     <none>
 * Callees:
 *     MiProcessWsInSwapSupport @ 0x14025EC08 (MiProcessWsInSwapSupport.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406EC158 (MiFreeWorkingSetSwapContext.c)
 *     EtwTraceWorkingSetSwap @ 0x1406EC338 (EtwTraceWorkingSetSwap.c)
 */

LONG_PTR __fastcall MiInSwapSharedWorkingSetWorker(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 ProcessPartition; // rax
  _OWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h]
  _OWORD v10[3]; // [rsp+48h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v9 = 0LL;
  memset(v10, 0, sizeof(v10));
  memset(v8, 0, sizeof(v8));
  KiStackAttachProcess((_KPROCESS *)v4, 0LL, (__int64)v10, a4);
  LODWORD(v8[0]) = 1;
  EtwTraceWorkingSetSwap((PEPROCESS)v4, 3, (__int64)v8);
  _InterlockedExchange((volatile __int32 *)(v4 + 2272), 1000);
  MiProcessWsInSwapSupport(*(_QWORD *)(a1 + 8), 1);
  _InterlockedExchange((volatile __int32 *)(v4 + 2272), 0);
  LODWORD(v9) = -1;
  EtwTraceWorkingSetSwap((PEPROCESS)v4, 1, (__int64)v8);
  KiUnstackDetachProcess((__int64)v10, 0LL);
  ProcessPartition = MiGetProcessPartition(v4);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext(ProcessPartition, a1);
  return ObfDereferenceObjectWithTag((PVOID)v4, 0x73576D4Du);
}
